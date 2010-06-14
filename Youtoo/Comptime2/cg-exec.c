/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module cg-exec
 **  Copyright: See file cg-exec.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_cg_exec_word_length();
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_env();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_node();
extern void initialize_module_cg_state();
extern void initialize_module_cg_asm();
extern void initialize_module_cg_interf();
extern void initialize_module_i_ffi();
extern void initialize_module_ex_expr();
extern void initialize_module_cg_dld();
extern LispRef ex_expr_bindings[];
extern LispRef i_ffi_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef cg_asm_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef list_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef sx_node_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef i_error_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef stream2_bindings[];
extern LispRef integer_bindings[];
extern LispRef number_bindings[];
extern LispRef cg_exec_word_length_bindings[];
extern LispRef cg_dld_bindings[];
extern LispRef i_param_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef string_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef boot_bindings[];
extern LispRef cg_state_bindings[];
extern LispRef boot1_bindings[];
extern LispRef table_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef table1_bindings[];

/* Module bindings with size 83 */
LispRef cg_exec_bindings[83];

/* Foreign functions */
static LispRef ff_stub_eul_allocate_lambda28111 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G008198, G008199, G008200, res;

  POPVAL1(G008200);
  POPVAL1(G008199);
  POPVAL1(G008198);
  FF_RES_CONVERT6(res,eul_allocate_lambda2(FF_ARG_CONVERT8(G008198), FF_ARG_CONVERT8(G008199), FF_ARG_CONVERT8(G008200)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-exec */
void initialize_module_cg_exec()
{
  if (is_initialized) return;
  initialize_module_cg_exec_word_length();
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_env();
  initialize_module_sx_obj();
  initialize_module_sx_node();
  initialize_module_cg_state();
  initialize_module_cg_asm();
  initialize_module_cg_interf();
  initialize_module_i_ffi();
  initialize_module_ex_expr();
  initialize_module_cg_dld();
  eul_fast_table_set(eul_modules,"cg_exec",(LispRef) cg_exec_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_8197, sym_8196, sym_8195, sym_8194, sym_8193, sym_8192, sym_8191, sym_8190, sym_8189, sym_8188, sym_8187, sym_8186, sym_8185, sym_8184, sym_8183, sym_8182, G008181, G008179, G008177, sym_8175, G008174, G008172, G008170, G008168, G008166, G008164, G008161, G008159, G008156, G008154, G008150, sym_8148, sym_8146, G008145, key_8143, G008140, G008138, G008134, sym_8132, sym_8131, sym_8130, sym_8129, G008128, sym_8126, sym_8125, sym_8124, G008123, G008121, G008117, G008115, G008113;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 11 is_init: 0 index: 22 binding: top-level */
  static const void *G008112[] = {I(a9,86,89,00),B(cg_exec ,16),I(2a,86,89,00),B(cg_exec ,5),I(2a,24,00,00),B(table1 ,4),I(24,00,00,00),B(mop_gf ,2),I(3c,01,1b,89),B(cg_exec ,15),I(45,01,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 23 binding: set-bytevector-pos */
  static const void *G008114[] = {I(ab,24,00,00),B(table ,5),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(cg_exec ,15),I(1f,03,1f,03),I(1f,03,3d,03),I(03,45,03,00)};

  eul_allocate_static_cons(cons_8118, c_int_as_eul_int(172), NULL);
  eul_allocate_static_string(str_8119, "initialize-", 11);
  /* Byte-vector with size: 29 is_init: 0 index: 26 binding: run-init-bytevector */
  static const void *G008116[] = {I(aa,1b,82,24),B(cg_state ,38),I(08,1c,83,24),B(cg_state ,38),I(08,23,00,00),B(cg_exec ,24),I(24,00,00,00),B(boot ,7),I(3c,02,1c,83),I(14,86,24,00),B(cg_exec ,12),I(3c,03,24,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,82,02),I(23,00,00,00),B(cg_exec ,25),I(1c,24,00,00),B(string ,11),I(3c,02,41,00),B(boot1 ,55),I(22,01,1b,82),I(1f,05,41,00),B(cg_exec ,21),I(22,03,1b,3d),I(00,07,45,07)};

  /* Byte-vector with size: 7 is_init: 0 index: 27 binding: anonymous */
  static const void *G008120[] = {I(a9,47,00,00),I(24,00,00,00),B(cg_exec ,18),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  /* Byte-vector with size: 50 is_init: 0 index: 31 binding: execute */
  static const void *G008122[] = {I(ab,46,01,1c),I(48,00,00,23),B(cg_exec ,28),I(89,00,00,00),B(i_param ,61),I(2a,47,00,00),I(89,00,00,00),B(cg_exec ,16),I(2a,47,00,00),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,41,00,00),B(cg_dld ,14),I(22,01,1b,89),B(cg_exec ,5),I(2a,1c,82,24),B(cg_state ,2),I(08,1d,83,24),B(cg_state ,2),I(08,24,00,00),B(cg_exec ,11),I(3c,00,2a,1c),I(24,00,00,00),B(cg_exec ,17),I(3c,01,2a,23),B(cg_exec ,29),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,27),I(3b,00,1c,0f),I(23,00,00,00),B(cg_exec ,29),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1d),I(24,00,00,00),B(cg_exec ,3),I(3c,01,47,00),I(00,24,00,00),B(cg_exec ,18),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,08,00,00)};

  /* Byte-vector with size: 79 is_init: 0 index: 36 binding: compute-bytevector-aux */
  static const void *G008127[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,18),I(24,00,00,00),B(cg_exec_word_length ,3),I(3d,00,02,32),I(00,00,01,22),I(1c,10,1b,24),B(number ,24),I(3c,01,1b,34),I(00,00,00,15),I(1c,24,00,00),B(cg_exec_word_length ,6),I(3c,01,32,00),I(00,00,00,f5),I(1c,7a,1b,34),I(00,00,00,e9),I(1d,10,1f,03),I(11,1f,04,11),I(1b,10,1f,03),I(1f,03,1d,1d),I(23,00,00,00),B(cg_exec ,32),I(50,1b,34,00),I(00,00,00,16),I(1c,24,00,00),B(cg_exec ,10),I(3c,01,32,00),I(00,00,00,b0),I(1f,03,23,00),B(cg_exec ,33),I(50,1b,34,00),I(00,00,00,16),I(1d,24,00,00),B(cg_exec ,20),I(3c,01,32,00),I(00,00,00,8e),I(1f,04,23,00),B(cg_exec ,34),I(50,1b,34,00),I(00,00,00,22),I(1f,04,11,1b),I(10,1b,1f,06),I(24,00,00,00),B(cg_exec ,8),I(3c,02,22,02),I(32,00,00,00),I(00,00,00,62),I(1f,05,24,00),B(integer ,4),I(3c,01,1b,34),I(00,00,00,15),I(1f,0d,24,00),B(cg_exec ,6),I(3c,01,32,00),I(00,00,00,3e),I(1f,06,23,00),B(cg_exec ,35),I(50,1b,34,00),I(00,00,00,16),I(1f,05,24,00),B(cg_exec ,9),I(3c,01,32,00),I(00,00,00,1c),I(1f,07,24,00),B(cg_exec_word_length ,6),I(3c,01,2a,1f),I(05,24,00,00),B(cg_exec_word_length ,6),I(3c,01,22,01),I(22,01,22,01),I(22,01,22,08),I(32,00,00,00),I(00,00,00,09),I(86,22,01,2a),I(1f,03,11,24),B(cg_exec ,6),I(3d,01,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_8135, "statically linked module ~a cannot get new bindings", 51);
  eul_allocate_static_string(str_8136, "module ~a cannot have more than ~a bindings", 43);
  /* Byte-vector with size: 52 is_init: 0 index: 39 binding: next-local-index */
  static const void *G008133[] = {I(a9,24,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,12),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,33),I(24,00,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(cg_exec ,37),I(1c,24,00,00),B(boot ,12),I(3c,02,22,01),I(2a,24,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,11),I(24,00,00,00),B(sx_obj1 ,59),I(08,1c,1c,1a),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,33),I(24,00,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,23,00,00),B(cg_exec ,38),I(1c,1f,05,24),B(boot ,12),I(3c,03,22,01),I(2a,1d,83,14),I(24,00,00,00),B(cg_exec ,16),I(1c,1c,26,00),I(00,00,00,12),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1f,03,45,04)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-G007952) */
  static const void *G008137[] = {I(ab,86,45,02)};

  eul_allocate_static_string(str_8141, "compile time error condition: ", 30);
  eul_allocate_static_string(str_8142, "can't compute binding ~a of module ~a", 37);
  /* Byte-vector with size: 36 is_init: 0 index: 44 binding: (method-G007952) */
  static const void *G008139[] = {I(ab,24,00,00),B(stream2 ,10),I(23,00,00,00),B(cg_exec ,41),I(24,00,00,00),B(mop_gf ,17),I(3c,02,2a,1c),I(24,00,00,00),B(stream2 ,10),I(24,00,00,00),B(mop_access ,3),I(3c,02,2a,24),B(i_param ,57),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,50),I(24,00,00,00),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,86,23,00),B(cg_exec ,42),I(47,00,00,1f),I(03,24,00,00),B(mop_gf ,17),I(3c,04,1b,24),B(i_error ,5),I(23,00,00,00),B(cg_exec ,43),I(47,00,00,24),B(boot ,12),I(3d,04,04,22),I(02,45,02,00)};

  eul_allocate_static_string(str_8147, "  compute-binding ~a ~a", 23);
  /* Byte-vector with size: 100 is_init: 0 index: 48 binding: compute-binding */
  static const void *G008144[] = {I(ab,46,01,1c),I(48,00,00,84),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(cg_exec ,30),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,26),I(00,00,00,03),I(02,84,86,86),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,03),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(cg_exec ,45),I(23,00,00,00),B(cg_exec ,44),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,07),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(i_error ,5),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1f,0a),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(cg_exec ,45),I(23,00,00,00),B(cg_exec ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,0d),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,1f,0e),I(24,00,00,00),B(dynamic ,5),I(3c,01,2a,23),B(cg_exec ,46),I(1f,13,47,00),I(00,24,00,00),B(i_notify ,4),I(3c,03,2a,47),I(00,00,24,00),B(p_env ,7),I(3c,01,1f,13),I(23,00,00,00),B(cg_exec ,47),I(50,1b,34,00),I(00,00,00,16),I(1c,24,00,00),B(sx_obj ,17),I(3c,01,32,00),I(00,00,00,08),I(1f,14,41,00),B(cg_dld ,14),I(22,01,1d,83),I(24,00,00,00),B(sx_obj1 ,43),I(08,24,00,00),B(cg_exec_word_length ,2),I(3c,02,83,24),B(dynamic ,6),I(3c,01,2a,1b),I(45,17,00,00)};

  eul_allocate_static_string(str_8151, "body of inlined function contains non exported binding ~a", 57);
  eul_allocate_static_string(str_8152, "bad index ~a of foreign function ~a", 35);
  /* Byte-vector with size: 31 is_init: 0 index: 51 binding: compute-foreign-function-binding */
  static const void *G008149[] = {I(aa,1b,24,00),B(p_env ,7),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(85,23,00,00),B(cg_exec ,49),I(1f,03,24,00),B(i_error ,4),I(3c,03,1b,24),B(sx_node ,27),I(3c,01,1c,83),I(24,00,00,00),B(sx_obj1 ,43),I(08,1c,41,00),B(cg_dld ,14),I(22,01,1c,7e),I(1b,34,00,00),I(00,00,00,17),I(1c,1f,03,24),B(cg_exec_word_length ,2),I(3d,02,07,32),I(00,00,00,1c),I(85,23,00,00),B(cg_exec ,50),I(1f,04,1f,09),I(24,00,00,00),B(i_error ,4),I(3d,04,07,45),I(07,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 52 binding: compute-code-vector */
  static const void *G008153[] = {I(aa,24,00,00),B(cg_exec ,19),I(3c,01,24,00),B(cg_exec ,5),I(1c,24,00,00),B(cg_exec_word_length ,2),I(3d,02,01,00)};

  eul_allocate_static_string(str_8157, "  set-up-binding ~a ~a", 22);
  /* Byte-vector with size: 23 is_init: 0 index: 54 binding: anonymous */
  static const void *G008155[] = {I(aa,1b,83,24),B(sx_obj1 ,43),I(08,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,1e),I(24,00,00,00),B(cg_exec ,7),I(3c,00,1d,1c),I(1c,83,1d,24),B(sx_obj1 ,43),I(09,22,03,2a),I(1c,26,00,00),I(00,00,00,06),I(24,00,00,00),B(sx_obj1 ,43),I(08,1d,83,24),B(sx_obj1 ,43),I(08,23,00,00),B(cg_exec ,53),I(1d,1d,24,00),B(i_notify ,4),I(3d,03,04,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 55 binding: set-up-bindings */
  static const void *G008158[] = {I(a9,24,00,00),B(cg_exec ,16),I(82,24,00,00),B(sx_obj1 ,59),I(08,24,00,00),B(aux_table ,8),I(3c,01,24,00),B(sx_node ,9),I(1c,24,00,00),B(list ,25),I(3c,02,23,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,54),I(3b,01,1c,24),B(boot ,16),I(3d,02,02,45),I(02,00,00,00)};

  eul_allocate_static_string(str_8162, "  compute-bytevector ~a ~a", 26);
  /* Byte-vector with size: 11 is_init: 0 index: 57 binding: compute-bytevector */
  static const void *G008160[] = {I(43,03,23,00),B(cg_exec ,56),I(1c,1f,04,24),B(i_notify ,4),I(3c,03,2a,1c),I(24,00,00,00),B(cg_exec_word_length ,5),I(3c,01,2a,1d),I(24,00,00,00),B(cg_exec ,6),I(3d,01,03,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 58 binding: register-new-local */
  static const void *G008163[] = {I(43,fe,1b,34),I(00,00,00,0d),I(1b,10,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,11),I(24,00,00,00),B(cg_exec ,7),I(3c,00,24,00),B(cg_exec ,5),I(1c,1f,05,41),B(cg_dld ,12),I(22,03,2a,1b),I(45,04,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 59 binding: anonymous */
  static const void *G008165[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(86,32,00,00),I(00,00,00,3e),I(1c,10,24,00),B(p_env ,14),I(3c,01,1b,83),I(24,00,00,00),B(sx_obj1 ,59),I(08,47,00,01),I(1c,86,6c,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,10),I(1f,04,11,47),I(00,00,3d,01),I(05,22,03,45),I(02,00,00,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 60 binding: get-imported-module-or-library */
  static const void *G008167[] = {I(a9,46,02,24),B(cg_exec ,16),I(26,00,00,00),I(00,00,00,15),I(24,00,00,00),B(sx_obj1 ,59),I(08,1b,48,00),I(01,47,00,01),I(24,00,00,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,2f),I(86,1b,48,00),I(00,23,00,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,59),I(3b,01,48,00),I(00,24,00,00),B(i_param ,15),I(47,00,00,3d),I(01,03,22,01),I(45,02,00,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 61 binding: anonymous */
  static const void *G008169[] = {I(aa,1b,83,24),B(cg_state ,38),I(08,1c,26,00),I(00,00,00,03),I(24,00,00,00),B(cg_state ,38),I(08,1d,84,24),B(cg_state ,38),I(08,1f,03,82),I(24,00,00,00),B(cg_state ,38),I(08,1f,03,1c),I(1f,03,24,00),B(cg_exec ,12),I(3c,03,1b,24),B(cg_exec ,13),I(3c,01,1f,04),I(1c,24,00,00),B(cg_exec ,2),I(3d,02,07,45),I(07,00,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 62 binding: set-up-bytevectors */
  static const void *G008171[] = {I(aa,23,00,00),B(cg_exec ,30),I(23,00,00,00),B(cg_exec ,61),I(3b,01,1c,24),B(boot ,16),I(3d,02,01,00)};

  /* Byte-vector with size: 41 is_init: 0 index: 64 binding: reset-interactive-module */
  static const void *G008173[] = {I(aa,1b,82,24),B(sx_obj1 ,59),I(08,24,00,00),B(aux_table ,9),I(3c,01,2a,24),B(i_param ,49),I(24,00,00,00),B(aux_table ,9),I(3c,01,2a,1b),I(86,1c,26,00),I(00,00,00,06),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,09),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,08),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,0d),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(1b,86,1c,26),I(00,00,00,0c),I(1d,24,00,00),B(sx_obj1 ,59),I(09,22,02,2a),I(86,89,00,00),B(i_param ,57),I(2a,23,00,00),B(cg_exec ,63),I(89,00,00,00),B(i_param ,61),I(45,01,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 65 binding: get-bytevector-pos */
  static const void *G008176[] = {I(aa,24,00,00),B(cg_exec ,15),I(1c,24,00,00),B(table ,5),I(3d,02,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 66 binding: compute-static */
  static const void *G008178[] = {I(aa,24,00,00),B(cg_exec ,13),I(3c,01,24,00),B(cg_exec ,5),I(1c,24,00,00),B(cg_exec_word_length ,2),I(3d,02,01,00)};

  /* Byte-vector with size: 170 is_init: 1 index: 0 binding: initialize-cg-exec */
  static const void *G008180[] = {I(87,25,00,00),B(cg_exec ,1),I(24,00,00,00),B(cg_dld ,1),I(3e,0b,24,00),B(cg_dld ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_expr ,1),I(3e,0b,24,00),B(ex_expr ,0),I(3c,00,21,01),I(24,00,00,00),B(i_ffi ,1),I(3e,0b,24,00),B(i_ffi ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_asm ,1),I(3e,0b,24,00),B(cg_asm ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_state ,1),I(3e,0b,24,00),B(cg_state ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_exec_word_length ,1),I(3e,0b,24,00),B(cg_exec_word_length ,0),I(3c,00,21,01),I(23,00,00,00),B(cg_exec ,67),I(23,00,00,00),B(cg_exec ,66),I(3b,01,25,00),B(cg_exec ,20),I(23,00,00,00),B(cg_exec ,68),I(23,00,00,00),B(cg_exec ,65),I(3b,01,25,00),B(cg_exec ,19),I(23,00,00,00),B(cg_exec ,69),I(23,00,00,00),B(cg_exec ,64),I(3b,01,25,00),B(cg_exec ,18),I(23,00,00,00),B(cg_exec ,70),I(23,00,00,00),B(cg_exec ,62),I(3b,01,25,00),B(cg_exec ,17),I(86,25,00,00),B(cg_exec ,16),I(86,25,00,00),B(cg_exec ,15),I(23,00,00,00),B(cg_exec ,71),I(23,00,00,00),B(cg_exec ,60),I(3b,00,25,00),B(cg_exec ,14),I(23,00,00,00),B(cg_exec ,72),I(23,00,00,00),B(cg_exec ,58),I(3b,fe,25,00),B(cg_exec ,13),I(23,00,00,00),B(cg_exec ,73),I(23,00,00,00),B(cg_exec ,57),I(3b,03,25,00),B(cg_exec ,12),I(23,00,00,00),B(cg_exec ,74),I(23,00,00,00),B(cg_exec ,55),I(3b,00,25,00),B(cg_exec ,11),I(23,00,00,00),B(cg_exec ,75),I(23,00,00,00),B(cg_exec ,52),I(3b,01,25,00),B(cg_exec ,10),I(23,00,00,00),B(cg_exec ,76),I(23,00,00,00),B(cg_exec ,51),I(3b,01,25,00),B(cg_exec ,9),I(23,00,00,00),B(cg_exec ,77),I(23,00,00,00),B(cg_exec ,48),I(3b,02,25,00),B(cg_exec ,8),I(23,00,00,00),B(cg_exec ,78),I(23,00,00,00),B(cg_exec ,39),I(3b,00,25,00),B(cg_exec ,7),I(23,00,00,00),B(cg_exec ,79),I(23,00,00,00),B(cg_exec ,36),I(3b,01,25,00),B(cg_exec ,6),I(86,25,00,00),B(cg_exec ,5),I(23,00,00,00),B(cg_exec ,28),I(23,00,00,00),B(cg_exec ,31),I(3b,02,25,00),B(cg_exec ,4),I(23,00,00,00),B(cg_exec ,80),I(23,00,00,00),B(cg_exec ,26),I(3b,01,25,00),B(cg_exec ,3),I(23,00,00,00),B(cg_exec ,81),I(23,00,00,00),B(cg_exec ,23),I(3b,02,25,00),B(cg_exec ,2),I(23,00,00,00),B(cg_exec ,82),I(23,00,00,00),B(cg_exec ,22),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G008113,G008112);
  eul_allocate_bytevector( G008115,G008114);
  object_class(cons_8118) = eul_static_cons_class;
  eul_cdr(cons_8118) = eul_nil;
  object_class(str_8119) = eul_static_string_class;
  eul_allocate_bytevector( G008117,G008116);
  eul_allocate_bytevector( G008121,G008120);
  eul_intern_symbol(sym_8124,"execute");
  eul_intern_symbol(sym_8125,"*clean-ups*");
  eul_intern_symbol(sym_8126,"anonymous");
  eul_allocate_bytevector( G008123,G008122);
  eul_intern_symbol(sym_8129,"CODE-VECTOR");
  eul_intern_symbol(sym_8130,"STATIC");
  eul_intern_symbol(sym_8131,"BINDING");
  eul_intern_symbol(sym_8132,"FF");
  eul_allocate_bytevector( G008128,G008127);
  object_class(str_8135) = eul_static_string_class;
  object_class(str_8136) = eul_static_string_class;
  eul_allocate_bytevector( G008134,G008133);
  eul_allocate_bytevector( G008138,G008137);
  object_class(str_8141) = eul_static_string_class;
  object_class(str_8142) = eul_static_string_class;
  eul_intern_keyword(key_8143,"ct-error-value");
  eul_allocate_bytevector( G008140,G008139);
  eul_intern_symbol(sym_8146,"(method G007952)");
  object_class(str_8147) = eul_static_string_class;
  eul_intern_symbol(sym_8148,"?");
  eul_allocate_bytevector( G008145,G008144);
  object_class(str_8151) = eul_static_string_class;
  object_class(str_8152) = eul_static_string_class;
  eul_allocate_bytevector( G008150,G008149);
  eul_allocate_bytevector( G008154,G008153);
  object_class(str_8157) = eul_static_string_class;
  eul_allocate_bytevector( G008156,G008155);
  eul_allocate_bytevector( G008159,G008158);
  object_class(str_8162) = eul_static_string_class;
  eul_allocate_bytevector( G008161,G008160);
  eul_allocate_bytevector( G008164,G008163);
  eul_allocate_bytevector( G008166,G008165);
  eul_allocate_bytevector( G008168,G008167);
  eul_allocate_bytevector( G008170,G008169);
  eul_allocate_bytevector( G008172,G008171);
  eul_intern_symbol(sym_8175,"idle");
  eul_allocate_bytevector( G008174,G008173);
  eul_allocate_bytevector( G008177,G008176);
  eul_allocate_bytevector( G008179,G008178);
  eul_intern_symbol(sym_8182,"compute-static");
  eul_intern_symbol(sym_8183,"get-bytevector-pos");
  eul_intern_symbol(sym_8184,"reset-interactive-module");
  eul_intern_symbol(sym_8185,"set-up-bytevectors");
  eul_intern_symbol(sym_8186,"get-imported-module-or-library");
  eul_intern_symbol(sym_8187,"register-new-local");
  eul_intern_symbol(sym_8188,"compute-bytevector");
  eul_intern_symbol(sym_8189,"set-up-bindings");
  eul_intern_symbol(sym_8190,"compute-code-vector");
  eul_intern_symbol(sym_8191,"compute-foreign-function-binding");
  eul_intern_symbol(sym_8192,"compute-binding");
  eul_intern_symbol(sym_8193,"next-local-index");
  eul_intern_symbol(sym_8194,"compute-bytevector-aux");
  eul_intern_symbol(sym_8195,"run-init-bytevector");
  eul_intern_symbol(sym_8196,"set-bytevector-pos");
  eul_intern_symbol(sym_8197,"top-level");
  eul_allocate_bytevector( G008181,G008180);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 21; i++)
      cg_exec_bindings[i] = eul_nil;
  }

  cg_exec_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_allocate_lambda28111;
  cg_exec_bindings[ 22] = G008113;
  cg_exec_bindings[ 23] = G008115;
  cg_exec_bindings[ 24] = cons_8118;
  cg_exec_bindings[ 25] = str_8119;
  cg_exec_bindings[ 26] = G008117;
  cg_exec_bindings[ 27] = G008121;
  cg_exec_bindings[ 28] = sym_8124;
  cg_exec_bindings[ 29] = sym_8125;
  cg_exec_bindings[ 30] = sym_8126;
  cg_exec_bindings[ 31] = G008123;
  cg_exec_bindings[ 32] = sym_8129;
  cg_exec_bindings[ 33] = sym_8130;
  cg_exec_bindings[ 34] = sym_8131;
  cg_exec_bindings[ 35] = sym_8132;
  cg_exec_bindings[ 36] = G008128;
  cg_exec_bindings[ 37] = str_8135;
  cg_exec_bindings[ 38] = str_8136;
  cg_exec_bindings[ 39] = G008134;
  cg_exec_bindings[ 40] = G008138;
  cg_exec_bindings[ 41] = str_8141;
  cg_exec_bindings[ 42] = str_8142;
  cg_exec_bindings[ 43] = key_8143;
  cg_exec_bindings[ 44] = G008140;
  cg_exec_bindings[ 45] = sym_8146;
  cg_exec_bindings[ 46] = str_8147;
  cg_exec_bindings[ 47] = sym_8148;
  cg_exec_bindings[ 48] = G008145;
  cg_exec_bindings[ 49] = str_8151;
  cg_exec_bindings[ 50] = str_8152;
  cg_exec_bindings[ 51] = G008150;
  cg_exec_bindings[ 52] = G008154;
  cg_exec_bindings[ 53] = str_8157;
  cg_exec_bindings[ 54] = G008156;
  cg_exec_bindings[ 55] = G008159;
  cg_exec_bindings[ 56] = str_8162;
  cg_exec_bindings[ 57] = G008161;
  cg_exec_bindings[ 58] = G008164;
  cg_exec_bindings[ 59] = G008166;
  cg_exec_bindings[ 60] = G008168;
  cg_exec_bindings[ 61] = G008170;
  cg_exec_bindings[ 62] = G008172;
  cg_exec_bindings[ 63] = sym_8175;
  cg_exec_bindings[ 64] = G008174;
  cg_exec_bindings[ 65] = G008177;
  cg_exec_bindings[ 66] = G008179;
  cg_exec_bindings[ 1] = eul_nil;
  cg_exec_bindings[ 67] = sym_8182;
  cg_exec_bindings[ 68] = sym_8183;
  cg_exec_bindings[ 69] = sym_8184;
  cg_exec_bindings[ 70] = sym_8185;
  cg_exec_bindings[ 71] = sym_8186;
  cg_exec_bindings[ 72] = sym_8187;
  cg_exec_bindings[ 73] = sym_8188;
  cg_exec_bindings[ 74] = sym_8189;
  cg_exec_bindings[ 75] = sym_8190;
  cg_exec_bindings[ 76] = sym_8191;
  cg_exec_bindings[ 77] = sym_8192;
  cg_exec_bindings[ 78] = sym_8193;
  cg_exec_bindings[ 79] = sym_8194;
  cg_exec_bindings[ 80] = sym_8195;
  cg_exec_bindings[ 81] = sym_8196;
  cg_exec_bindings[ 82] = sym_8197;
  eul_allocate_lambda( cg_exec_bindings[0], "initialize-cg-exec", 0, G008181);

  }
}


/* eof */
