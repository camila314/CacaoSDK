#include "shared.hpp"

namespace format_strings {
    char const* header_start = R"CAC(
// 
// Copyright camila314 & alk1m123 2022. 
// Automatically generated file
//
#pragma once
#include <HeaderBase.hpp>
)CAC";
    // requires: base_classes, class_name
    char const* class_start = R"CAC(
class {class_name}{base_classes} {{
public:
)CAC";
    
    // requires: static, virtual, return_type, function_name, raw_parameters, const
    char const* function_definition = "   {static}{virtual}{return_type}{function_name}({raw_parameters}){const};\n";
    
    // requires: type, member_name, array
    char const* member_definition = "   {type} {member_name}{array};\n";

    // requires: hardcode_macro, type, member_name, hardcode
    char const* hardcode_definition = "   {hardcode_macro}({type}, {member_name}, {hardcode});\n";
}

void sortClass(Root& r, ClassDefinition& c, vector<ClassDefinition*>& sorts) {
    if (std::find(sorts.begin(), sorts.end(), &c) == sorts.end()) {

        for (string j : c.superclasses) {
            if (r.classes.count(j) == 0) {
                cacerr("Expected class definition for %s\n", j.c_str());
            }
            sortClass(r, r.classes[j], sorts);
        }

        sorts.push_back(&c);
    }
}
int main(int argc, char** argv) {
    vector<ClassDefinition*> in_order;
    string output(format_strings::header_start);
    Root root = CacShare::init(argc, argv);

    for (auto& [name, c] : root.classes) {
        sortClass(root, c, in_order);
    }

    for (auto cd : in_order) {
        if (cd->name.find("cocos2d::") != string::npos)
            continue; // cocos headers exist already

        for (auto fi : cd->in_order) {
            if (fi->field_type == 'F') {
                Function& f = reinterpret_cast<Function&>(*fi);
                // function
                fmt::print("{}\n", typeid(*fi).name());

                output += fmt::format(format_strings::function_definition,
                    fmt::arg("virtual", f.function_type == kVirtualFunction ? "virtual " : ""),
                    fmt::arg("static", f.function_type == kStaticFunction ? "static " : ""),
                    fmt::arg("return_type", CacShare::getReturn(f)),
                    fmt::arg("function_name", f.name),
                    fmt::arg("raw_parameters", CacShare::formatRawParameters(f.args.size())),
                    fmt::arg("const", f.is_const ? "const " : "")
                );
            } else if (fi->field_type == 'M') {
                // member
            } else if (fi->field_type == 'I') {
                // inline
            }
        }
    }

    fmt::print("{}", output);
}
