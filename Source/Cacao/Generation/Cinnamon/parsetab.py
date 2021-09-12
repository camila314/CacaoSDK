
# parsetab.py
# This file is automatically generated. Do not edit.
# pylint: disable=W,C,R
_tabversion = '3.10'

_lr_method = 'LALR'

_lr_signature = 'bodyADDRESS ASSIGN CHAR CLASS COLON COMMA CONST IDENT INCLUDE LCURLY LPAREN LTRI NUM OPTCALL RCURLY RPAREN RTRI SEMI STATIC STDCALL TEMPLATEDATA THISCALL UNSIGNED VIRTUAL VOLATILE VOLATILEDATA WHITESPACEempty :include : INCLUDE LTRI TEMPLATEDATA RTRIinclude : include includebody : bodypurebody : emptybodypure : bodypure bodypurebodypure : class LCURLY info RCURLYbodypure : includeclass : CLASS IDENTclass : CLASS IDENT COLON classbaseclassbase : classbase COMMA classbaseclassbase : IDENTinfo : info infoinfo : functioninfo : volatileinfo : membermember : declaration offset SEMImember : declaration SEMIfunction : VIRTUAL purefunction offset SEMIfunction : STATIC purefunction offset SEMIfunction : purefunction offset SEMIpurefunction : declaration parameterpurefunction : declaration parameter CONSTpurefunction : name parameteroffset : ASSIGN ADDRESSparameter : LPAREN pureparameter RPARENpureparameter : pureparameter COMMA pureparameterpureparameter : typepureparameter : declarationpureparameter : emptydeclaration : type namename : IDENTtype : puretypepuretype : puretype templatepuretype : UNSIGNED puretypepuretype : CONST puretypepuretype : CHAR puretypepuretype : CHARpuretype : IDENTtemplate : LTRI puretemplate RTRIpuretemplate : TEMPLATEDATApuretemplate : TEMPLATEDATA puretemplatepuretemplate : template puretemplatevolatile : VOLATILE purevolatilepurevolatile : LCURLY purevolatile RCURLYpurevolatile : purevolatile purevolatilepurevolatile : VOLATILEDATApurevolatile : LCURLY RCURLYpurevolatile : SEMI'
    
_lr_action_items = {'$end':([0,1,2,3,5,8,10,32,57,],[-1,0,-4,-5,-8,-6,-3,-7,-2,]),'CLASS':([0,2,5,8,10,32,57,],[6,6,-8,6,-3,-7,-2,]),'INCLUDE':([0,2,5,8,10,32,57,],[7,7,7,7,7,-7,-2,]),'LCURLY':([4,11,20,38,39,40,41,55,56,62,63,64,77,83,],[9,-9,39,39,39,-47,-49,-12,-10,39,39,-48,-45,-11,]),'IDENT':([6,9,13,14,15,16,17,19,22,24,25,26,27,28,29,31,38,40,41,43,45,46,47,51,53,54,59,62,64,65,68,74,75,76,77,79,80,],[11,25,25,-14,-15,-16,25,25,47,50,-39,-33,47,47,55,25,-44,-47,-49,-18,47,-36,-39,-34,-35,-37,-21,-46,-48,-17,50,55,-19,-20,-45,47,-40,]),'LTRI':([7,25,26,28,46,47,51,52,53,54,72,73,80,],[12,-39,52,-38,52,-39,-34,52,52,52,52,52,-40,]),'VIRTUAL':([9,13,14,15,16,31,38,40,41,43,59,62,64,65,75,76,77,],[17,17,-14,-15,-16,17,-44,-47,-49,-18,-21,-46,-48,-17,-19,-20,-45,]),'STATIC':([9,13,14,15,16,31,38,40,41,43,59,62,64,65,75,76,77,],[19,19,-14,-15,-16,19,-44,-47,-49,-18,-21,-46,-48,-17,-19,-20,-45,]),'VOLATILE':([9,13,14,15,16,31,38,40,41,43,59,62,64,65,75,76,77,],[20,20,-14,-15,-16,20,-44,-47,-49,-18,-21,-46,-48,-17,-19,-20,-45,]),'UNSIGNED':([9,13,14,15,16,17,19,22,27,28,31,38,40,41,43,45,59,62,64,65,75,76,77,79,],[27,27,-14,-15,-16,27,27,27,27,27,27,-44,-47,-49,-18,27,-21,-46,-48,-17,-19,-20,-45,27,]),'CONST':([9,13,14,15,16,17,19,22,27,28,31,38,40,41,43,44,45,59,62,64,65,75,76,77,78,79,],[22,22,-14,-15,-16,22,22,22,22,22,22,-44,-47,-49,-18,66,22,-21,-46,-48,-17,-19,-20,-45,-26,22,]),'CHAR':([9,13,14,15,16,17,19,22,27,28,31,38,40,41,43,45,59,62,64,65,75,76,77,79,],[28,28,-14,-15,-16,28,28,28,28,28,28,-44,-47,-49,-18,28,-21,-46,-48,-17,-19,-20,-45,28,]),'COLON':([11,],[29,]),'TEMPLATEDATA':([12,52,72,73,80,],[30,72,72,72,-40,]),'RCURLY':([13,14,15,16,31,38,39,40,41,43,59,62,63,64,65,75,76,77,],[32,-14,-15,-16,-13,-44,64,-47,-49,-18,-21,-46,77,-48,-17,-19,-20,-45,]),'ASSIGN':([18,21,33,37,44,48,49,50,66,78,],[36,36,36,36,-22,-24,-31,-32,-23,-26,]),'VOLATILEDATA':([20,38,39,40,41,62,63,64,77,],[40,40,40,-47,-49,40,40,-48,-45,]),'SEMI':([20,21,35,38,39,40,41,42,49,50,58,60,61,62,63,64,77,],[41,43,59,41,41,-47,-49,65,-31,-32,75,-25,76,41,41,-48,-45,]),'LPAREN':([21,23,25,34,49,50,],[45,45,-32,45,-31,-32,]),'RPAREN':([26,28,45,46,47,49,50,51,53,54,67,68,69,70,79,80,84,],[-33,-38,-1,-36,-39,-31,-32,-34,-35,-37,78,-28,-29,-30,-1,-40,-27,]),'COMMA':([26,28,45,46,47,49,50,51,53,54,55,56,67,68,69,70,79,80,83,84,],[-33,-38,-1,-36,-39,-31,-32,-34,-35,-37,-12,74,79,-28,-29,-30,-1,-40,74,79,]),'RTRI':([30,71,72,81,82,],[57,80,-41,-42,-43,]),'ADDRESS':([36,],[60,]),}

_lr_action = {}
for _k, _v in _lr_action_items.items():
   for _x,_y in zip(_v[0],_v[1]):
      if not _x in _lr_action:  _lr_action[_x] = {}
      _lr_action[_x][_k] = _y
del _lr_action_items

_lr_goto_items = {'body':([0,],[1,]),'bodypure':([0,2,8,],[2,8,8,]),'empty':([0,45,79,],[3,70,70,]),'class':([0,2,8,],[4,4,4,]),'include':([0,2,5,8,10,],[5,5,10,5,10,]),'info':([9,13,31,],[13,31,31,]),'function':([9,13,31,],[14,14,14,]),'volatile':([9,13,31,],[15,15,15,]),'member':([9,13,31,],[16,16,16,]),'purefunction':([9,13,17,19,31,],[18,18,33,37,18,]),'declaration':([9,13,17,19,31,45,79,],[21,21,34,34,21,69,69,]),'name':([9,13,17,19,24,31,68,],[23,23,23,23,49,23,49,]),'type':([9,13,17,19,31,45,79,],[24,24,24,24,24,68,68,]),'puretype':([9,13,17,19,22,27,28,31,45,79,],[26,26,26,26,46,53,54,26,26,26,]),'offset':([18,21,33,37,],[35,42,58,61,]),'purevolatile':([20,38,39,62,63,],[38,62,63,62,62,]),'parameter':([21,23,34,],[44,48,44,]),'template':([26,46,52,53,54,72,73,],[51,51,73,51,51,73,73,]),'classbase':([29,74,],[56,83,]),'pureparameter':([45,79,],[67,84,]),'puretemplate':([52,72,73,],[71,81,82,]),}

_lr_goto = {}
for _k, _v in _lr_goto_items.items():
   for _x, _y in zip(_v[0], _v[1]):
       if not _x in _lr_goto: _lr_goto[_x] = {}
       _lr_goto[_x][_k] = _y
del _lr_goto_items
_lr_productions = [
  ("S' -> body","S'",1,None,None,None),
  ('empty -> <empty>','empty',0,'p_empty','Parser.py',61),
  ('include -> INCLUDE LTRI TEMPLATEDATA RTRI','include',4,'p_include_include','Parser.py',67),
  ('include -> include include','include',2,'p_include_includes','Parser.py',72),
  ('body -> bodypure','body',1,'p_body_body','Parser.py',79),
  ('body -> empty','body',1,'p_body_empty','Parser.py',84),
  ('bodypure -> bodypure bodypure','bodypure',2,'p_bodypure_bodypure','Parser.py',89),
  ('bodypure -> class LCURLY info RCURLY','bodypure',4,'p_bodypure_body','Parser.py',94),
  ('bodypure -> include','bodypure',1,'p_bodypure_include','Parser.py',101),
  ('class -> CLASS IDENT','class',2,'p_class_class','Parser.py',113),
  ('class -> CLASS IDENT COLON classbase','class',4,'p_class_based','Parser.py',120),
  ('classbase -> classbase COMMA classbase','classbase',3,'p_classbase_bases','Parser.py',131),
  ('classbase -> IDENT','classbase',1,'p_classbase_base','Parser.py',136),
  ('info -> info info','info',2,'p_info_infos','Parser.py',144),
  ('info -> function','info',1,'p_info_function','Parser.py',149),
  ('info -> volatile','info',1,'p_info_volatile','Parser.py',154),
  ('info -> member','info',1,'p_info_member','Parser.py',159),
  ('member -> declaration offset SEMI','member',3,'p_member_normal','Parser.py',167),
  ('member -> declaration SEMI','member',2,'p_member_offsetless','Parser.py',174),
  ('function -> VIRTUAL purefunction offset SEMI','function',4,'p_function_virtual','Parser.py',183),
  ('function -> STATIC purefunction offset SEMI','function',4,'p_function_static','Parser.py',191),
  ('function -> purefunction offset SEMI','function',3,'p_function_normal','Parser.py',199),
  ('purefunction -> declaration parameter','purefunction',2,'p_purefunction_pure','Parser.py',206),
  ('purefunction -> declaration parameter CONST','purefunction',3,'p_purefunction_const','Parser.py',214),
  ('purefunction -> name parameter','purefunction',2,'p_purefunction_returnless','Parser.py',223),
  ('offset -> ASSIGN ADDRESS','offset',2,'p_offset_offset','Parser.py',234),
  ('parameter -> LPAREN pureparameter RPAREN','parameter',3,'p_parameter_parameter','Parser.py',242),
  ('pureparameter -> pureparameter COMMA pureparameter','pureparameter',3,'p_pureparameter_types','Parser.py',247),
  ('pureparameter -> type','pureparameter',1,'p_pureparameter_type','Parser.py',252),
  ('pureparameter -> declaration','pureparameter',1,'p_pureparameter_declaration','Parser.py',257),
  ('pureparameter -> empty','pureparameter',1,'p_pureparameter_empty','Parser.py',262),
  ('declaration -> type name','declaration',2,'p_declaration_declaration','Parser.py',270),
  ('name -> IDENT','name',1,'p_name_name','Parser.py',277),
  ('type -> puretype','type',1,'p_type_type','Parser.py',287),
  ('puretype -> puretype template','puretype',2,'p_puretype_templated','Parser.py',294),
  ('puretype -> UNSIGNED puretype','puretype',2,'p_puretype_unsigned','Parser.py',299),
  ('puretype -> CONST puretype','puretype',2,'p_puretype_constl','Parser.py',304),
  ('puretype -> CHAR puretype','puretype',2,'p_puretype_charconst','Parser.py',309),
  ('puretype -> CHAR','puretype',1,'p_puretype_char','Parser.py',314),
  ('puretype -> IDENT','puretype',1,'p_puretype_puretype','Parser.py',319),
  ('template -> LTRI puretemplate RTRI','template',3,'p_template_template','Parser.py',327),
  ('puretemplate -> TEMPLATEDATA','puretemplate',1,'p_puretemplate_data','Parser.py',332),
  ('puretemplate -> TEMPLATEDATA puretemplate','puretemplate',2,'p_puretemplate_datas','Parser.py',337),
  ('puretemplate -> template puretemplate','puretemplate',2,'p_puretemplate_recurse','Parser.py',342),
  ('volatile -> VOLATILE purevolatile','volatile',2,'p_volatile_start','Parser.py',350),
  ('purevolatile -> LCURLY purevolatile RCURLY','purevolatile',3,'p_purevolatile_recurse','Parser.py',355),
  ('purevolatile -> purevolatile purevolatile','purevolatile',2,'p_purevolatile_datas','Parser.py',360),
  ('purevolatile -> VOLATILEDATA','purevolatile',1,'p_purevolatile_data','Parser.py',365),
  ('purevolatile -> LCURLY RCURLY','purevolatile',2,'p_purevolatile_empty','Parser.py',370),
  ('purevolatile -> SEMI','purevolatile',1,'p_purevolatile_semi','Parser.py',376),
]