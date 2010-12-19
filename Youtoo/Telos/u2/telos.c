/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module telos
 **  Copyright: See file telos.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_access();
extern void initialize_module_mop_alloc();
extern void initialize_module_mop_class();
extern void initialize_module_mop_defcl();
extern void initialize_module_mop_gf();
extern void initialize_module_mop_init();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_key();
extern void initialize_module_mop_meth();
extern void initialize_module_mop_prim();
extern LispRef mop_prim_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_inspect_bindings[];
extern LispRef mop_init_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_defcl_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_alloc_bindings[];
extern LispRef mop_access_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 2 */
LispRef telos_bindings[2];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module telos */
void initialize_module_telos()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_access();
  initialize_module_mop_alloc();
  initialize_module_mop_class();
  initialize_module_mop_defcl();
  initialize_module_mop_gf();
  initialize_module_mop_init();
  initialize_module_mop_inspect();
  initialize_module_mop_key();
  initialize_module_mop_meth();
  initialize_module_mop_prim();
  eul_fast_table_set(eul_modules,"telos",(LispRef) telos_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef G003498;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 58 is_init: 1 index: 0 binding: initialize-telos */
  static const void *G003497[] = {I(87,25,00,00),B(telos ,1),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_init ,1),I(3e,0b,24,00),B(mop_init ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_defcl ,1),I(3e,0b,24,00),B(mop_defcl ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_alloc ,1),I(3e,0b,24,00),B(mop_alloc ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_access ,1),I(3e,0b,24,00),B(mop_access ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003498,G003497);

  /* Set local bindings */
  telos_bindings[ 1] = eul_nil;
  eul_allocate_lambda( telos_bindings[0], "initialize-telos", 0, G003498);

  }
}


/* eof */
