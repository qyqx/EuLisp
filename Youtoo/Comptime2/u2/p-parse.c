/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module p-parse
 **  Copyright: See file p-parse.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_p_env();
extern void initialize_module_ex_module();
extern void initialize_module_ex_body();
extern void initialize_module_sx_write();
extern void initialize_module_sx_node();
extern LispRef sx_node_bindings[];
extern LispRef sx_write_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_all_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef ex_body_bindings[];
extern LispRef ex_direct_bindings[];
extern LispRef ex_module_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef i_param_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 22 */
LispRef p_parse_bindings[22];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module p-parse */
void initialize_module_p_parse()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_p_env();
  initialize_module_ex_module();
  initialize_module_ex_body();
  initialize_module_sx_write();
  initialize_module_sx_node();
  eul_fast_table_set(eul_modules,"p_parse",(LispRef) p_parse_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1122, sym_1121, G001120, G001116, sym_1114, G001113, sym_1108, sym_1107, sym_1106, sym_1105, sym_1103, G001101, G001099;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 3 binding: anonymous */
  static const void *G001098[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_1102, "  Parsing module ~a ...", 23);
  eul_allocate_static_string(str_1104, " .ME/SE", 7);
  eul_allocate_static_string(str_1109, " .EE", 4);
  eul_allocate_static_string(str_1110, " .XE/SE", 7);
  eul_allocate_static_string(str_1111, "bad defmodule syntax in module ~a ...", 37);
  /* Byte-vector with size: 73 is_init: 0 index: 14 binding: (method-parse-module) */
  static const void *G001100[] = {I(aa,23,00,00),B(p_parse ,4),I(24,00,00,00),B(i_param ,63),I(24,00,00,00),B(i_notify ,3),I(3c,02,2a,23),B(p_parse ,5),I(89,00,00,00),B(i_param ,60),I(2a,23,00,00),B(p_parse ,6),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1b),I(7a,1b,34,00),I(00,00,00,16),I(1c,10,23,00),B(p_parse ,7),I(50,32,00,00),I(00,00,00,08),I(86,1b,34,00),I(00,00,00,ae),I(1d,24,00,00),B(ex_module ,3),I(3c,01,23,00),B(p_parse ,8),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(p_parse ,9),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(p_parse ,10),I(23,00,00,00),B(p_parse ,3),I(3b,00,1c,0f),I(23,00,00,00),B(p_parse ,9),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(p_parse ,11),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1d),I(24,00,00,00),B(ex_direct ,4),I(3c,01,2a,23),B(p_parse ,12),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1d),I(24,00,00,00),B(ex_body ,6),I(3c,01,2a,1d),I(83,24,00,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,04,32,00),I(00,00,00,21),I(86,23,00,00),B(p_parse ,13),I(24,00,00,00),B(i_param ,63),I(24,00,00,00),B(i_notify ,6),I(3d,03,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 16 binding: top-level */
  static const void *G001112[] = {I(a9,24,00,00),B(i_param ,17),I(8a,03,02,83),I(86,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(i_param ,17),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(p_parse ,15),I(23,00,00,00),B(p_parse ,14),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,17),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_1117, " .ME/SE", 7);
  eul_allocate_static_string(str_1118, " .XE/SE", 7);
  /* Byte-vector with size: 24 is_init: 0 index: 19 binding: interactive-parse */
  static const void *G001115[] = {I(aa,23,00,00),B(p_parse ,8),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(p_parse ,5),I(89,00,00,00),B(i_param ,60),I(2a,23,00,00),B(p_parse ,17),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(ex_module ,3),I(3c,01,2a,23),B(p_parse ,18),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1b),I(24,00,00,00),B(ex_body ,6),I(3c,01,2a,1b),I(45,02,00,00)};

  /* Byte-vector with size: 44 is_init: 1 index: 0 binding: initialize-p-parse */
  static const void *G001119[] = {I(87,25,00,00),B(p_parse ,1),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_write ,1),I(3e,0b,24,00),B(sx_write ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_body ,1),I(3e,0b,24,00),B(ex_body ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_module ,1),I(3e,0b,24,00),B(ex_module ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(p_parse ,20),I(23,00,00,00),B(p_parse ,19),I(3b,01,25,00),B(p_parse ,2),I(23,00,00,00),B(p_parse ,21),I(23,00,00,00),B(p_parse ,16),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001099,G001098);
  object_class(str_1102) = eul_static_string_class;
  eul_intern_symbol(sym_1103,"parse");
  object_class(str_1104) = eul_static_string_class;
  eul_intern_symbol(sym_1105,"defmodule");
  eul_intern_symbol(sym_1106,"*actual-module*");
  eul_intern_symbol(sym_1107,"*clean-ups*");
  eul_intern_symbol(sym_1108,"anonymous");
  object_class(str_1109) = eul_static_string_class;
  object_class(str_1110) = eul_static_string_class;
  object_class(str_1111) = eul_static_string_class;
  eul_allocate_bytevector( G001101,G001100);
  eul_intern_symbol(sym_1114,"(method parse-module)");
  eul_allocate_bytevector( G001113,G001112);
  object_class(str_1117) = eul_static_string_class;
  object_class(str_1118) = eul_static_string_class;
  eul_allocate_bytevector( G001116,G001115);
  eul_intern_symbol(sym_1121,"interactive-parse");
  eul_intern_symbol(sym_1122,"top-level");
  eul_allocate_bytevector( G001120,G001119);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 3; i++)
      p_parse_bindings[i] = eul_nil;
  }

  p_parse_bindings[ 3] = G001099;
  p_parse_bindings[ 4] = str_1102;
  p_parse_bindings[ 5] = sym_1103;
  p_parse_bindings[ 6] = str_1104;
  p_parse_bindings[ 7] = sym_1105;
  p_parse_bindings[ 8] = sym_1106;
  p_parse_bindings[ 9] = sym_1107;
  p_parse_bindings[ 10] = sym_1108;
  p_parse_bindings[ 11] = str_1109;
  p_parse_bindings[ 12] = str_1110;
  p_parse_bindings[ 13] = str_1111;
  p_parse_bindings[ 14] = G001101;
  p_parse_bindings[ 15] = sym_1114;
  p_parse_bindings[ 16] = G001113;
  p_parse_bindings[ 17] = str_1117;
  p_parse_bindings[ 18] = str_1118;
  p_parse_bindings[ 19] = G001116;
  p_parse_bindings[ 1] = eul_nil;
  p_parse_bindings[ 20] = sym_1121;
  p_parse_bindings[ 21] = sym_1122;
  eul_allocate_lambda( p_parse_bindings[0], "initialize-p-parse", 0, G001120);

  }
}


/* eof */
