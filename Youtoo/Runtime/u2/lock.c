/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module lock
 **  Copyright: See file lock.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_thread();
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef thread_bindings[];

/* Module bindings with size 42 */
LispRef lock_bindings[42];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module lock */
void initialize_module_lock()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_thread();
  eul_fast_table_set(eul_modules,"lock",(LispRef) lock_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_4948, sym_4947, G004946, G004944, sym_4942, sym_4941, sym_4940, sym_4939, sym_4938, sym_4937, sym_4936, sym_4935, sym_4934, key_4932, key_4931, key_4930, sym_4929, key_4928, key_4927, key_4926, sym_4925, key_4924, G004923, G004921, G004919, G004917, G004915, G004913, G004911, sym_4909, G004908, G004906, G004904;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 5 is_init: 0 index: 9 binding: (method-unlock) */
  static const void *G004903[] = {I(aa,1b,82,1c),I(82,1d,24,00),B(lock ,8),I(09,22,02,2a),I(1b,45,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 10 binding: anonymous */
  static const void *G004905[] = {I(a9,47,00,00),I(07,1b,44,04),I(1b,36,0f,24),B(thread ,7),I(3c,00,2a,47),I(00,01,3d,00),I(01,45,01,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 12 binding: (method-lock) */
  static const void *G004907[] = {I(aa,46,02,1b),I(48,00,00,86),I(1b,48,00,01),I(23,00,00,00),B(lock ,11),I(23,00,00,00),B(lock ,10),I(3b,00,48,00),I(01,47,00,01),I(3d,00,02,45),I(02,00,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-lock?) */
  static const void *G004910[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 14 binding: (method-lock?) */
  static const void *G004912[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 15 binding: (method-semaphore?) */
  static const void *G004914[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 16 binding: (method-semaphore?) */
  static const void *G004916[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 17 binding: (setter-semaphore-counter) */
  static const void *G004918[] = {I(ab,1c,82,1d),I(24,00,00,00),B(lock ,8),I(09,45,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 18 binding: anonymous */
  static const void *G004920[] = {I(a9,82,45,00)};

  eul_allocate_static_cons(cons_4933, NULL, NULL);
  /* Byte-vector with size: 299 is_init: 0 index: 38 binding: top-level */
  static const void *G004922[] = {I(a9,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(lock ,19),I(23,00,00,00),B(lock ,20),I(23,00,00,00),B(lock ,21),I(23,00,00,00),B(lock ,11),I(23,00,00,00),B(lock ,18),I(3b,00,23,00),B(lock ,22),I(23,00,00,00),B(lock ,23),I(24,00,00,00),B(boot1 ,26),I(3c,06,1b,24),B(boot1 ,26),I(3c,01,24,00),B(mop_class ,81),I(23,00,00,00),B(lock ,19),I(23,00,00,00),B(lock ,24),I(23,00,00,00),B(lock ,25),I(1f,06,23,00),B(lock ,26),I(1f,06,23,00),B(lock ,27),I(23,00,00,00),B(lock ,28),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(lock ,8),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(lock ,29),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(lock ,7),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(lock ,30),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(lock ,5),I(2a,24,00,00),B(lock ,8),I(89,00,00,00),B(lock ,2),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(lock ,31),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(lock ,3),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(lock ,32),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(lock ,4),I(2a,24,00,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(lock ,6),I(23,00,00,00),B(lock ,33),I(23,00,00,00),B(lock ,17),I(3b,02,1d,3c),I(02,2a,24,00),B(lock ,7),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(lock ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(lock ,34),I(23,00,00,00),B(lock ,16),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(lock ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(lock ,7),I(8a,03,02,83),I(24,00,00,00),B(lock ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(lock ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(lock ,34),I(23,00,00,00),B(lock ,15),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(lock ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(lock ,7),I(2a,24,00,00),B(lock ,5),I(8a,03,02,83),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(lock ,5),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(lock ,35),I(23,00,00,00),B(lock ,14),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(lock ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(lock ,5),I(8a,03,02,83),I(24,00,00,00),B(lock ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(lock ,5),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(lock ,35),I(23,00,00,00),B(lock ,13),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(lock ,5),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(lock ,5),I(2a,24,00,00),B(lock ,8),I(2a,24,00,00),B(lock ,3),I(2a,24,00,00),B(lock ,3),I(8a,03,02,83),I(24,00,00,00),B(lock ,2),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(lock ,3),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(lock ,36),I(23,00,00,00),B(lock ,12),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(lock ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(lock ,4),I(2a,24,00,00),B(lock ,4),I(8a,03,02,83),I(24,00,00,00),B(lock ,2),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(lock ,4),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(lock ,37),I(23,00,00,00),B(lock ,9),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(lock ,4),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,39,45),I(39,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: semaphore-counter */
  static const void *G004943[] = {I(aa,82,24,00),B(lock ,8),I(08,45,00,00)};

  /* Byte-vector with size: 36 is_init: 1 index: 0 binding: initialize-lock */
  static const void *G004945[] = {I(87,25,00,00),B(lock ,1),I(24,00,00,00),B(thread ,1),I(3e,0b,24,00),B(thread ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(lock ,8),I(86,25,00,00),B(lock ,7),I(23,00,00,00),B(lock ,40),I(23,00,00,00),B(lock ,39),I(3b,01,25,00),B(lock ,6),I(86,25,00,00),B(lock ,5),I(86,25,00,00),B(lock ,4),I(86,25,00,00),B(lock ,3),I(86,25,00,00),B(lock ,2),I(23,00,00,00),B(lock ,41),I(23,00,00,00),B(lock ,38),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004904,G004903);
  eul_allocate_bytevector( G004906,G004905);
  eul_intern_symbol(sym_4909,"anonymous");
  eul_allocate_bytevector( G004908,G004907);
  eul_allocate_bytevector( G004911,G004910);
  eul_allocate_bytevector( G004913,G004912);
  eul_allocate_bytevector( G004915,G004914);
  eul_allocate_bytevector( G004917,G004916);
  eul_allocate_bytevector( G004919,G004918);
  eul_allocate_bytevector( G004921,G004920);
  eul_intern_keyword(key_4924,"name");
  eul_intern_symbol(sym_4925,"counter");
  eul_intern_keyword(key_4926,"default");
  eul_intern_keyword(key_4927,"keyword");
  eul_intern_keyword(key_4928,"counter");
  eul_intern_symbol(sym_4929,"semaphore");
  eul_intern_keyword(key_4930,"direct-superclasses");
  eul_intern_keyword(key_4931,"direct-slots");
  eul_intern_keyword(key_4932,"direct-keywords");
  object_class(cons_4933) = eul_static_cons_class;
  eul_car(cons_4933) = key_4928;
  eul_cdr(cons_4933) = eul_nil;
  eul_intern_symbol(sym_4934,"semaphore?");
  eul_intern_symbol(sym_4935,"lock?");
  eul_intern_symbol(sym_4936,"lock");
  eul_intern_symbol(sym_4937,"unlock");
  eul_intern_symbol(sym_4938,"(setter semaphore-counter)");
  eul_intern_symbol(sym_4939,"(method semaphore?)");
  eul_intern_symbol(sym_4940,"(method lock?)");
  eul_intern_symbol(sym_4941,"(method lock)");
  eul_intern_symbol(sym_4942,"(method unlock)");
  eul_allocate_bytevector( G004923,G004922);
  eul_allocate_bytevector( G004944,G004943);
  eul_intern_symbol(sym_4947,"semaphore-counter");
  eul_intern_symbol(sym_4948,"top-level");
  eul_allocate_bytevector( G004946,G004945);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 9; i++)
      lock_bindings[i] = eul_nil;
  }

  lock_bindings[ 9] = G004904;
  lock_bindings[ 10] = G004906;
  lock_bindings[ 11] = sym_4909;
  lock_bindings[ 12] = G004908;
  lock_bindings[ 13] = G004911;
  lock_bindings[ 14] = G004913;
  lock_bindings[ 15] = G004915;
  lock_bindings[ 16] = G004917;
  lock_bindings[ 17] = G004919;
  lock_bindings[ 18] = G004921;
  lock_bindings[ 19] = key_4924;
  lock_bindings[ 20] = sym_4925;
  lock_bindings[ 21] = key_4926;
  lock_bindings[ 22] = key_4927;
  lock_bindings[ 23] = key_4928;
  lock_bindings[ 24] = sym_4929;
  lock_bindings[ 25] = key_4930;
  lock_bindings[ 26] = key_4931;
  lock_bindings[ 27] = key_4932;
  lock_bindings[ 28] = cons_4933;
  lock_bindings[ 29] = sym_4934;
  lock_bindings[ 30] = sym_4935;
  lock_bindings[ 31] = sym_4936;
  lock_bindings[ 32] = sym_4937;
  lock_bindings[ 33] = sym_4938;
  lock_bindings[ 34] = sym_4939;
  lock_bindings[ 35] = sym_4940;
  lock_bindings[ 36] = sym_4941;
  lock_bindings[ 37] = sym_4942;
  lock_bindings[ 38] = G004923;
  lock_bindings[ 39] = G004944;
  lock_bindings[ 1] = eul_nil;
  lock_bindings[ 40] = sym_4947;
  lock_bindings[ 41] = sym_4948;
  eul_allocate_lambda( lock_bindings[0], "initialize-lock", 0, G004946);

  }
}


/* eof */
