// Copyright (c) 2014-2021 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

#include <tao/pegtl.hpp>

namespace pegtl = TAO_PEGTL_NAMESPACE;

namespace Cacao::generation {
	namespace grammar {
		using namespace TAO_PEGTL_NAMESPACE;

		template<typename Delimeter, typename... Rules >
		using seq_delim = seq<pad<Rules, Delimeter>...>;

		struct keyword_const : string<'c', 'o', 'n', 's', 't'> {};
		struct keyword_pointer : string<'*'> {};
		struct keyword_reference : string<'&'> {};
		struct keyword_comma : string<','> {};
		struct keyword_namespace : string<':', ':'> {};
		struct keyword_comment : string<'/', '/'> {};
		struct keyword_multi_comment_begin : string<'/', '*'> {};
		struct keyword_multi_comment_end : string<'*', '/'> {};
		struct keyword_unsigned : string<'u', 'n', 's', 'i', 'g', 'n', 'e', 'd'> {};
		struct keyword_template_left : string<'<'> {};
		struct keyword_template_right : string<'>'> {};
		struct keyword_paren_left : string<'('> {};
		struct keyword_paren_right : string<')'> {};
		struct keyword_curly_left : string<'{'> {};
		struct keyword_curly_right : string<'}'> {};
		struct keyword_equals : string<'='> {};
		struct keyword_tilde : string<'~'> {};
		struct keyword_semicolon : string<';'> {};
		struct keyword_hex_prefix : string<'0', 'x'> {};
		struct keyword_virtual : string<'v', 'i', 'r', 't', 'u', 'a', 'l'> {};
		struct keyword_static : string<'s', 't', 'a', 't', 'i', 'c'> {};
		struct keyword_inline : string<'i', 'n', 'l', 'i', 'n', 'e'> {};
		struct keyword_class : string<'c', 'l', 'a', 's', 's'> {};

		struct comment : seq<keyword_comment, until<eolf>> {};
		struct multi_comment : seq<keyword_multi_comment_begin, until<keyword_multi_comment_end>> {};

		struct ignored : sor<space, comment, multi_comment> {};

		struct parameter_pack;
		struct template_content : list<parameter_pack, opt<ignored>> {};
		struct template_declare : seq_delim<ignored, keyword_template_left, template_content, keyword_template_right> {};

		struct inline_content;
		struct inline_content : seq_delim<not_one<'{', '}'>,
			keyword_curly_left, 
			opt<inline_content>, 
			keyword_curly_right
		> {};
		struct inline_declare : seq<
			star<ignored>, 
			keyword_inline, 
			star<not_one<'{', '}'>>, 
			opt<inline_content>, 
			star<not_one<'{', '}'>>, 
			eolf
		> {};

		struct namespaced_type : list<seq<identifier, opt<template_declare>>, keyword_namespace, ignored> {};

		struct optional_const : opt<pad<keyword_const, ignored>> {};

		struct pointer : list<seq<optional_const, keyword_pointer>, ignored> {};
		struct reference : list<seq<optional_const, keyword_reference>, ignored> {};

		struct type : seq_delim<ignored,
			optional_const, 
			opt<pad<keyword_unsigned, ignored>>,
			pad<namespaced_type, ignored>,
			opt<pointer>,
			opt<reference>
		> {};
		struct name : seq<opt<keyword_tilde>, identifier> {};

		struct parameter : seq_delim<ignored, type, opt<name>> {};
		struct parameter_pack : list<parameter, keyword_comma, ignored> {};

		struct typeless_declaration : seq_delim<ignored, name> {};
		struct declaration : seq_delim<ignored, type, name> {};
		struct storage : opt<sor<keyword_static, keyword_virtual>> {};

		struct hex_digit : seq<keyword_hex_prefix, plus<xdigit>> {};
		struct dec_digit : plus<digit> {};
		struct address : sor<hex_digit, dec_digit> {};
		struct addresses : list<opt<address>, keyword_comma, ignored> {};

		struct function_declaration : if_then_else<
			at<seq_delim<ignored,
				declaration,
				keyword_paren_left
			>>,
			declaration,
			typeless_declaration
		> {};

		struct function : seq_delim<ignored, 
			storage,
			function_declaration,
			keyword_paren_left,
			opt<parameter_pack>,
			keyword_paren_right,
			optional_const,
			opt<seq_delim<ignored,
				keyword_equals,
				addresses
			>>,
			keyword_semicolon
		> {};

		struct member : seq_delim<ignored, 
			storage,
			declaration,
			opt<seq_delim<ignored,
				keyword_equals,
				addresses
			>>,
			keyword_semicolon
		> {};

		struct information : sor<function, member, inline_declare> {};
		struct informations : list<information, at<information>> {};

		struct grammar : seq<informations, eof> {};
	}

	namespace action {
		template<typename Rule> struct action {};

		using namespace grammar;

		template<> 
		struct action<information> {
			template<typename ActionInput>
			static void apply(const ActionInput& in) {
				std::cout << in.string() << std::endl;
			}
		};
	}
}


#include <tao/pegtl/contrib/analyze.hpp>

int main() {
	if (pegtl::analyze<Cacao::generation::grammar::grammar>() != 0 ) {
		return 1;
	}

	std::string str;

	while (!std::getline(std::cin, str).fail()) {
		if (str.empty() || str[ 0 ] == 'q' || str[ 0 ] == 'Q') {
			break;
		}
		pegtl::memory_input in(str, "std::cin");
		if (pegtl::parse<Cacao::generation::grammar::grammar, Cacao::generation::action::action>(in) ) {
			std::cout << "parsing OK" << std::endl;
		}
		else {
			std::cout << "parsing failed" << std::endl;
		}
	}
}
