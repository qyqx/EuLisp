/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module ex-syntax
 **  Copyright: See file ex-syntax.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_env();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_cg_interf();
extern LispRef cg_interf_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef thread_bindings[];
extern LispRef condition_bindings[];
extern LispRef convert_bindings[];
extern LispRef collect_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef number_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_error_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef format_bindings[];
extern LispRef stream2_bindings[];
extern LispRef p_env_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef sx_node_bindings[];

/* Module bindings with size 80 */
LispRef ex_syntax_bindings[80];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-syntax */
void initialize_module_ex_syntax()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_env();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_cg_interf();
  eul_fast_table_set(eul_modules,"ex_syntax",(LispRef) ex_syntax_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2431, sym_2430, sym_2429, sym_2428, sym_2427, sym_2426, sym_2425, sym_2424, sym_2423, G002422, G002420, G002418, G002415, G002413, G002409, G002407, G002405, G002403, G002401, sym_2399, G002397, sym_2395, G002392, G002390, G002388, G002385, sym_2383, sym_2382, sym_2381, sym_2380, G002379, sym_2377, G002376, G002372, G002370, G002368, sym_2366, G002365, G002361, G002359, G002357, sym_2355, G002354, G002350, G002348, G002346, G002344, sym_2342, sym_2341, G002340, key_2338, G002335, G002333, G002331, G002329;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 17 is_init: 0 index: 11 binding: anonymous */
  static const void *G002328[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(sx_node ,21),I(3c,01,47,00),I(02,1d,24,00),B(ex_syntax ,5),I(3c,02,1c,1c),I(1c,8a,06,1d),I(24,00,00,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,15),I(3d,01,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 12 binding: anonymous */
  static const void *G002330[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-G002170) */
  static const void *G002332[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_2336, "compile time error condition: ", 30);
  eul_allocate_static_string(str_2337, "bad syntax prefix syntax", 24);
  /* Byte-vector with size: 26 is_init: 0 index: 17 binding: (method-G002170) */
  static const void *G002334[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_syntax ,14),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,15),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 103 is_init: 0 index: 20 binding: anonymous */
  static const void *G002339[] = {I(ab,46,07,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,19),I(23,00,00,00),B(ex_syntax ,17),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,19),I(23,00,00,00),B(ex_syntax ,13),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,77,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,8a,0f,24),B(sx_obj1 ,59),I(08,47,00,00),I(73,1b,48,00),I(02,1c,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,11),I(3c,02,47,00),I(00,76,24,00),B(number ,9),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,12),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,76,23),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,11),I(3b,01,1c,24),B(boot ,17),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1b,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 21 binding: anonymous */
  static const void *G002343[] = {I(aa,1b,10,1b),I(47,00,01,24),B(ex_syntax ,2),I(3c,02,24,00),B(sx_node ,21),I(3c,01,1d,73),I(1c,1c,1c,8a),I(06,1d,24,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1c,24,00,00),B(p_env ,15),I(3d,01,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 22 binding: anonymous */
  static const void *G002345[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: (method-G002140) */
  static const void *G002347[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_2351, "compile time error condition: ", 30);
  eul_allocate_static_string(str_2352, "bad syntax rename syntax", 24);
  /* Byte-vector with size: 26 is_init: 0 index: 26 binding: (method-G002140) */
  static const void *G002349[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_syntax ,24),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,25),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 106 is_init: 0 index: 28 binding: anonymous */
  static const void *G002353[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,27),I(23,00,00,00),B(ex_syntax ,26),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,27),I(23,00,00,00),B(ex_syntax ,23),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,8a,0f,24),B(sx_obj1 ,59),I(08,24,00,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,11),I(3c,02,47,00),I(00,73,24,00),B(boot1 ,30),I(1c,24,00,00),B(boot ,11),I(3c,02,1d,1c),I(24,00,00,00),B(number ,9),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,22),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,73,23),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,21),I(3b,01,1c,24),B(boot ,17),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,1c,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 29 binding: anonymous */
  static const void *G002356[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 30 binding: (method-G002114) */
  static const void *G002358[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_2362, "compile time error condition: ", 30);
  eul_allocate_static_string(str_2363, "bad syntax except syntax", 24);
  /* Byte-vector with size: 26 is_init: 0 index: 33 binding: (method-G002114) */
  static const void *G002360[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_syntax ,31),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,32),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 94 is_init: 0 index: 35 binding: anonymous */
  static const void *G002364[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,34),I(23,00,00,00),B(ex_syntax ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,34),I(23,00,00,00),B(ex_syntax ,30),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(01,8a,0f,24),B(sx_obj1 ,59),I(08,1b,24,00),B(aux_table ,8),I(3c,01,24,00),B(sx_obj ,25),I(1c,24,00,00),B(boot ,11),I(3c,02,47,00),I(00,73,24,00),B(number ,9),I(3c,02,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,29),I(3b,01,1c,24),B(boot ,17),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,19,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 36 binding: anonymous */
  static const void *G002367[] = {I(aa,1b,47,00),I(01,24,00,00),B(ex_syntax ,2),I(3c,02,24,00),B(p_env ,15),I(3d,01,01,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 37 binding: (method-G002090) */
  static const void *G002369[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_2373, "compile time error condition: ", 30);
  eul_allocate_static_string(str_2374, "bad syntax only syntax", 22);
  /* Byte-vector with size: 26 is_init: 0 index: 40 binding: (method-G002090) */
  static const void *G002371[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_syntax ,38),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,2a),I(24,00,00,00),B(i_error ,5),I(23,00,00,00),B(ex_syntax ,39),I(23,00,00,00),B(ex_syntax ,16),I(47,00,00,24),B(boot ,13),I(3d,04,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 83 is_init: 0 index: 42 binding: anonymous */
  static const void *G002375[] = {I(ab,46,04,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,41),I(23,00,00,00),B(ex_syntax ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,41),I(23,00,00,00),B(ex_syntax ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,76,24),B(p_env ,13),I(3c,01,1b,48),I(00,01,47,00),I(00,73,23,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,36),I(3b,01,1c,24),B(boot ,17),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  /* Byte-vector with size: 38 is_init: 0 index: 47 binding: top-level */
  static const void *G002378[] = {I(a9,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(ex_syntax ,10),I(2a,23,00,00),B(ex_syntax ,43),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,42),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,44),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,35),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,45),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,28),I(3b,02,24,00),B(ex_syntax ,8),I(3c,02,2a,23),B(ex_syntax ,46),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,20),I(3b,02,24,00),B(ex_syntax ,8),I(3d,02,01,45),I(01,00,00,00)};

  eul_allocate_static_string(str_2386, "external syntax binding ~a not available in module", 50);
  /* Byte-vector with size: 22 is_init: 0 index: 49 binding: import-syntax-binding */
  static const void *G002384[] = {I(ab,1c,1c,24),B(p_env ,19),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,27),I(1d,24,00,00),B(sx_node ,5),I(3c,01,1b,23),B(ex_syntax ,48),I(1f,05,1f,05),I(24,00,00,00),B(i_notify ,6),I(3c,04,22,01),I(1b,87,1c,8a),I(03,1d,24,00),B(sx_obj1 ,42),I(09,22,02,2a),I(1d,24,00,00),B(ex_syntax ,9),I(3c,01,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 50 binding: anonymous */
  static const void *G002387[] = {I(ab,1b,7a,1b),I(34,00,00,00),I(00,00,00,28),I(1d,41,00,00),B(aux_table ,10),I(22,01,1d,1c),I(24,00,00,00),B(p_env ,15),I(3d,02,04,22),I(01,32,00,00),I(00,00,00,22),I(1c,24,00,00),B(p_env ,15),I(3c,01,2a,1c),I(87,1c,8a,03),I(1d,24,00,00),B(sx_obj1 ,42),I(09,22,02,45),I(03,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 51 binding: (method-G002042) */
  static const void *G002389[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_2393, "compile time error condition: ", 30);
  eul_allocate_static_string(str_2394, "cannot import syntax module ~a", 30);
  /* Byte-vector with size: 32 is_init: 0 index: 55 binding: (method-G002042) */
  static const void *G002391[] = {I(ab,24,00,00),B(stream2 ,9),I(23,00,00,00),B(ex_syntax ,52),I(24,00,00,00),B(format ,4),I(3c,02,2a,24),B(stream2 ,9),I(1d,24,00,00),B(mop_access ,8),I(3c,02,2a,24),B(i_param ,56),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,44),I(23,00,00,00),B(ex_syntax ,53),I(47,00,00,24),B(format ,2),I(3c,02,23,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,24,00),B(i_error ,5),I(1d,23,00,00),B(ex_syntax ,16),I(1f,03,24,00),B(boot ,13),I(3d,04,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_2398, "  Import syntax module ~a ...", 29);
  /* Byte-vector with size: 97 is_init: 0 index: 58 binding: import-syntax-module */
  static const void *G002396[] = {I(aa,46,01,1b),I(48,00,00,23),B(ex_syntax ,56),I(47,00,00,24),B(i_notify ,4),I(3c,02,2a,84),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(ex_syntax ,18),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,8a),I(03,02,84,86),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,57),I(23,00,00,00),B(ex_syntax ,55),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(8a,03,02,84),I(24,00,00,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(ex_syntax ,57),I(23,00,00,00),B(ex_syntax ,51),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,47),I(00,00,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,24),B(p_env ,13),I(3c,01,1b,8a),I(0f,24,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,50),I(3b,02,1c,24),B(aux_table ,7),I(3c,02,2a,1c),I(24,00,00,00),B(ex_syntax ,9),I(3c,01,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 59 binding: expand-syntax-import */
  static const void *G002400[] = {I(aa,24,00,00),B(ex_syntax ,6),I(24,00,00,00),B(ex_syntax ,6),I(3d,02,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 60 binding: make-prefix */
  static const void *G002402[] = {I(ab,1c,82,02),I(1c,82,02,1c),I(1c,24,00,00),B(collect ,17),I(3c,02,24,00),B(mop_class ,5),I(24,00,00,00),B(convert ,2),I(3d,02,04,45),I(04,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 61 binding: anonymous */
  static const void *G002404[] = {I(ab,1c,45,02)};

  /* Byte-vector with size: 3 is_init: 0 index: 62 binding: anonymous */
  static const void *G002406[] = {I(ab,1c,24,00),B(ex_syntax ,3),I(3d,01,02,00)};

  eul_allocate_static_string(str_2410, "no syntax-import expander ~a available", 38);
  eul_allocate_static_string(str_2411, "no syntax-import expander ~a available", 38);
  /* Byte-vector with size: 51 is_init: 0 index: 65 binding: syntax-import-expander */
  static const void *G002408[] = {I(ab,1c,7c,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,62),I(3b,02,32,00),I(00,00,00,a6),I(1d,7a,12,1b),I(34,00,00,00),I(00,00,00,20),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,61),I(3b,02,32,00),I(00,00,00,80),I(1f,03,10,7c),I(1b,34,00,00),I(00,00,00,4f),I(1f,04,10,24),B(ex_syntax ,10),I(3c,01,1b,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,2b),I(23,00,00,00),B(ex_syntax ,63),I(1f,07,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,02,32,00),I(00,00,00,2a),I(23,00,00,00),B(ex_syntax ,64),I(1f,05,24,00),B(format ,2),I(3c,02,24,00),B(condition ,8),I(1c,24,00,00),B(boot ,13),I(3c,02,22,01),I(22,01,22,01),I(1f,03,1f,03),I(1d,3d,02,04)};

  /* Byte-vector with size: 5 is_init: 0 index: 66 binding: expand-old-syntax-imports */
  static const void *G002412[] = {I(aa,24,00,00),B(ex_syntax ,4),I(1c,24,00,00),B(boot ,11),I(3d,02,01,00)};

  eul_allocate_static_string(str_2416, "redefinition of expander ~a", 27);
  /* Byte-vector with size: 17 is_init: 0 index: 68 binding: install-syntax-import-expander */
  static const void *G002414[] = {I(ab,1c,24,00),B(ex_syntax ,10),I(3c,01,1b,34),I(00,00,00,1d),I(86,23,00,00),B(ex_syntax ,67),I(1f,04,24,00),B(i_notify ,5),I(3c,03,32,00),I(00,00,00,07),I(86,2a,24,00),B(ex_syntax ,10),I(24,00,00,00),B(boot1 ,42),I(3c,01,1f,03),I(1f,03,1d,3d),I(02,04,00,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 69 binding: anonymous */
  static const void *G002417[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,44),I(23,00,00,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,84),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,47,00),I(00,24,00,00),B(thread ,28),I(3c,02,1d,1c),I(1c,84,1d,24),B(sx_obj1 ,59),I(09,22,05,32),I(00,00,00,5e),I(1c,10,1b,24),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,29),I(1c,47,00,00),I(50,1b,34,00),I(00,00,00,0e),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,01,3d,01),I(05,22,01,32),I(00,00,00,28),I(1c,47,00,02),I(50,1b,34,00),I(00,00,00,12),I(1f,04,47,00),I(00,8f,32,00),I(00,00,00,0f),I(1f,04,11,47),I(00,01,3d,01),I(05,22,01,22),I(02,45,02,00)};

  /* Byte-vector with size: 28 is_init: 0 index: 70 binding: register-imported-syntax-module */
  static const void *G002419[] = {I(aa,46,04,1b),I(48,00,00,47),I(00,00,24,00),B(sx_obj1 ,45),I(3c,01,1b,34),I(00,00,00,19),I(47,00,00,8a),I(15,24,00,00),B(sx_obj1 ,59),I(08,32,00,00),I(00,00,00,0a),I(47,00,00,1b),I(48,00,02,86),I(1b,48,00,01),I(23,00,00,00),B(ex_syntax ,18),I(23,00,00,00),B(ex_syntax ,69),I(3b,01,48,00),I(01,23,00,00),B(ex_syntax ,54),I(24,00,00,00),B(dynamic ,3),I(3c,01,1b,84),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,01),I(3d,01,05,00)};

  /* Byte-vector with size: 88 is_init: 1 index: 0 binding: initialize-ex-syntax */
  static const void *G002421[] = {I(87,25,00,00),B(ex_syntax ,1),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(ex_syntax ,10),I(23,00,00,00),B(ex_syntax ,71),I(23,00,00,00),B(ex_syntax ,70),I(3b,01,25,00),B(ex_syntax ,9),I(23,00,00,00),B(ex_syntax ,72),I(23,00,00,00),B(ex_syntax ,68),I(3b,02,25,00),B(ex_syntax ,8),I(23,00,00,00),B(ex_syntax ,73),I(23,00,00,00),B(ex_syntax ,66),I(3b,01,25,00),B(ex_syntax ,7),I(23,00,00,00),B(ex_syntax ,74),I(23,00,00,00),B(ex_syntax ,65),I(3b,02,25,00),B(ex_syntax ,6),I(23,00,00,00),B(ex_syntax ,75),I(23,00,00,00),B(ex_syntax ,60),I(3b,02,25,00),B(ex_syntax ,5),I(23,00,00,00),B(ex_syntax ,76),I(23,00,00,00),B(ex_syntax ,59),I(3b,01,25,00),B(ex_syntax ,4),I(23,00,00,00),B(ex_syntax ,77),I(23,00,00,00),B(ex_syntax ,58),I(3b,01,25,00),B(ex_syntax ,3),I(23,00,00,00),B(ex_syntax ,78),I(23,00,00,00),B(ex_syntax ,49),I(3b,02,25,00),B(ex_syntax ,2),I(23,00,00,00),B(ex_syntax ,79),I(23,00,00,00),B(ex_syntax ,47),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002329,G002328);
  eul_allocate_bytevector( G002331,G002330);
  eul_allocate_bytevector( G002333,G002332);
  object_class(str_2336) = eul_static_string_class;
  object_class(str_2337) = eul_static_string_class;
  eul_intern_keyword(key_2338,"ct-error-value");
  eul_allocate_bytevector( G002335,G002334);
  eul_intern_symbol(sym_2341,"anonymous");
  eul_intern_symbol(sym_2342,"(method G002170)");
  eul_allocate_bytevector( G002340,G002339);
  eul_allocate_bytevector( G002344,G002343);
  eul_allocate_bytevector( G002346,G002345);
  eul_allocate_bytevector( G002348,G002347);
  object_class(str_2351) = eul_static_string_class;
  object_class(str_2352) = eul_static_string_class;
  eul_allocate_bytevector( G002350,G002349);
  eul_intern_symbol(sym_2355,"(method G002140)");
  eul_allocate_bytevector( G002354,G002353);
  eul_allocate_bytevector( G002357,G002356);
  eul_allocate_bytevector( G002359,G002358);
  object_class(str_2362) = eul_static_string_class;
  object_class(str_2363) = eul_static_string_class;
  eul_allocate_bytevector( G002361,G002360);
  eul_intern_symbol(sym_2366,"(method G002114)");
  eul_allocate_bytevector( G002365,G002364);
  eul_allocate_bytevector( G002368,G002367);
  eul_allocate_bytevector( G002370,G002369);
  object_class(str_2373) = eul_static_string_class;
  object_class(str_2374) = eul_static_string_class;
  eul_allocate_bytevector( G002372,G002371);
  eul_intern_symbol(sym_2377,"(method G002090)");
  eul_allocate_bytevector( G002376,G002375);
  eul_intern_symbol(sym_2380,"only");
  eul_intern_symbol(sym_2381,"except");
  eul_intern_symbol(sym_2382,"rename");
  eul_intern_symbol(sym_2383,"prefix");
  eul_allocate_bytevector( G002379,G002378);
  object_class(str_2386) = eul_static_string_class;
  eul_allocate_bytevector( G002385,G002384);
  eul_allocate_bytevector( G002388,G002387);
  eul_allocate_bytevector( G002390,G002389);
  object_class(str_2393) = eul_static_string_class;
  object_class(str_2394) = eul_static_string_class;
  eul_intern_symbol(sym_2395,"*actual-module*");
  eul_allocate_bytevector( G002392,G002391);
  object_class(str_2398) = eul_static_string_class;
  eul_intern_symbol(sym_2399,"(method G002042)");
  eul_allocate_bytevector( G002397,G002396);
  eul_allocate_bytevector( G002401,G002400);
  eul_allocate_bytevector( G002403,G002402);
  eul_allocate_bytevector( G002405,G002404);
  eul_allocate_bytevector( G002407,G002406);
  object_class(str_2410) = eul_static_string_class;
  object_class(str_2411) = eul_static_string_class;
  eul_allocate_bytevector( G002409,G002408);
  eul_allocate_bytevector( G002413,G002412);
  object_class(str_2416) = eul_static_string_class;
  eul_allocate_bytevector( G002415,G002414);
  eul_allocate_bytevector( G002418,G002417);
  eul_allocate_bytevector( G002420,G002419);
  eul_intern_symbol(sym_2423,"register-imported-syntax-module");
  eul_intern_symbol(sym_2424,"install-syntax-import-expander");
  eul_intern_symbol(sym_2425,"expand-old-syntax-imports");
  eul_intern_symbol(sym_2426,"syntax-import-expander");
  eul_intern_symbol(sym_2427,"make-prefix");
  eul_intern_symbol(sym_2428,"expand-syntax-import");
  eul_intern_symbol(sym_2429,"import-syntax-module");
  eul_intern_symbol(sym_2430,"import-syntax-binding");
  eul_intern_symbol(sym_2431,"top-level");
  eul_allocate_bytevector( G002422,G002421);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      ex_syntax_bindings[i] = eul_nil;
  }

  ex_syntax_bindings[ 11] = G002329;
  ex_syntax_bindings[ 12] = G002331;
  ex_syntax_bindings[ 13] = G002333;
  ex_syntax_bindings[ 14] = str_2336;
  ex_syntax_bindings[ 15] = str_2337;
  ex_syntax_bindings[ 16] = key_2338;
  ex_syntax_bindings[ 17] = G002335;
  ex_syntax_bindings[ 18] = sym_2341;
  ex_syntax_bindings[ 19] = sym_2342;
  ex_syntax_bindings[ 20] = G002340;
  ex_syntax_bindings[ 21] = G002344;
  ex_syntax_bindings[ 22] = G002346;
  ex_syntax_bindings[ 23] = G002348;
  ex_syntax_bindings[ 24] = str_2351;
  ex_syntax_bindings[ 25] = str_2352;
  ex_syntax_bindings[ 26] = G002350;
  ex_syntax_bindings[ 27] = sym_2355;
  ex_syntax_bindings[ 28] = G002354;
  ex_syntax_bindings[ 29] = G002357;
  ex_syntax_bindings[ 30] = G002359;
  ex_syntax_bindings[ 31] = str_2362;
  ex_syntax_bindings[ 32] = str_2363;
  ex_syntax_bindings[ 33] = G002361;
  ex_syntax_bindings[ 34] = sym_2366;
  ex_syntax_bindings[ 35] = G002365;
  ex_syntax_bindings[ 36] = G002368;
  ex_syntax_bindings[ 37] = G002370;
  ex_syntax_bindings[ 38] = str_2373;
  ex_syntax_bindings[ 39] = str_2374;
  ex_syntax_bindings[ 40] = G002372;
  ex_syntax_bindings[ 41] = sym_2377;
  ex_syntax_bindings[ 42] = G002376;
  ex_syntax_bindings[ 43] = sym_2380;
  ex_syntax_bindings[ 44] = sym_2381;
  ex_syntax_bindings[ 45] = sym_2382;
  ex_syntax_bindings[ 46] = sym_2383;
  ex_syntax_bindings[ 47] = G002379;
  ex_syntax_bindings[ 48] = str_2386;
  ex_syntax_bindings[ 49] = G002385;
  ex_syntax_bindings[ 50] = G002388;
  ex_syntax_bindings[ 51] = G002390;
  ex_syntax_bindings[ 52] = str_2393;
  ex_syntax_bindings[ 53] = str_2394;
  ex_syntax_bindings[ 54] = sym_2395;
  ex_syntax_bindings[ 55] = G002392;
  ex_syntax_bindings[ 56] = str_2398;
  ex_syntax_bindings[ 57] = sym_2399;
  ex_syntax_bindings[ 58] = G002397;
  ex_syntax_bindings[ 59] = G002401;
  ex_syntax_bindings[ 60] = G002403;
  ex_syntax_bindings[ 61] = G002405;
  ex_syntax_bindings[ 62] = G002407;
  ex_syntax_bindings[ 63] = str_2410;
  ex_syntax_bindings[ 64] = str_2411;
  ex_syntax_bindings[ 65] = G002409;
  ex_syntax_bindings[ 66] = G002413;
  ex_syntax_bindings[ 67] = str_2416;
  ex_syntax_bindings[ 68] = G002415;
  ex_syntax_bindings[ 69] = G002418;
  ex_syntax_bindings[ 70] = G002420;
  ex_syntax_bindings[ 1] = eul_nil;
  ex_syntax_bindings[ 71] = sym_2423;
  ex_syntax_bindings[ 72] = sym_2424;
  ex_syntax_bindings[ 73] = sym_2425;
  ex_syntax_bindings[ 74] = sym_2426;
  ex_syntax_bindings[ 75] = sym_2427;
  ex_syntax_bindings[ 76] = sym_2428;
  ex_syntax_bindings[ 77] = sym_2429;
  ex_syntax_bindings[ 78] = sym_2430;
  ex_syntax_bindings[ 79] = sym_2431;
  eul_allocate_lambda( ex_syntax_bindings[0], "initialize-ex-syntax", 0, G002422);

  }
}


/* eof */