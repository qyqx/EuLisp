/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module cg-bycode
 **  Copyright: See file cg-bycode.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_level1();
extern LispRef i_level1_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef aux_table_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];

/* Module bindings with size 75 */
LispRef cg_bycode_bindings[75];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module cg-bycode */
void initialize_module_cg_bycode()
{
  if (is_initialized) return;
  initialize_module_i_level1();
  eul_fast_table_set(eul_modules,"cg_bycode",(LispRef) cg_bycode_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_4391, sym_4390, sym_4389, sym_4388, sym_4387, sym_4386, sym_4385, sym_4384, sym_4383, sym_4382, sym_4381, sym_4380, sym_4379, G004378, G004376, G004374, G004372, G004370, G004368, G004366, G004364, G004362, G004360, G004358, G004356, G004354, sym_4352, sym_4351, key_4344, key_4343, key_4342, sym_4341, key_4340, sym_4339, key_4338, sym_4337, key_4336, sym_4335, key_4334, sym_4333, key_4332, sym_4331, key_4330, sym_4329, key_4328, sym_4327, key_4326, G004325, G004323, G004321, G004319, G004317, G004315, G004313, G004311, G004309;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 19 binding: (method-bytecode?) */
  static const void *G004308[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 20 binding: (method-bytecode?) */
  static const void *G004310[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 21 binding: anonymous */
  static const void *G004312[] = {I(a9,86,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 22 binding: anonymous */
  static const void *G004314[] = {I(a9,86,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: anonymous */
  static const void *G004316[] = {I(a9,86,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 24 binding: anonymous */
  static const void *G004318[] = {I(a9,86,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 25 binding: anonymous */
  static const void *G004320[] = {I(a9,86,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 26 binding: anonymous */
  static const void *G004322[] = {I(a9,86,45,00)};

  eul_allocate_static_cons(cons_4350, NULL, NULL);
  eul_allocate_static_cons(cons_4349, NULL, eul_as_static(cons_4350));
  eul_allocate_static_cons(cons_4348, NULL, eul_as_static(cons_4349));
  eul_allocate_static_cons(cons_4347, NULL, eul_as_static(cons_4348));
  eul_allocate_static_cons(cons_4346, NULL, eul_as_static(cons_4347));
  eul_allocate_static_cons(cons_4345, NULL, eul_as_static(cons_4346));
  /* Byte-vector with size: 215 is_init: 0 index: 49 binding: top-level */
  static const void *G004324[] = {I(a9,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,24),I(3c,01,23,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,28),I(23,00,00,00),B(cg_bycode ,29),I(23,00,00,00),B(cg_bycode ,30),I(23,00,00,00),B(cg_bycode ,26),I(3b,00,23,00),B(cg_bycode ,31),I(23,00,00,00),B(cg_bycode ,27),I(24,00,00,00),B(boot1 ,24),I(3c,06,23,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,32),I(23,00,00,00),B(cg_bycode ,29),I(23,00,00,00),B(cg_bycode ,30),I(23,00,00,00),B(cg_bycode ,25),I(3b,00,23,00),B(cg_bycode ,31),I(23,00,00,00),B(cg_bycode ,33),I(24,00,00,00),B(boot1 ,24),I(3c,06,23,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,34),I(23,00,00,00),B(cg_bycode ,29),I(23,00,00,00),B(cg_bycode ,30),I(23,00,00,00),B(cg_bycode ,24),I(3b,00,23,00),B(cg_bycode ,31),I(23,00,00,00),B(cg_bycode ,35),I(24,00,00,00),B(boot1 ,24),I(3c,06,23,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,36),I(23,00,00,00),B(cg_bycode ,29),I(23,00,00,00),B(cg_bycode ,30),I(23,00,00,00),B(cg_bycode ,23),I(3b,00,23,00),B(cg_bycode ,31),I(23,00,00,00),B(cg_bycode ,37),I(24,00,00,00),B(boot1 ,24),I(3c,06,23,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,38),I(23,00,00,00),B(cg_bycode ,29),I(23,00,00,00),B(cg_bycode ,30),I(23,00,00,00),B(cg_bycode ,22),I(3b,00,23,00),B(cg_bycode ,31),I(23,00,00,00),B(cg_bycode ,39),I(24,00,00,00),B(boot1 ,24),I(3c,06,23,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,40),I(23,00,00,00),B(cg_bycode ,29),I(23,00,00,00),B(cg_bycode ,30),I(23,00,00,00),B(cg_bycode ,21),I(3b,00,23,00),B(cg_bycode ,31),I(23,00,00,00),B(cg_bycode ,41),I(24,00,00,00),B(boot1 ,24),I(3c,06,1f,05),I(1f,05,1f,05),I(1f,05,1f,05),I(1f,05,24,00),B(boot1 ,24),I(3c,06,24,00),B(mop_class ,70),I(23,00,00,00),B(cg_bycode ,27),I(23,00,00,00),B(cg_bycode ,42),I(23,00,00,00),B(cg_bycode ,43),I(1f,0b,23,00),B(cg_bycode ,44),I(1f,06,23,00),B(cg_bycode ,45),I(23,00,00,00),B(cg_bycode ,46),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(cg_bycode ,5),I(2a,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(cg_bycode ,18),I(2a,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(cg_bycode ,6),I(2a,24,00,00),B(aux_table ,4),I(3c,00,1b,89),B(cg_bycode ,8),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(boot1 ,24),I(3c,00,23,00),B(cg_bycode ,47),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(cg_bycode ,16),I(2a,24,00,00),B(cg_bycode ,16),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(cg_bycode ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(cg_bycode ,48),I(23,00,00,00),B(cg_bycode ,20),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(cg_bycode ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(cg_bycode ,16),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(cg_bycode ,5),I(24,00,00,00),B(boot1 ,38),I(3c,02,24,00),B(boot1 ,24),I(3c,00,24,00),B(cg_bycode ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(cg_bycode ,48),I(23,00,00,00),B(cg_bycode ,19),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(cg_bycode ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(cg_bycode ,16),I(2a,24,00,00),B(cg_bycode ,5),I(45,1c,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 50 binding: bytecode-args! */
  static const void *G004353[] = {I(ab,1c,26,00),I(00,00,00,04),I(1d,24,00,00),B(cg_bycode ,5),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 51 binding: bytecode-size! */
  static const void *G004355[] = {I(ab,1c,83,1d),I(24,00,00,00),B(cg_bycode ,5),I(09,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 52 binding: bytecode-properties? */
  static const void *G004357[] = {I(aa,84,24,00),B(cg_bycode ,5),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 53 binding: bytecode-args? */
  static const void *G004359[] = {I(aa,26,00,00),I(00,00,00,04),I(24,00,00,00),B(cg_bycode ,5),I(08,45,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 54 binding: bytecode-modus! */
  static const void *G004361[] = {I(ab,1c,82,1d),I(24,00,00,00),B(cg_bycode ,5),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 55 binding: bytecode-properties! */
  static const void *G004363[] = {I(ab,1c,84,1d),I(24,00,00,00),B(cg_bycode ,5),I(09,45,02,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 56 binding: bytecode-name? */
  static const void *G004365[] = {I(aa,26,00,00),I(00,00,00,05),I(24,00,00,00),B(cg_bycode ,5),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 57 binding: bytecode-size? */
  static const void *G004367[] = {I(aa,83,24,00),B(cg_bycode ,5),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 58 binding: bytecode-code? */
  static const void *G004369[] = {I(aa,26,00,00),I(00,00,00,03),I(24,00,00,00),B(cg_bycode ,5),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 59 binding: bytecode-code! */
  static const void *G004371[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(cg_bycode ,5),I(09,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 60 binding: bytecode-modus? */
  static const void *G004373[] = {I(aa,82,24,00),B(cg_bycode ,5),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 61 binding: bytecode-name! */
  static const void *G004375[] = {I(ab,1c,26,00),I(00,00,00,05),I(1d,24,00,00),B(cg_bycode ,5),I(09,45,02,00)};

  /* Byte-vector with size: 95 is_init: 1 index: 0 binding: initialize-cg-bycode */
  static const void *G004377[] = {I(87,25,00,00),B(cg_bycode ,1),I(24,00,00,00),B(i_level1 ,1),I(3e,0b,24,00),B(i_level1 ,0),I(3c,00,21,01),I(86,25,00,00),B(cg_bycode ,18),I(23,00,00,00),B(cg_bycode ,62),I(23,00,00,00),B(cg_bycode ,61),I(3b,02,25,00),B(cg_bycode ,17),I(86,25,00,00),B(cg_bycode ,16),I(23,00,00,00),B(cg_bycode ,63),I(23,00,00,00),B(cg_bycode ,60),I(3b,01,25,00),B(cg_bycode ,15),I(23,00,00,00),B(cg_bycode ,64),I(23,00,00,00),B(cg_bycode ,59),I(3b,02,25,00),B(cg_bycode ,14),I(23,00,00,00),B(cg_bycode ,65),I(23,00,00,00),B(cg_bycode ,58),I(3b,01,25,00),B(cg_bycode ,13),I(23,00,00,00),B(cg_bycode ,66),I(23,00,00,00),B(cg_bycode ,57),I(3b,01,25,00),B(cg_bycode ,12),I(23,00,00,00),B(cg_bycode ,67),I(23,00,00,00),B(cg_bycode ,56),I(3b,01,25,00),B(cg_bycode ,11),I(23,00,00,00),B(cg_bycode ,68),I(23,00,00,00),B(cg_bycode ,55),I(3b,02,25,00),B(cg_bycode ,10),I(23,00,00,00),B(cg_bycode ,69),I(23,00,00,00),B(cg_bycode ,54),I(3b,02,25,00),B(cg_bycode ,9),I(86,25,00,00),B(cg_bycode ,8),I(23,00,00,00),B(cg_bycode ,70),I(23,00,00,00),B(cg_bycode ,53),I(3b,01,25,00),B(cg_bycode ,7),I(86,25,00,00),B(cg_bycode ,6),I(86,25,00,00),B(cg_bycode ,5),I(23,00,00,00),B(cg_bycode ,71),I(23,00,00,00),B(cg_bycode ,52),I(3b,01,25,00),B(cg_bycode ,4),I(23,00,00,00),B(cg_bycode ,72),I(23,00,00,00),B(cg_bycode ,51),I(3b,02,25,00),B(cg_bycode ,3),I(23,00,00,00),B(cg_bycode ,73),I(23,00,00,00),B(cg_bycode ,50),I(3b,02,25,00),B(cg_bycode ,2),I(23,00,00,00),B(cg_bycode ,74),I(23,00,00,00),B(cg_bycode ,49),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G004309,G004308);
  eul_allocate_bytevector( G004311,G004310);
  eul_allocate_bytevector( G004313,G004312);
  eul_allocate_bytevector( G004315,G004314);
  eul_allocate_bytevector( G004317,G004316);
  eul_allocate_bytevector( G004319,G004318);
  eul_allocate_bytevector( G004321,G004320);
  eul_allocate_bytevector( G004323,G004322);
  eul_intern_keyword(key_4326,"name");
  eul_intern_symbol(sym_4327,"name");
  eul_intern_keyword(key_4328,"default");
  eul_intern_symbol(sym_4329,"anonymous");
  eul_intern_keyword(key_4330,"keyword");
  eul_intern_symbol(sym_4331,"args");
  eul_intern_keyword(key_4332,"args");
  eul_intern_symbol(sym_4333,"code");
  eul_intern_keyword(key_4334,"code");
  eul_intern_symbol(sym_4335,"properties");
  eul_intern_keyword(key_4336,"properties");
  eul_intern_symbol(sym_4337,"size");
  eul_intern_keyword(key_4338,"size");
  eul_intern_symbol(sym_4339,"modus");
  eul_intern_keyword(key_4340,"modus");
  eul_intern_symbol(sym_4341,"bytecode");
  eul_intern_keyword(key_4342,"direct-superclasses");
  eul_intern_keyword(key_4343,"direct-slots");
  eul_intern_keyword(key_4344,"direct-keywords");
  object_class(cons_4350) = eul_static_cons_class;
  eul_car(cons_4350) = key_4326;
  eul_cdr(cons_4350) = eul_nil;
  object_class(cons_4349) = eul_static_cons_class;
  eul_car(cons_4349) = key_4332;
  object_class(cons_4348) = eul_static_cons_class;
  eul_car(cons_4348) = key_4334;
  object_class(cons_4347) = eul_static_cons_class;
  eul_car(cons_4347) = key_4336;
  object_class(cons_4346) = eul_static_cons_class;
  eul_car(cons_4346) = key_4338;
  object_class(cons_4345) = eul_static_cons_class;
  eul_car(cons_4345) = key_4340;
  eul_intern_symbol(sym_4351,"bytecode?");
  eul_intern_symbol(sym_4352,"(method bytecode?)");
  eul_allocate_bytevector( G004325,G004324);
  eul_allocate_bytevector( G004354,G004353);
  eul_allocate_bytevector( G004356,G004355);
  eul_allocate_bytevector( G004358,G004357);
  eul_allocate_bytevector( G004360,G004359);
  eul_allocate_bytevector( G004362,G004361);
  eul_allocate_bytevector( G004364,G004363);
  eul_allocate_bytevector( G004366,G004365);
  eul_allocate_bytevector( G004368,G004367);
  eul_allocate_bytevector( G004370,G004369);
  eul_allocate_bytevector( G004372,G004371);
  eul_allocate_bytevector( G004374,G004373);
  eul_allocate_bytevector( G004376,G004375);
  eul_intern_symbol(sym_4379,"bytecode-name!");
  eul_intern_symbol(sym_4380,"bytecode-modus?");
  eul_intern_symbol(sym_4381,"bytecode-code!");
  eul_intern_symbol(sym_4382,"bytecode-code?");
  eul_intern_symbol(sym_4383,"bytecode-size?");
  eul_intern_symbol(sym_4384,"bytecode-name?");
  eul_intern_symbol(sym_4385,"bytecode-properties!");
  eul_intern_symbol(sym_4386,"bytecode-modus!");
  eul_intern_symbol(sym_4387,"bytecode-args?");
  eul_intern_symbol(sym_4388,"bytecode-properties?");
  eul_intern_symbol(sym_4389,"bytecode-size!");
  eul_intern_symbol(sym_4390,"bytecode-args!");
  eul_intern_symbol(sym_4391,"top-level");
  eul_allocate_bytevector( G004378,G004377);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 19; i++)
      cg_bycode_bindings[i] = eul_nil;
  }

  cg_bycode_bindings[ 19] = G004309;
  cg_bycode_bindings[ 20] = G004311;
  cg_bycode_bindings[ 21] = G004313;
  cg_bycode_bindings[ 22] = G004315;
  cg_bycode_bindings[ 23] = G004317;
  cg_bycode_bindings[ 24] = G004319;
  cg_bycode_bindings[ 25] = G004321;
  cg_bycode_bindings[ 26] = G004323;
  cg_bycode_bindings[ 27] = key_4326;
  cg_bycode_bindings[ 28] = sym_4327;
  cg_bycode_bindings[ 29] = key_4328;
  cg_bycode_bindings[ 30] = sym_4329;
  cg_bycode_bindings[ 31] = key_4330;
  cg_bycode_bindings[ 32] = sym_4331;
  cg_bycode_bindings[ 33] = key_4332;
  cg_bycode_bindings[ 34] = sym_4333;
  cg_bycode_bindings[ 35] = key_4334;
  cg_bycode_bindings[ 36] = sym_4335;
  cg_bycode_bindings[ 37] = key_4336;
  cg_bycode_bindings[ 38] = sym_4337;
  cg_bycode_bindings[ 39] = key_4338;
  cg_bycode_bindings[ 40] = sym_4339;
  cg_bycode_bindings[ 41] = key_4340;
  cg_bycode_bindings[ 42] = sym_4341;
  cg_bycode_bindings[ 43] = key_4342;
  cg_bycode_bindings[ 44] = key_4343;
  cg_bycode_bindings[ 45] = key_4344;
  cg_bycode_bindings[ 46] = cons_4345;
  cg_bycode_bindings[ 47] = sym_4351;
  cg_bycode_bindings[ 48] = sym_4352;
  cg_bycode_bindings[ 49] = G004325;
  cg_bycode_bindings[ 50] = G004354;
  cg_bycode_bindings[ 51] = G004356;
  cg_bycode_bindings[ 52] = G004358;
  cg_bycode_bindings[ 53] = G004360;
  cg_bycode_bindings[ 54] = G004362;
  cg_bycode_bindings[ 55] = G004364;
  cg_bycode_bindings[ 56] = G004366;
  cg_bycode_bindings[ 57] = G004368;
  cg_bycode_bindings[ 58] = G004370;
  cg_bycode_bindings[ 59] = G004372;
  cg_bycode_bindings[ 60] = G004374;
  cg_bycode_bindings[ 61] = G004376;
  cg_bycode_bindings[ 1] = eul_nil;
  cg_bycode_bindings[ 62] = sym_4379;
  cg_bycode_bindings[ 63] = sym_4380;
  cg_bycode_bindings[ 64] = sym_4381;
  cg_bycode_bindings[ 65] = sym_4382;
  cg_bycode_bindings[ 66] = sym_4383;
  cg_bycode_bindings[ 67] = sym_4384;
  cg_bycode_bindings[ 68] = sym_4385;
  cg_bycode_bindings[ 69] = sym_4386;
  cg_bycode_bindings[ 70] = sym_4387;
  cg_bycode_bindings[ 71] = sym_4388;
  cg_bycode_bindings[ 72] = sym_4389;
  cg_bycode_bindings[ 73] = sym_4390;
  cg_bycode_bindings[ 74] = sym_4391;
  eul_allocate_lambda( cg_bycode_bindings[0], "initialize-cg-bycode", 0, G004378);

  }
}


/* eof */
