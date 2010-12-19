/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module ex-body
 **  Copyright: See file ex-body.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_p_env();
extern void initialize_module_ex_expr();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern LispRef p_env_bindings[];
extern LispRef i_all_bindings[];
extern LispRef boot_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef sx_node_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef ex_expr_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef sx_obj2_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 33 */
LispRef ex_body_bindings[33];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module ex-body */
void initialize_module_ex_body()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_p_env();
  initialize_module_ex_expr();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  eul_fast_table_set(eul_modules,"ex_body",(LispRef) ex_body_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1976, sym_1975, sym_1974, sym_1973, sym_1972, G001971, sym_1968, G001964, G001961, sym_1958, key_1956, key_1955, G001954, sym_1952, sym_1951, G001950, G001948, sym_1946, sym_1945, G001944;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 25 is_init: 0 index: 9 binding: complete-variable-node */
  static const void *G001943[] = {I(aa,23,00,00),B(ex_body ,7),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,8a),I(03,24,00,00),B(sx_obj2 ,11),I(08,1d,83,24),B(sx_obj2 ,11),I(08,1b,86,0f),I(1d,1c,0f,23),B(ex_body ,8),I(1c,0f,1f,05),I(8a,06,24,00),B(sx_obj1 ,59),I(08,1c,1c,0f),I(1f,07,1c,1c),I(8a,06,1d,24),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,08,24,00),B(ex_expr ,2),I(1c,83,1d,24),B(sx_obj2 ,11),I(09,45,0b,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 10 binding: complete-constant-node */
  static const void *G001947[] = {I(aa,23,00,00),B(ex_body ,7),I(24,00,00,00),B(dynamic ,3),I(3c,01,1c,83),I(24,00,00,00),B(sx_obj2 ,22),I(08,1d,82,24),B(sx_obj2 ,29),I(08,87,86,0f),I(1c,1c,0f,1f),I(03,1c,0f,23),B(ex_body ,8),I(1c,0f,1f,06),I(8a,06,24,00),B(sx_obj1 ,59),I(08,1c,1c,0f),I(1f,08,1c,1c),I(8a,06,1d,24),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,09,24,00),B(ex_expr ,2),I(1c,82,1d,24),B(sx_obj2 ,29),I(09,45,0c,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 13 binding: set-up-top-level-lambda */
  static const void *G001949[] = {I(a9,24,00,00),B(sx_obj ,13),I(23,00,00,00),B(ex_body ,11),I(86,86,24,00),B(sx_node ,8),I(3c,04,24,00),B(dynamic ,3),I(24,00,00,00),B(boot1 ,42),I(3c,01,23,00),B(ex_body ,12),I(1d,1d,3c,02),I(2a,1c,45,02)};

  eul_allocate_static_string(str_1957, "    Top-level forms: ~a", 23);
  eul_allocate_static_string(str_1959, "Top-level", 9);
  /* Byte-vector with size: 31 is_init: 0 index: 19 binding: complete-top-level-forms */
  static const void *G001953[] = {I(ab,1c,8a,06),I(24,00,00,00),B(sx_obj1 ,59),I(08,24,00,00),B(sx_obj ,39),I(23,00,00,00),B(ex_body ,14),I(1f,03,23,00),B(ex_body ,15),I(86,24,00,00),B(mop_gf ,2),I(3c,05,23,00),B(ex_body ,16),I(1d,24,00,00),B(i_notify ,4),I(3c,02,2a,23),B(ex_body ,17),I(1d,0f,1f,03),I(1c,1c,84,1d),I(24,00,00,00),B(sx_obj ,17),I(09,22,02,2a),I(1f,03,23,00),B(ex_body ,18),I(24,00,00,00),B(ex_expr ,33),I(3c,02,2a,1f),I(04,1d,1c,8a),I(06,1d,24,00),B(sx_obj1 ,59),I(09,45,07,00)};

  eul_allocate_static_string(str_1962, "Top-level", 9);
  /* Byte-vector with size: 5 is_init: 0 index: 21 binding: anonymous */
  static const void *G001960[] = {I(aa,23,00,00),B(ex_body ,20),I(24,00,00,00),B(ex_expr ,33),I(3d,02,00,00)};

  eul_allocate_static_string(str_1965, "   Complete variable nodes", 26);
  eul_allocate_static_string(str_1966, "   Complete constant nodes", 26);
  eul_allocate_static_string(str_1967, "   Complete defun bodies", 24);
  eul_allocate_static_string(str_1969, "   Expand top-level forms", 25);
  /* Byte-vector with size: 46 is_init: 0 index: 27 binding: expand-bodies */
  static const void *G001963[] = {I(aa,24,00,00),B(ex_body ,4),I(3c,00,23,00),B(ex_body ,22),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(8a,0c,24,00),B(sx_obj1 ,59),I(08,24,00,00),B(ex_body ,2),I(1c,24,00,00),B(boot ,17),I(3c,02,2a,23),B(ex_body ,23),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1d),I(8a,0d,24,00),B(sx_obj1 ,59),I(08,24,00,00),B(ex_body ,3),I(1c,24,00,00),B(boot ,17),I(3c,02,2a,23),B(ex_body ,24),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1f),I(03,8a,09,24),B(sx_obj1 ,59),I(08,23,00,00),B(ex_body ,25),I(23,00,00,00),B(ex_body ,21),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,23),B(ex_body ,26),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1f),I(04,1f,04,24),B(ex_body ,5),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 58 is_init: 1 index: 0 binding: initialize-ex-body */
  static const void *G001970[] = {I(87,25,00,00),B(ex_body ,1),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_expr ,1),I(3e,0b,24,00),B(ex_expr ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(ex_body ,28),I(23,00,00,00),B(ex_body ,27),I(3b,01,25,00),B(ex_body ,6),I(23,00,00,00),B(ex_body ,29),I(23,00,00,00),B(ex_body ,19),I(3b,02,25,00),B(ex_body ,5),I(23,00,00,00),B(ex_body ,30),I(23,00,00,00),B(ex_body ,13),I(3b,00,25,00),B(ex_body ,4),I(23,00,00,00),B(ex_body ,31),I(23,00,00,00),B(ex_body ,10),I(3b,01,25,00),B(ex_body ,3),I(23,00,00,00),B(ex_body ,32),I(23,00,00,00),B(ex_body ,9),I(3b,01,25,00),B(ex_body ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_1945,"*actual-module*");
  eul_intern_symbol(sym_1946,"setq");
  eul_allocate_bytevector( G001944,G001943);
  eul_allocate_bytevector( G001948,G001947);
  eul_intern_symbol(sym_1951,"top-level");
  eul_intern_symbol(sym_1952,"*encl-lambda*");
  eul_allocate_bytevector( G001950,G001949);
  eul_intern_keyword(key_1955,"fun");
  eul_intern_keyword(key_1956,"args");
  object_class(str_1957) = eul_static_string_class;
  eul_intern_symbol(sym_1958,"progn");
  object_class(str_1959) = eul_static_string_class;
  eul_allocate_bytevector( G001954,G001953);
  object_class(str_1962) = eul_static_string_class;
  eul_allocate_bytevector( G001961,G001960);
  object_class(str_1965) = eul_static_string_class;
  object_class(str_1966) = eul_static_string_class;
  object_class(str_1967) = eul_static_string_class;
  eul_intern_symbol(sym_1968,"anonymous");
  object_class(str_1969) = eul_static_string_class;
  eul_allocate_bytevector( G001964,G001963);
  eul_intern_symbol(sym_1972,"expand-bodies");
  eul_intern_symbol(sym_1973,"complete-top-level-forms");
  eul_intern_symbol(sym_1974,"set-up-top-level-lambda");
  eul_intern_symbol(sym_1975,"complete-constant-node");
  eul_intern_symbol(sym_1976,"complete-variable-node");
  eul_allocate_bytevector( G001971,G001970);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 7; i++)
      ex_body_bindings[i] = eul_nil;
  }

  ex_body_bindings[ 7] = sym_1945;
  ex_body_bindings[ 8] = sym_1946;
  ex_body_bindings[ 9] = G001944;
  ex_body_bindings[ 10] = G001948;
  ex_body_bindings[ 11] = sym_1951;
  ex_body_bindings[ 12] = sym_1952;
  ex_body_bindings[ 13] = G001950;
  ex_body_bindings[ 14] = key_1955;
  ex_body_bindings[ 15] = key_1956;
  ex_body_bindings[ 16] = str_1957;
  ex_body_bindings[ 17] = sym_1958;
  ex_body_bindings[ 18] = str_1959;
  ex_body_bindings[ 19] = G001954;
  ex_body_bindings[ 20] = str_1962;
  ex_body_bindings[ 21] = G001961;
  ex_body_bindings[ 22] = str_1965;
  ex_body_bindings[ 23] = str_1966;
  ex_body_bindings[ 24] = str_1967;
  ex_body_bindings[ 25] = sym_1968;
  ex_body_bindings[ 26] = str_1969;
  ex_body_bindings[ 27] = G001964;
  ex_body_bindings[ 1] = eul_nil;
  ex_body_bindings[ 28] = sym_1972;
  ex_body_bindings[ 29] = sym_1973;
  ex_body_bindings[ 30] = sym_1974;
  ex_body_bindings[ 31] = sym_1975;
  ex_body_bindings[ 32] = sym_1976;
  eul_allocate_lambda( ex_body_bindings[0], "initialize-ex-body", 0, G001971);

  }
}


/* eof */
