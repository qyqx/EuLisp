/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module eval
 **  Copyright: See file eval.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_rep();
extern void initialize_module_i_rep();
extern void initialize_module_p_env();
extern LispRef p_env_bindings[];
extern LispRef i_rep_bindings[];

/* Module bindings with size 2 */
LispRef eval_bindings[2];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module eval */
void initialize_module_eval()
{
  if (is_initialized) return;
  initialize_module_i_rep();
  initialize_module_i_rep();
  initialize_module_p_env();
  eul_fast_table_set(eul_modules,"eval",(LispRef) eval_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef G002;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 18 is_init: 1 index: 0 binding: initialize-eval */
  static const void *G001[] = {I(87,25,00,00),B(eval ,1),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(i_rep ,1),I(3e,0b,24,00),B(i_rep ,0),I(3c,00,21,01),I(24,00,00,00),B(i_rep ,1),I(3e,0b,24,00),B(i_rep ,0),I(3c,00,21,01),I(86,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002,G001);

  /* Set local bindings */
  eval_bindings[ 1] = eul_nil;
  eul_allocate_lambda( eval_bindings[0], "initialize-eval", 0, G002);

  }
}


/* eof */
