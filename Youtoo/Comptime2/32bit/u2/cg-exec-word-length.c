/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module cg-exec-word-length
 **  Copyright: See file cg-exec-word-length.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
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
extern LispRef cg_dld_bindings[];
extern LispRef ex_expr_bindings[];
extern LispRef i_ffi_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef cg_asm_bindings[];
extern LispRef cg_state_bindings[];
extern LispRef sx_node_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef i_all_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef string_bindings[];
extern LispRef i_notify_bindings[];

/* Module bindings with size 22 */
LispRef cg_exec_word_length_bindings[22];

/* Foreign functions */
static LispRef ff_stub_eul_write_next_bv_binding_ref17854 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G007875, G007876, G007877, G007878, res;

  POPVAL1(G007878);
  POPVAL1(G007877);
  POPVAL1(G007876);
  POPVAL1(G007875);
  FF_RES_CONVERT6(res,eul_write_next_bv_binding_ref1(FF_ARG_CONVERT8(G007875), FF_ARG_CONVERT0(G007876), FF_ARG_CONVERT3(G007877), FF_ARG_CONVERT0(G007878)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-exec-word-length */
void initialize_module_cg_exec_word_length()
{
  if (is_initialized) return;
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
  eul_fast_table_set(eul_modules,"cg_exec_word_length",(LispRef) cg_exec_word_length_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_7874, sym_7873, sym_7872, sym_7871, sym_7870, G007869, G007867, key_7865, G007863, G007861, G007858, G007856;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 5 is_init: 0 index: 9 binding: top-level */
  static const void *G007855[] = {I(a9,86,89,00),B(cg_exec_word_length ,4),I(2a,82,89,00),B(cg_exec_word_length ,7),I(45,00,00,00)};

  eul_allocate_static_string(str_7859, "  write-next-bv-binding-ref ~a ~a ~a", 36);
  /* Byte-vector with size: 20 is_init: 0 index: 11 binding: write-next-bv-binding-ref */
  static const void *G007857[] = {I(ab,23,00,00),B(cg_exec_word_length ,10),I(24,00,00,00),B(cg_exec_word_length ,7),I(1f,03,1f,03),I(24,00,00,00),B(i_notify ,4),I(3c,04,2a,24),B(cg_exec_word_length ,4),I(24,00,00,00),B(cg_exec_word_length ,7),I(1f,03,1f,03),I(41,00,00,00),B(cg_exec_word_length ,8),I(22,04,2a,24),B(cg_exec_word_length ,7),I(8a,04,14,1b),I(89,00,00,00),B(cg_exec_word_length ,7),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 12 binding: bytevector */
  static const void *G007860[] = {I(a9,24,00,00),B(cg_exec_word_length ,4),I(45,00,00,00)};

  eul_allocate_static_string(str_7864, "  open-bytevector ~a", 20);
  /* Byte-vector with size: 15 is_init: 0 index: 15 binding: open-bytevector */
  static const void *G007862[] = {I(aa,23,00,00),B(cg_exec_word_length ,13),I(1c,24,00,00),B(i_notify ,4),I(3c,02,2a,24),B(string ,13),I(23,00,00,00),B(cg_exec_word_length ,14),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1b,89),B(cg_exec_word_length ,4),I(2a,82,89,00),B(cg_exec_word_length ,7),I(45,02,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 16 binding: write-next-bv-byte */
  static const void *G007866[] = {I(aa,63,24,00),B(cg_exec_word_length ,4),I(24,00,00,00),B(cg_exec_word_length ,7),I(1d,0c,2a,24),B(cg_exec_word_length ,7),I(83,14,1b,89),B(cg_exec_word_length ,7),I(45,02,00,00)};

  /* Byte-vector with size: 91 is_init: 1 index: 0 binding: initialize-cg-exec-word-length */
  static const void *G007868[] = {I(87,25,00,00),B(cg_exec_word_length ,1),I(24,00,00,00),B(cg_dld ,1),I(3e,0b,24,00),B(cg_dld ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_expr ,1),I(3e,0b,24,00),B(ex_expr ,0),I(3c,00,21,01),I(24,00,00,00),B(i_ffi ,1),I(3e,0b,24,00),B(i_ffi ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_asm ,1),I(3e,0b,24,00),B(cg_asm ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_state ,1),I(3e,0b,24,00),B(cg_state ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_node ,1),I(3e,0b,24,00),B(sx_node ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(86,25,00,00),B(cg_exec_word_length ,7),I(23,00,00,00),B(cg_exec_word_length ,17),I(23,00,00,00),B(cg_exec_word_length ,16),I(3b,01,25,00),B(cg_exec_word_length ,6),I(23,00,00,00),B(cg_exec_word_length ,18),I(23,00,00,00),B(cg_exec_word_length ,15),I(3b,01,25,00),B(cg_exec_word_length ,5),I(86,25,00,00),B(cg_exec_word_length ,4),I(23,00,00,00),B(cg_exec_word_length ,19),I(23,00,00,00),B(cg_exec_word_length ,12),I(3b,00,25,00),B(cg_exec_word_length ,3),I(23,00,00,00),B(cg_exec_word_length ,20),I(23,00,00,00),B(cg_exec_word_length ,11),I(3b,02,25,00),B(cg_exec_word_length ,2),I(23,00,00,00),B(cg_exec_word_length ,21),I(23,00,00,00),B(cg_exec_word_length ,9),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G007856,G007855);
  object_class(str_7859) = eul_static_string_class;
  eul_allocate_bytevector( G007858,G007857);
  eul_allocate_bytevector( G007861,G007860);
  object_class(str_7864) = eul_static_string_class;
  eul_intern_keyword(key_7865,"size");
  eul_allocate_bytevector( G007863,G007862);
  eul_allocate_bytevector( G007867,G007866);
  eul_intern_symbol(sym_7870,"write-next-bv-byte");
  eul_intern_symbol(sym_7871,"open-bytevector");
  eul_intern_symbol(sym_7872,"bytevector");
  eul_intern_symbol(sym_7873,"write-next-bv-binding-ref");
  eul_intern_symbol(sym_7874,"top-level");
  eul_allocate_bytevector( G007869,G007868);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 8; i++)
      cg_exec_word_length_bindings[i] = eul_nil;
  }

  cg_exec_word_length_bindings[ 8] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_write_next_bv_binding_ref17854;
  cg_exec_word_length_bindings[ 9] = G007856;
  cg_exec_word_length_bindings[ 10] = str_7859;
  cg_exec_word_length_bindings[ 11] = G007858;
  cg_exec_word_length_bindings[ 12] = G007861;
  cg_exec_word_length_bindings[ 13] = str_7864;
  cg_exec_word_length_bindings[ 14] = key_7865;
  cg_exec_word_length_bindings[ 15] = G007863;
  cg_exec_word_length_bindings[ 16] = G007867;
  cg_exec_word_length_bindings[ 1] = eul_nil;
  cg_exec_word_length_bindings[ 17] = sym_7870;
  cg_exec_word_length_bindings[ 18] = sym_7871;
  cg_exec_word_length_bindings[ 19] = sym_7872;
  cg_exec_word_length_bindings[ 20] = sym_7873;
  cg_exec_word_length_bindings[ 21] = sym_7874;
  eul_allocate_lambda( cg_exec_word_length_bindings[0], "initialize-cg-exec-word-length", 0, G007869);

  }
}


/* eof */
