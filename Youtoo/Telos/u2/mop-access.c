/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module mop-access
 **  Copyright: See file mop-access.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_boot();
extern void initialize_module_mop_prim();
extern void initialize_module_mop_key();
extern void initialize_module_mop_class();
extern void initialize_module_mop_inspect();
extern void initialize_module_mop_gf();
extern void initialize_module_mop_meth();
extern void initialize_module_mop_defcl();
extern LispRef mop_inspect_bindings[];
extern LispRef mop_key_bindings[];
extern LispRef mop_prim_bindings[];
extern LispRef boot_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_defcl_bindings[];

/* Module bindings with size 67 */
LispRef mop_access_bindings[67];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module mop-access */
void initialize_module_mop_access()
{
  if (is_initialized) return;
  initialize_module_boot();
  initialize_module_mop_prim();
  initialize_module_mop_key();
  initialize_module_mop_class();
  initialize_module_mop_inspect();
  initialize_module_mop_gf();
  initialize_module_mop_meth();
  initialize_module_mop_defcl();
  eul_fast_table_set(eul_modules,"mop_access",(LispRef) mop_access_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_3043, sym_3042, sym_3041, sym_3040, G003039, G003035, G003032, G003030, G003028, G003026, sym_3024, sym_3023, sym_3022, sym_3021, sym_3020, sym_3019, sym_3018, sym_3017, sym_3016, sym_3015, sym_3014, sym_3013, sym_3012, sym_3011, sym_3010, sym_3009, sym_3008, sym_3007, G003006, G003004, G003002, G003000, G002998, G002996, G002994, G002992, G002990, G002988, G002986, G002984, G002982, G002980, G002978, G002976, G002974, G002972, G002970, G002968, sym_2966, G002965, G002963;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 9 is_init: 0 index: 14 binding: anonymous */
  static const void *G002962[] = {I(ab,1b,10,1b),I(82,02,47,00),I(01,1c,50,1b),I(44,05,1f,04),I(36,0e,1f,04),I(83,14,1f,04),I(11,47,00,00),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 16 binding: (method-compute-primitive-writer-using-class) */
  static const void *G002964[] = {I(43,03,46,03),I(1c,82,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,14),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,3),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 17 binding: (method-compute-primitive-writer-using-slot) */
  static const void *G002967[] = {I(43,03,1c,1f),I(03,1d,24,00),B(mop_access ,13),I(3d,03,03,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 18 binding: (method-ensure-slot-writer) */
  static const void *G002969[] = {I(43,04,1b,45),I(04,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 19 binding: anonymous */
  static const void *G002971[] = {I(ab,47,00,00),I(3d,02,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 20 binding: (method-ensure-slot-writer) */
  static const void *G002973[] = {I(43,04,46,01),I(1b,8a,05,02),I(1b,44,04,86),I(36,5b,1f,03),I(1f,05,1f,04),I(24,00,00,00),B(mop_access ,7),I(3c,03,1b,48),I(00,00,1d,8a),I(03,02,84,1f),I(07,86,24,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,1d,1d),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,19),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,8),I(3c,02,22,05),I(2a,1c,45,05)};

  /* Byte-vector with size: 9 is_init: 0 index: 21 binding: anonymous */
  static const void *G002975[] = {I(ab,1b,10,1b),I(82,02,47,00),I(01,1c,50,1b),I(44,05,1f,04),I(36,0e,1f,04),I(83,14,1f,04),I(11,47,00,00),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 22 binding: (method-compute-primitive-reader-using-class) */
  static const void *G002977[] = {I(43,03,46,03),I(1c,82,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,21),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,6),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 23 binding: (method-compute-primitive-reader-using-slot) */
  static const void *G002979[] = {I(43,03,1c,1f),I(03,1d,24,00),B(mop_access ,9),I(3d,03,03,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 24 binding: (method-ensure-slot-reader) */
  static const void *G002981[] = {I(43,04,1b,45),I(04,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 25 binding: anonymous */
  static const void *G002983[] = {I(aa,47,00,00),I(3d,01,00,00)};

  /* Byte-vector with size: 27 is_init: 0 index: 26 binding: (method-ensure-slot-reader) */
  static const void *G002985[] = {I(43,04,46,01),I(1b,8a,05,02),I(1b,44,04,86),I(36,5b,1f,03),I(1f,05,1f,04),I(24,00,00,00),B(mop_access ,4),I(3c,03,1b,48),I(00,00,1d,8a),I(03,02,83,1f),I(07,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,1d,1d),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,1f,06),I(1c,24,00,00),B(mop_meth ,8),I(3c,02,22,05),I(2a,1c,45,05)};

  /* Byte-vector with size: 9 is_init: 0 index: 27 binding: anonymous */
  static const void *G002987[] = {I(ab,1b,10,1b),I(84,02,47,00),I(01,1c,50,1b),I(44,05,1f,04),I(36,0e,1f,04),I(83,14,1f,04),I(11,47,00,00),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 28 binding: (method-compute-slot-writer) */
  static const void *G002989[] = {I(43,03,46,03),I(1c,84,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,27),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,3),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 20 is_init: 0 index: 29 binding: (method-compute-slot-writer) */
  static const void *G002991[] = {I(43,03,84,1f),I(03,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,15),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,45),I(07,00,00,00)};

  /* Byte-vector with size: 9 is_init: 0 index: 30 binding: anonymous */
  static const void *G002993[] = {I(ab,1b,10,1b),I(84,02,47,00),I(01,1c,50,1b),I(44,05,1f,04),I(36,0e,1f,04),I(83,14,1f,04),I(11,47,00,00),I(3d,02,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 31 binding: (method-compute-slot-reader) */
  static const void *G002995[] = {I(43,03,46,03),I(1c,84,02,1b),I(48,00,01,86),I(1b,48,00,00),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,30),I(3b,02,48,00),I(00,82,1f,03),I(47,00,00,3c),I(02,24,00,00),B(mop_defcl ,6),I(3d,01,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 32 binding: (method-compute-slot-reader) */
  static const void *G002997[] = {I(43,03,83,1f),I(03,24,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,15),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,45),I(07,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 33 binding: anonymous */
  static const void *G002999[] = {I(ab,82,02,50),I(45,00,00,00)};

  /* Byte-vector with size: 37 is_init: 0 index: 34 binding: anonymous */
  static const void *G003001[] = {I(aa,1b,82,02),I(47,00,02,10),I(1c,1c,23,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,33),I(3b,02,24,00),B(boot ,27),I(3c,03,1b,44),I(04,86,36,36),I(47,00,00,1f),I(04,47,00,01),I(24,00,00,00),B(mop_access ,12),I(3c,03,47,00),I(00,1f,05,47),I(00,01,24,00),B(mop_access ,11),I(3c,03,1f,05),I(1d,1c,82,1d),I(03,22,02,2a),I(1f,05,1c,1c),I(83,1d,03,22),I(04,2a,1f,03),I(82,02,47,00),I(00,1f,05,47),I(00,01,1f,03),I(24,00,00,00),B(mop_access ,2),I(3c,04,2a,1f),I(04,83,02,47),I(00,00,1f,06),I(47,00,01,1f),I(03,24,00,00),B(mop_access ,6),I(3d,04,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 35 binding: (method-compute-and-ensure-slot-accessors) */
  static const void *G003003[] = {I(43,03,46,03),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(23,00,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,34),I(3b,01,47,00),I(01,24,00,00),B(boot ,17),I(3c,02,2a,47),I(00,01,45,03)};

  /* Byte-vector with size: 601 is_init: 0 index: 54 binding: top-level */
  static const void *G003005[] = {I(a9,8a,03,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,36),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,10),I(2a,8a,03,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,37),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,12),I(2a,8a,03,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,38),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,11),I(2a,8a,04,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,39),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,2),I(2a,8a,03,24),B(mop_class ,57),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,40),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,4),I(2a,8a,03,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,41),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,9),I(2a,8a,04,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(mop_class ,32),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,42),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,6),I(2a,8a,03,24),B(mop_class ,57),I(24,00,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,43),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,7),I(2a,8a,03,24),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(mop_access ,44),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(mop_access ,13),I(2a,24,00,00),B(mop_access ,10),I(2a,24,00,00),B(mop_access ,10),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(86,86,24,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,10),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,45),I(23,00,00,00),B(mop_access ,35),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,12),I(2a,24,00,00),B(mop_access ,12),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,46),I(23,00,00,00),B(mop_access ,32),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,12),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,59),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,12),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,46),I(23,00,00,00),B(mop_access ,31),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,11),I(2a,24,00,00),B(mop_access ,11),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,11),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,47),I(23,00,00,00),B(mop_access ,29),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,11),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,59),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,11),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,47),I(23,00,00,00),B(mop_access ,28),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,11),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,2),I(2a,24,00,00),B(mop_access ,2),I(8a,03,02,8a),I(04,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(86,24,00,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,48),I(23,00,00,00),B(mop_access ,26),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,2),I(8a,03,02,8a),I(04,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,59),I(86,24,00,00),B(mop_class ,32),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,2),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,48),I(23,00,00,00),B(mop_access ,24),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,4),I(2a,24,00,00),B(mop_access ,4),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,4),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,49),I(23,00,00,00),B(mop_access ,23),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,9),I(2a,24,00,00),B(mop_access ,9),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,9),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,50),I(23,00,00,00),B(mop_access ,22),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,6),I(2a,24,00,00),B(mop_access ,6),I(8a,03,02,8a),I(04,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(86,24,00,00),B(mop_class ,51),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,51),I(23,00,00,00),B(mop_access ,20),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,6),I(8a,03,02,8a),I(04,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,59),I(86,24,00,00),B(mop_class ,32),I(24,00,00,00),B(boot1 ,40),I(3c,05,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,6),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,51),I(23,00,00,00),B(mop_access ,18),I(3b,04,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,7),I(2a,24,00,00),B(mop_access ,7),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,57),I(24,00,00,00),B(mop_class ,86),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,7),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,52),I(23,00,00,00),B(mop_access ,17),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,7),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_access ,13),I(2a,24,00,00),B(mop_access ,13),I(8a,03,02,8a),I(03,24,00,00),B(mop_class ,86),I(24,00,00,00),B(mop_class ,57),I(86,24,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_access ,13),I(8a,04,02,1c),I(1c,24,00,00),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(mop_access ,53),I(23,00,00,00),B(mop_access ,16),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_access ,13),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,72,45),I(72,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 55 binding: pprint */
  static const void *G003025[] = {I(aa,83,1c,24),B(mop_access ,8),I(3d,02,01,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 56 binding: anonymous */
  static const void *G003027[] = {I(aa,84,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 57 binding: find-slot-names */
  static const void *G003029[] = {I(aa,04,8a,04),I(02,23,00,00),B(mop_access ,15),I(23,00,00,00),B(mop_access ,56),I(3b,01,1c,24),B(boot ,11),I(3d,02,01,00)};

  eul_allocate_static_string(str_3033, "\n  ~a = ~a", 10);
  /* Byte-vector with size: 11 is_init: 0 index: 59 binding: anonymous */
  static const void *G003031[] = {I(aa,1b,84,02),I(1c,82,02,47),I(00,01,1c,3c),I(01,1d,1c,47),I(00,00,23,00),B(mop_access ,58),I(1f,03,1f,03),I(24,00,00,00),B(boot1 ,48),I(3d,04,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_3036, "\nInstance ~a of class #<~a>", 27);
  eul_allocate_static_string(str_3037, "\n", 1);
  /* Byte-vector with size: 32 is_init: 0 index: 62 binding: spprint */
  static const void *G003034[] = {I(ab,46,02,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,24,00),B(boot1 ,39),I(3c,01,1b,44),I(53,47,00,01),I(04,1b,82,02),I(47,00,00,23),B(mop_access ,60),I(47,00,01,1f),I(03,24,00,00),B(boot1 ,48),I(3c,04,2a,1c),I(8a,04,02,23),B(mop_access ,15),I(23,00,00,00),B(mop_access ,59),I(3b,01,1c,24),B(boot ,17),I(3c,02,2a,47),I(00,00,23,00),B(mop_access ,61),I(24,00,00,00),B(boot1 ,48),I(3d,02,06,22),I(03,36,11,47),I(00,00,47,00),I(01,24,00,00),B(boot1 ,28),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 84 is_init: 1 index: 0 binding: initialize-mop-access */
  static const void *G003038[] = {I(87,25,00,00),B(mop_access ,1),I(24,00,00,00),B(mop_defcl ,1),I(3e,0b,24,00),B(mop_defcl ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_meth ,1),I(3e,0b,24,00),B(mop_meth ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_gf ,1),I(3e,0b,24,00),B(mop_gf ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_inspect ,1),I(3e,0b,24,00),B(mop_inspect ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_class ,1),I(3e,0b,24,00),B(mop_class ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_key ,1),I(3e,0b,24,00),B(mop_key ,0),I(3c,00,21,01),I(24,00,00,00),B(mop_prim ,1),I(3e,0b,24,00),B(mop_prim ,0),I(3c,00,21,01),I(24,00,00,00),B(boot ,1),I(3e,0b,24,00),B(boot ,0),I(3c,00,21,01),I(86,25,00,00),B(mop_access ,13),I(86,25,00,00),B(mop_access ,12),I(86,25,00,00),B(mop_access ,11),I(86,25,00,00),B(mop_access ,10),I(86,25,00,00),B(mop_access ,9),I(23,00,00,00),B(mop_access ,63),I(23,00,00,00),B(mop_access ,62),I(3b,02,25,00),B(mop_access ,8),I(86,25,00,00),B(mop_access ,7),I(86,25,00,00),B(mop_access ,6),I(23,00,00,00),B(mop_access ,64),I(23,00,00,00),B(mop_access ,57),I(3b,01,25,00),B(mop_access ,5),I(86,25,00,00),B(mop_access ,4),I(23,00,00,00),B(mop_access ,65),I(23,00,00,00),B(mop_access ,55),I(3b,01,25,00),B(mop_access ,3),I(86,25,00,00),B(mop_access ,2),I(23,00,00,00),B(mop_access ,66),I(23,00,00,00),B(mop_access ,54),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002963,G002962);
  eul_intern_symbol(sym_2966,"anonymous");
  eul_allocate_bytevector( G002965,G002964);
  eul_allocate_bytevector( G002968,G002967);
  eul_allocate_bytevector( G002970,G002969);
  eul_allocate_bytevector( G002972,G002971);
  eul_allocate_bytevector( G002974,G002973);
  eul_allocate_bytevector( G002976,G002975);
  eul_allocate_bytevector( G002978,G002977);
  eul_allocate_bytevector( G002980,G002979);
  eul_allocate_bytevector( G002982,G002981);
  eul_allocate_bytevector( G002984,G002983);
  eul_allocate_bytevector( G002986,G002985);
  eul_allocate_bytevector( G002988,G002987);
  eul_allocate_bytevector( G002990,G002989);
  eul_allocate_bytevector( G002992,G002991);
  eul_allocate_bytevector( G002994,G002993);
  eul_allocate_bytevector( G002996,G002995);
  eul_allocate_bytevector( G002998,G002997);
  eul_allocate_bytevector( G003000,G002999);
  eul_allocate_bytevector( G003002,G003001);
  eul_allocate_bytevector( G003004,G003003);
  eul_intern_symbol(sym_3007,"compute-and-ensure-slot-accessors");
  eul_intern_symbol(sym_3008,"compute-slot-reader");
  eul_intern_symbol(sym_3009,"compute-slot-writer");
  eul_intern_symbol(sym_3010,"ensure-slot-reader");
  eul_intern_symbol(sym_3011,"compute-primitive-reader-using-slot");
  eul_intern_symbol(sym_3012,"compute-primitive-reader-using-class");
  eul_intern_symbol(sym_3013,"ensure-slot-writer");
  eul_intern_symbol(sym_3014,"compute-primitive-writer-using-slot");
  eul_intern_symbol(sym_3015,"compute-primitive-writer-using-class");
  eul_intern_symbol(sym_3016,"(method compute-and-ensure-slot-accessors)");
  eul_intern_symbol(sym_3017,"(method compute-slot-reader)");
  eul_intern_symbol(sym_3018,"(method compute-slot-writer)");
  eul_intern_symbol(sym_3019,"(method ensure-slot-reader)");
  eul_intern_symbol(sym_3020,"(method compute-primitive-reader-using-slot)");
  eul_intern_symbol(sym_3021,"(method compute-primitive-reader-using-class)");
  eul_intern_symbol(sym_3022,"(method ensure-slot-writer)");
  eul_intern_symbol(sym_3023,"(method compute-primitive-writer-using-slot)");
  eul_intern_symbol(sym_3024,"(method compute-primitive-writer-using-class)");
  eul_allocate_bytevector( G003006,G003005);
  eul_allocate_bytevector( G003026,G003025);
  eul_allocate_bytevector( G003028,G003027);
  eul_allocate_bytevector( G003030,G003029);
  object_class(str_3033) = eul_static_string_class;
  eul_allocate_bytevector( G003032,G003031);
  object_class(str_3036) = eul_static_string_class;
  object_class(str_3037) = eul_static_string_class;
  eul_allocate_bytevector( G003035,G003034);
  eul_intern_symbol(sym_3040,"spprint");
  eul_intern_symbol(sym_3041,"find-slot-names");
  eul_intern_symbol(sym_3042,"pprint");
  eul_intern_symbol(sym_3043,"top-level");
  eul_allocate_bytevector( G003039,G003038);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 14; i++)
      mop_access_bindings[i] = eul_nil;
  }

  mop_access_bindings[ 14] = G002963;
  mop_access_bindings[ 15] = sym_2966;
  mop_access_bindings[ 16] = G002965;
  mop_access_bindings[ 17] = G002968;
  mop_access_bindings[ 18] = G002970;
  mop_access_bindings[ 19] = G002972;
  mop_access_bindings[ 20] = G002974;
  mop_access_bindings[ 21] = G002976;
  mop_access_bindings[ 22] = G002978;
  mop_access_bindings[ 23] = G002980;
  mop_access_bindings[ 24] = G002982;
  mop_access_bindings[ 25] = G002984;
  mop_access_bindings[ 26] = G002986;
  mop_access_bindings[ 27] = G002988;
  mop_access_bindings[ 28] = G002990;
  mop_access_bindings[ 29] = G002992;
  mop_access_bindings[ 30] = G002994;
  mop_access_bindings[ 31] = G002996;
  mop_access_bindings[ 32] = G002998;
  mop_access_bindings[ 33] = G003000;
  mop_access_bindings[ 34] = G003002;
  mop_access_bindings[ 35] = G003004;
  mop_access_bindings[ 36] = sym_3007;
  mop_access_bindings[ 37] = sym_3008;
  mop_access_bindings[ 38] = sym_3009;
  mop_access_bindings[ 39] = sym_3010;
  mop_access_bindings[ 40] = sym_3011;
  mop_access_bindings[ 41] = sym_3012;
  mop_access_bindings[ 42] = sym_3013;
  mop_access_bindings[ 43] = sym_3014;
  mop_access_bindings[ 44] = sym_3015;
  mop_access_bindings[ 45] = sym_3016;
  mop_access_bindings[ 46] = sym_3017;
  mop_access_bindings[ 47] = sym_3018;
  mop_access_bindings[ 48] = sym_3019;
  mop_access_bindings[ 49] = sym_3020;
  mop_access_bindings[ 50] = sym_3021;
  mop_access_bindings[ 51] = sym_3022;
  mop_access_bindings[ 52] = sym_3023;
  mop_access_bindings[ 53] = sym_3024;
  mop_access_bindings[ 54] = G003006;
  mop_access_bindings[ 55] = G003026;
  mop_access_bindings[ 56] = G003028;
  mop_access_bindings[ 57] = G003030;
  mop_access_bindings[ 58] = str_3033;
  mop_access_bindings[ 59] = G003032;
  mop_access_bindings[ 60] = str_3036;
  mop_access_bindings[ 61] = str_3037;
  mop_access_bindings[ 62] = G003035;
  mop_access_bindings[ 1] = eul_nil;
  mop_access_bindings[ 63] = sym_3040;
  mop_access_bindings[ 64] = sym_3041;
  mop_access_bindings[ 65] = sym_3042;
  mop_access_bindings[ 66] = sym_3043;
  eul_allocate_lambda( mop_access_bindings[0], "initialize-mop-access", 0, G003039);

  }
}


/* eof */