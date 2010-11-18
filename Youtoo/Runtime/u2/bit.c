/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module bit
 **  Copyright: See file bit.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern LispRef telos_bindings[];

/* Module bindings with size 22 */
LispRef bit_bindings[22];

/* Foreign functions */
static LispRef ff_stub_eul_bit_and6 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0028, G0029, res;

  POPVAL1(G0029);
  POPVAL1(G0028);
  FF_RES_CONVERT0(res,eul_bit_and(FF_ARG_CONVERT0(G0028), FF_ARG_CONVERT0(G0029)));
  return res;
}

static LispRef ff_stub_eul_bit_ior7 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0030, G0031, res;

  POPVAL1(G0031);
  POPVAL1(G0030);
  FF_RES_CONVERT0(res,eul_bit_ior(FF_ARG_CONVERT0(G0030), FF_ARG_CONVERT0(G0031)));
  return res;
}

static LispRef ff_stub_eul_bit_xor8 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0032, G0033, res;

  POPVAL1(G0033);
  POPVAL1(G0032);
  FF_RES_CONVERT0(res,eul_bit_xor(FF_ARG_CONVERT0(G0032), FF_ARG_CONVERT0(G0033)));
  return res;
}

static LispRef ff_stub_eul_bit_not9 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0034, res;

  POPVAL1(G0034);
  FF_RES_CONVERT0(res,eul_bit_not(FF_ARG_CONVERT0(G0034)));
  return res;
}

static LispRef ff_stub_eul_bit_shift10 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G0035, G0036, res;

  POPVAL1(G0036);
  POPVAL1(G0035);
  FF_RES_CONVERT0(res,eul_bit_shift(FF_ARG_CONVERT0(G0035), FF_ARG_CONVERT0(G0036)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module bit */
void initialize_module_bit()
{
  if (is_initialized) return;
  initialize_module_telos();
  eul_fast_table_set(eul_modules,"bit",(LispRef) bit_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_27, sym_26, sym_25, sym_24, sym_23, G0022, G0020, G0018, G0016, G0014, G0012;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 12 binding: bit-and */
  static const void *G0011[] = {I(ab,41,00,00),B(bit ,7),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 13 binding: bit-shift */
  static const void *G0013[] = {I(ab,41,00,00),B(bit ,11),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: bit-not */
  static const void *G0015[] = {I(aa,41,00,00),B(bit ,10),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: bit-ior */
  static const void *G0017[] = {I(ab,41,00,00),B(bit ,8),I(45,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: bit-xor */
  static const void *G0019[] = {I(ab,41,00,00),B(bit ,9),I(45,02,00,00)};

  /* Byte-vector with size: 38 is_init: 1 index: 0 binding: initialize-bit */
  static const void *G0021[] = {I(87,25,00,00),B(bit ,1),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(bit ,17),I(23,00,00,00),B(bit ,16),I(3b,02,25,00),B(bit ,6),I(23,00,00,00),B(bit ,18),I(23,00,00,00),B(bit ,15),I(3b,02,25,00),B(bit ,5),I(23,00,00,00),B(bit ,19),I(23,00,00,00),B(bit ,14),I(3b,01,25,00),B(bit ,4),I(23,00,00,00),B(bit ,20),I(23,00,00,00),B(bit ,13),I(3b,02,25,00),B(bit ,3),I(23,00,00,00),B(bit ,21),I(23,00,00,00),B(bit ,12),I(3b,02,25,00),B(bit ,2),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G0012,G0011);
  eul_allocate_bytevector( G0014,G0013);
  eul_allocate_bytevector( G0016,G0015);
  eul_allocate_bytevector( G0018,G0017);
  eul_allocate_bytevector( G0020,G0019);
  eul_intern_symbol(sym_23,"bit-xor");
  eul_intern_symbol(sym_24,"bit-ior");
  eul_intern_symbol(sym_25,"bit-not");
  eul_intern_symbol(sym_26,"bit-shift");
  eul_intern_symbol(sym_27,"bit-and");
  eul_allocate_bytevector( G0022,G0021);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 7; i++)
      bit_bindings[i] = eul_nil;
  }

  bit_bindings[ 7] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_bit_and6;
  bit_bindings[ 8] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_bit_ior7;
  bit_bindings[ 9] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_bit_xor8;
  bit_bindings[ 10] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_bit_not9;
  bit_bindings[ 11] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_bit_shift10;
  bit_bindings[ 12] = G0012;
  bit_bindings[ 13] = G0014;
  bit_bindings[ 14] = G0016;
  bit_bindings[ 15] = G0018;
  bit_bindings[ 16] = G0020;
  bit_bindings[ 1] = eul_nil;
  bit_bindings[ 17] = sym_23;
  bit_bindings[ 18] = sym_24;
  bit_bindings[ 19] = sym_25;
  bit_bindings[ 20] = sym_26;
  bit_bindings[ 21] = sym_27;
  eul_allocate_lambda( bit_bindings[0], "initialize-bit", 0, G0022);

  }
}


/* eof */