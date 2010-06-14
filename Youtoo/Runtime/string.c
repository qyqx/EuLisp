/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module string
 **  Copyright: See file string.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_convert();
extern void initialize_module_copy();
extern void initialize_module_collect();
extern void initialize_module_compare();
extern void initialize_module_fpi();
extern LispRef telos_bindings[];
extern LispRef copy_bindings[];
extern LispRef fpi_bindings[];
extern LispRef compare_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef collect_bindings[];
extern LispRef boot_bindings[];
extern LispRef convert_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 112 */
LispRef string_bindings[112];

/* Foreign functions */
static LispRef ff_stub_eul_init_string2843 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002983, G002984, G002985, res;

  POPVAL1(G002985);
  POPVAL1(G002984);
  POPVAL1(G002983);
  FF_RES_CONVERT6(res,eul_init_string(FF_ARG_CONVERT8(G002983), FF_ARG_CONVERT0(G002984), FF_ARG_CONVERT1(G002985)));
  return res;
}

static LispRef ff_stub_strcmp2844 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002986, G002987, res;

  POPVAL1(G002987);
  POPVAL1(G002986);
  FF_RES_CONVERT0(res,strcmp(FF_ARG_CONVERT3(G002986), FF_ARG_CONVERT3(G002987)));
  return res;
}

static LispRef ff_stub_eul_reverse_str2845 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002988, res;

  POPVAL1(G002988);
  FF_RES_CONVERT3(res,eul_reverse_str(FF_ARG_CONVERT3(G002988)));
  return res;
}

static LispRef ff_stub_eul_reverse_des_str2846 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002989, res;

  POPVAL1(G002989);
  FF_RES_CONVERT3(res,eul_reverse_des_str(FF_ARG_CONVERT3(G002989)));
  return res;
}

static LispRef ff_stub_eul_str_append2847 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002990, G002991, res;

  POPVAL1(G002991);
  POPVAL1(G002990);
  FF_RES_CONVERT3(res,eul_str_append(FF_ARG_CONVERT3(G002990), FF_ARG_CONVERT3(G002991)));
  return res;
}

static LispRef ff_stub_eul_list_as_eul_string2848 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002992, res;

  POPVAL1(G002992);
  FF_RES_CONVERT6(res,eul_list_as_eul_string(FF_ARG_CONVERT8(G002992)));
  return res;
}

static LispRef ff_stub_eul_str_copy2849 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002993, res;

  POPVAL1(G002993);
  FF_RES_CONVERT3(res,eul_str_copy(FF_ARG_CONVERT3(G002993)));
  return res;
}

static LispRef ff_stub_atoi2850 (Stack *reg_value_stack, LispRef *sreg_value_sp, LispRef *sreg_value_sb)
{
  LispRef G002994, res;

  POPVAL1(G002994);
  FF_RES_CONVERT0(res,atoi(FF_ARG_CONVERT3(G002994)));
  return res;
}


/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module string */
void initialize_module_string()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_convert();
  initialize_module_copy();
  initialize_module_collect();
  initialize_module_compare();
  initialize_module_fpi();
  eul_fast_table_set(eul_modules,"string",(LispRef) string_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_2982, sym_2981, sym_2980, sym_2979, sym_2978, sym_2977, sym_2976, sym_2975, sym_2974, sym_2973, sym_2972, sym_2971, sym_2970, G002969, G002967, G002965, G002963, G002961, G002959, G002957, G002955, G002953, G002951, G002949, G002947, G002945, G002943, G002941, G002939, G002937, G002935, G002933, sym_2931, sym_2929, sym_2927, sym_2926, sym_2925, sym_2924, sym_2923, sym_2922, sym_2921, sym_2920, sym_2919, sym_2918, sym_2917, sym_2916, sym_2915, sym_2914, sym_2913, sym_2912, sym_2911, sym_2910, sym_2909, sym_2908, sym_2907, sym_2906, key_2905, key_2904, key_2903, key_2902, sym_2901, key_2900, G002899, G002897, key_2895, key_2894, G002893, G002891, G002889, G002887, G002885, G002883, G002881, G002879, G002877, G002875, G002873, G002871, G002869, G002867, G002865, G002863, sym_2861, G002860, G002858, G002856, G002854, G002852;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 3 is_init: 0 index: 24 binding: (method-deep-copy) */
  static const void *G002851[] = {I(aa,41,00,00),B(string ,22),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 25 binding: (method-shallow-copy) */
  static const void *G002853[] = {I(aa,41,00,00),B(string ,22),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 26 binding: (method-slice) */
  static const void *G002855[] = {I(43,03,41,00),B(boot1 ,52),I(45,03,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 27 binding: anonymous */
  static const void *G002857[] = {I(aa,1b,12,1b),I(34,00,00,00),I(00,00,00,10),I(47,00,00,32),I(00,00,00,32),I(1c,10,1b,24),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,47,00),I(00,1c,41,00),B(string ,20),I(22,02,1b,48),I(00,00,1f,04),I(11,47,00,01),I(3d,01,05,22),I(03,45,02,00)};

  /* Byte-vector with size: 11 is_init: 0 index: 29 binding: (method-concatenate) */
  static const void *G002859[] = {I(43,fe,46,02),I(1c,48,00,00),I(86,1b,48,00),I(01,23,00,00),B(string ,28),I(23,00,00,00),B(string ,27),I(3b,01,48,00),I(01,1c,47,00),I(01,3d,01,03),I(45,03,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: (method-reverse!) */
  static const void *G002862[] = {I(aa,41,00,00),B(string ,19),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: (method-reverse) */
  static const void *G002864[] = {I(aa,41,00,00),B(string ,18),I(45,01,00,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 32 binding: (method-size) */
  static const void *G002866[] = {I(aa,06,45,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-element) */
  static const void *G002868[] = {I(ab,0b,45,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 34 binding: anonymous */
  static const void *G002870[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,1c,51),I(1b,34,00,00),I(00,00,00,0f),I(47,00,03,32),I(00,00,00,15),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,04,22,01),I(22,02,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 23 is_init: 0 index: 35 binding: (method-member) */
  static const void *G002872[] = {I(43,fd,46,05),I(1d,48,00,00),I(1c,48,00,01),I(1b,12,1b,34),I(00,00,00,19),I(47,00,00,47),I(00,01,41,00),B(boot1 ,54),I(22,02,32,00),I(00,00,00,37),I(1c,10,47,00),I(01,06,82,1c),I(48,00,02,1b),I(48,00,03,86),I(1b,48,00,04),I(23,00,00,00),B(string ,28),I(23,00,00,00),B(string ,34),I(3b,00,48,00),I(04,47,00,04),I(3d,00,08,22),I(04,45,04,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 36 binding: (method-map) */
  static const void *G002874[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,4),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 37 binding: (method-do) */
  static const void *G002876[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,10),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 38 binding: (method-all?) */
  static const void *G002878[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,9),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 10 is_init: 0 index: 39 binding: (method-any?) */
  static const void *G002880[] = {I(43,fd,1b,12),I(1b,34,00,00),I(00,00,00,1b),I(1f,03,1f,03),I(24,00,00,00),B(string ,14),I(3d,02,04,32),I(00,00,00,08),I(38,03,01,45),I(04,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 40 binding: (method-accumulate1) */
  static const void *G002882[] = {I(ab,24,00,00),B(string ,3),I(3d,02,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: (method-accumulate) */
  static const void *G002884[] = {I(43,03,24,00),B(string ,15),I(3d,03,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 42 binding: (method-binary<) */
  static const void *G002886[] = {I(ab,41,00,00),B(string ,17),I(22,02,82,1a),I(45,00,00,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 43 binding: (method-binary=) */
  static const void *G002888[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,1b),I(34,00,00,00),I(00,00,00,10),I(87,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 44 binding: (method-emptyp) */
  static const void *G002890[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 47 binding: (method-initialize) */
  static const void *G002892[] = {I(ab,1c,1c,37),I(02,2a,1b,23),B(string ,45),I(82,24,00,00),B(boot ,29),I(3c,03,1c,23),B(string ,46),I(27,20,24,00),B(boot ,29),I(3c,03,1f,03),I(1d,1d,41,00),B(string ,16),I(45,07,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 48 binding: (setter-string-data) */
  static const void *G002896[] = {I(ab,1c,82,1d),I(24,00,00,00),B(string ,13),I(09,45,02,00)};

  eul_allocate_static_cons(cons_2930, NULL, NULL);
  eul_allocate_static_cons(cons_2928, NULL, eul_as_static(cons_2930));
  /* Byte-vector with size: 662 is_init: 0 index: 80 binding: top-level */
  static const void *G002898[] = {I(a9,24,00,00),B(collect ,7),I(24,00,00,00),B(boot1 ,26),I(3c,01,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_class ,70),I(23,00,00,00),B(string ,49),I(23,00,00,00),B(string ,50),I(23,00,00,00),B(string ,51),I(1f,05,23,00),B(string ,52),I(1f,06,23,00),B(string ,53),I(86,23,00,00),B(string ,54),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(string ,2),I(2a,28,0f,1b),I(89,00,00,00),B(string ,13),I(2a,24,00,00),B(string ,2),I(2a,24,00,00),B(string ,13),I(24,00,00,00),B(mop_class ,70),I(05,2a,24,00),B(string ,2),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(string ,49),I(23,00,00,00),B(string ,55),I(24,00,00,00),B(boot1 ,26),I(3c,02,1b,24),B(boot1 ,26),I(3c,01,23,00),B(string ,49),I(23,00,00,00),B(string ,56),I(23,00,00,00),B(string ,51),I(1f,05,23,00),B(string ,52),I(1f,05,23,00),B(string ,53),I(86,24,00,00),B(boot1 ,26),I(3c,08,24,00),B(string ,13),I(1c,24,00,00),B(mop_gf ,12),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(string ,12),I(23,00,00,00),B(string ,57),I(23,00,00,00),B(string ,48),I(3b,02,1d,3c),I(02,2a,24,00),B(string ,13),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,58),I(23,00,00,00),B(string ,47),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,59),I(23,00,00,00),B(string ,44),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,60),I(23,00,00,00),B(string ,43),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(compare ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(compare ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,61),I(23,00,00,00),B(string ,42),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,25),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,27),I(86,24,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,25),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,62),I(23,00,00,00),B(string ,41),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,25),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,63),I(23,00,00,00),B(string ,40),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,26),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,26),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,64),I(23,00,00,00),B(string ,39),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,26),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,18),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,18),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,65),I(23,00,00,00),B(string ,38),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,18),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,6),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,6),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,66),I(23,00,00,00),B(string ,37),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,6),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,2),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,67),I(23,00,00,00),B(string ,36),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,13),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,13),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,68),I(23,00,00,00),B(string ,35),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,13),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,22),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(string ,13),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,22),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,69),I(23,00,00,00),B(string ,33),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,22),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,70),I(23,00,00,00),B(string ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,27),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,27),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,71),I(23,00,00,00),B(string ,31),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,27),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,12),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,72),I(23,00,00,00),B(string ,30),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,19),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,19),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,73),I(23,00,00,00),B(string ,29),I(3b,fe,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,19),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,4),I(26,00,00,00),I(00,00,00,03),I(02,26,00,00),I(00,00,00,03),I(24,00,00,00),B(string ,13),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(fpi ,6),I(24,00,00,00),B(boot1 ,40),I(3c,04,24,00),B(boot1 ,26),I(3c,00,24,00),B(collect ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,74),I(23,00,00,00),B(string ,26),I(3b,03,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,2),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(copy ,2),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,75),I(23,00,00,00),B(string ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,2),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(copy ,3),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(string ,13),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(copy ,3),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(string ,76),I(23,00,00,00),B(string ,24),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(copy ,3),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(mop_class ,13),I(24,00,00,00),B(boot1 ,42),I(3c,01,83,24),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(string ,79),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(string ,13),I(1c,1f,06,3c),I(02,2a,24,00),B(string ,13),I(24,00,00,00),B(mop_class ,13),I(3d,01,80,45),I(80,00,00,00)};

  /* Byte-vector with size: 13 is_init: 0 index: 81 binding: accumulate1-string */
  static const void *G002932[] = {I(ab,1b,06,2d),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,24),I(1c,82,0b,1d),I(83,41,00,00),B(boot1 ,53),I(22,02,1f,04),I(1d,1d,24,00),B(string ,15),I(3d,03,05,22),I(02,45,03,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 82 binding: anonymous */
  static const void *G002934[] = {I(a9,47,00,05),I(47,00,03,1a),I(1b,34,00,00),I(00,00,00,33),I(47,00,01,47),I(00,05,0b,1b),I(47,00,00,3c),I(01,47,00,04),I(47,00,05,1d),I(0c,2a,47,00),I(05,2b,1b,48),I(00,05,47,00),I(02,3d,00,04),I(22,03,32,00),I(00,00,00,09),I(47,00,04,45),I(01,00,00,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 83 binding: map1-string */
  static const void *G002936[] = {I(ab,46,07,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,1b),I(48,00,03,24),B(string ,13),I(23,00,00,00),B(string ,45),I(47,00,03,24),B(mop_gf ,2),I(3c,03,1b,48),I(00,04,82,1b),I(48,00,05,86),I(1b,48,00,02),I(23,00,00,00),B(string ,28),I(23,00,00,00),B(string ,82),I(3b,00,48,00),I(02,47,00,02),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 33 is_init: 0 index: 84 binding: anonymous */
  static const void *G002938[] = {I(ab,47,00,01),I(1d,24,00,00),B(collect ,13),I(3c,02,1d,86),I(1d,24,00,00),B(string ,6),I(3c,03,24,00),B(mop_class ,5),I(23,00,00,00),B(string ,49),I(1d,24,00,00),B(mop_gf ,2),I(3c,03,1d,34),I(00,00,00,15),I(1f,04,06,1b),I(2c,1f,04,1c),I(1a,22,02,32),I(00,00,00,06),I(86,1b,34,00),I(00,00,00,26),I(1f,03,2b,1f),I(06,1c,86,24),B(string ,6),I(3c,03,1f,03),I(1f,07,0f,47),I(00,00,3d,02),I(07,22,01,32),I(00,00,00,14),I(1c,1f,05,0f),I(24,00,00,00),B(boot ,25),I(3d,01,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 26 is_init: 0 index: 85 binding: listify-string */
  static const void *G002940[] = {I(43,fe,46,03),I(1b,34,00,00),I(00,00,00,0f),I(1b,10,32,00),I(00,00,00,08),I(27,20,1b,48),I(00,01,86,1b),I(48,00,00,23),B(string ,28),I(23,00,00,00),B(string ,84),I(3b,02,48,00),I(00,1f,03,82),I(0b,47,00,01),I(1c,51,1b,34),I(00,00,00,21),I(1f,05,83,86),I(24,00,00,00),B(string ,6),I(3c,03,86,47),I(00,00,3d,02),I(06,32,00,00),I(00,00,00,10),I(1f,05,86,47),I(00,00,3d,02),I(06,45,06,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 86 binding: substring */
  static const void *G002942[] = {I(43,03,1c,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,08),I(82,1d,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,0a),I(1f,05,06,1d),I(1c,1f,08,1d),I(1d,41,00,00),B(boot1 ,52),I(45,0c,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 87 binding: string-empty? */
  static const void *G002944[] = {I(aa,06,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 88 binding: string-equal */
  static const void *G002946[] = {I(ab,41,00,00),B(string ,17),I(22,02,2d,45),I(00,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 89 binding: anonymous */
  static const void *G002948[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(1b,34,00,00),I(00,00,00,1f),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,03,22,01),I(32,00,00,00),I(00,00,00,09),I(86,22,01,32),I(00,00,00,08),I(47,00,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 90 binding: all?1-string */
  static const void *G002950[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,28),I(23,00,00,00),B(string ,89),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 14 is_init: 0 index: 91 binding: anonymous */
  static const void *G002952[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,2b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(2a,47,00,03),I(2b,1b,48,00),I(03,47,00,04),I(3d,00,02,22),I(01,32,00,00),I(00,00,00,08),I(86,45,01,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 92 binding: do1-string */
  static const void *G002954[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,28),I(23,00,00,00),B(string ,91),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 93 binding: string-append */
  static const void *G002956[] = {I(a8,41,00,00),B(string ,21),I(45,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 94 binding: string-data */
  static const void *G002958[] = {I(aa,82,24,00),B(string ,13),I(08,45,00,00)};

  /* Byte-vector with size: 18 is_init: 0 index: 95 binding: anonymous */
  static const void *G002960[] = {I(a9,47,00,03),I(47,00,02,1a),I(1b,34,00,00),I(00,00,00,3b),I(47,00,01,47),I(00,03,0b,47),I(00,00,3c,01),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,17),I(47,00,03,2b),I(1b,48,00,03),I(47,00,04,3d),I(00,03,22,01),I(22,01,32,00),I(00,00,00,07),I(86,45,01,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 96 binding: anyp1-string */
  static const void *G002962[] = {I(ab,46,05,1c),I(48,00,00,1b),I(48,00,01,47),I(00,01,06,82),I(1c,48,00,02),I(1b,48,00,03),I(86,1b,48,00),I(04,23,00,00),B(string ,28),I(23,00,00,00),B(string ,95),I(3b,00,48,00),I(04,47,00,04),I(3d,00,05,45),I(05,00,00,00)};

  /* Byte-vector with size: 17 is_init: 0 index: 97 binding: anonymous */
  static const void *G002964[] = {I(a9,47,00,04),I(47,00,03,1a),I(1b,34,00,00),I(00,00,00,33),I(47,00,02,47),I(00,04,0b,47),I(00,01,1c,47),I(00,00,3c,02),I(1b,48,00,01),I(47,00,04,2b),I(1b,48,00,04),I(47,00,05,3d),I(00,04,22,03),I(32,00,00,00),I(00,00,00,0b),I(47,00,01,45),I(01,00,00,00)};

  /* Byte-vector with size: 16 is_init: 0 index: 98 binding: accumulate-string */
  static const void *G002966[] = {I(43,03,46,06),I(1d,48,00,00),I(1c,48,00,01),I(1b,48,00,02),I(47,00,02,06),I(82,1c,48,00),I(03,1b,48,00),I(04,86,1b,48),I(00,05,23,00),B(string ,28),I(23,00,00,00),B(string ,97),I(3b,00,48,00),I(05,47,00,05),I(3d,00,06,45),I(06,00,00,00)};

  /* Byte-vector with size: 114 is_init: 1 index: 0 binding: initialize-string */
  static const void *G002968[] = {I(87,25,00,00),B(string ,1),I(24,00,00,00),B(fpi ,1),I(3e,0b,24,00),B(fpi ,0),I(3c,00,21,01),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(collect ,1),I(3e,0b,24,00),B(collect ,0),I(3c,00,21,01),I(24,00,00,00),B(copy ,1),I(3e,0b,24,00),B(copy ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(string ,99),I(23,00,00,00),B(string ,98),I(3b,03,25,00),B(string ,15),I(23,00,00,00),B(string ,100),I(23,00,00,00),B(string ,96),I(3b,02,25,00),B(string ,14),I(86,25,00,00),B(string ,13),I(23,00,00,00),B(string ,101),I(23,00,00,00),B(string ,94),I(3b,01,25,00),B(string ,12),I(23,00,00,00),B(string ,102),I(23,00,00,00),B(string ,93),I(3b,ff,25,00),B(string ,11),I(23,00,00,00),B(string ,103),I(23,00,00,00),B(string ,92),I(3b,02,25,00),B(string ,10),I(23,00,00,00),B(string ,104),I(23,00,00,00),B(string ,90),I(3b,02,25,00),B(string ,9),I(23,00,00,00),B(string ,105),I(23,00,00,00),B(string ,88),I(3b,02,25,00),B(string ,8),I(23,00,00,00),B(string ,106),I(23,00,00,00),B(string ,87),I(3b,01,25,00),B(string ,7),I(23,00,00,00),B(string ,107),I(23,00,00,00),B(string ,86),I(3b,03,25,00),B(string ,6),I(23,00,00,00),B(string ,108),I(23,00,00,00),B(string ,85),I(3b,fe,25,00),B(string ,5),I(23,00,00,00),B(string ,109),I(23,00,00,00),B(string ,83),I(3b,02,25,00),B(string ,4),I(23,00,00,00),B(string ,110),I(23,00,00,00),B(string ,81),I(3b,02,25,00),B(string ,3),I(86,25,00,00),B(string ,2),I(23,00,00,00),B(string ,111),I(23,00,00,00),B(string ,80),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G002852,G002851);
  eul_allocate_bytevector( G002854,G002853);
  eul_allocate_bytevector( G002856,G002855);
  eul_allocate_bytevector( G002858,G002857);
  eul_intern_symbol(sym_2861,"anonymous");
  eul_allocate_bytevector( G002860,G002859);
  eul_allocate_bytevector( G002863,G002862);
  eul_allocate_bytevector( G002865,G002864);
  eul_allocate_bytevector( G002867,G002866);
  eul_allocate_bytevector( G002869,G002868);
  eul_allocate_bytevector( G002871,G002870);
  eul_allocate_bytevector( G002873,G002872);
  eul_allocate_bytevector( G002875,G002874);
  eul_allocate_bytevector( G002877,G002876);
  eul_allocate_bytevector( G002879,G002878);
  eul_allocate_bytevector( G002881,G002880);
  eul_allocate_bytevector( G002883,G002882);
  eul_allocate_bytevector( G002885,G002884);
  eul_allocate_bytevector( G002887,G002886);
  eul_allocate_bytevector( G002889,G002888);
  eul_allocate_bytevector( G002891,G002890);
  eul_intern_keyword(key_2894,"size");
  eul_intern_keyword(key_2895,"fill-value");
  eul_allocate_bytevector( G002893,G002892);
  eul_allocate_bytevector( G002897,G002896);
  eul_intern_keyword(key_2900,"name");
  eul_intern_symbol(sym_2901,"character-sequence");
  eul_intern_keyword(key_2902,"direct-superclasses");
  eul_intern_keyword(key_2903,"direct-slots");
  eul_intern_keyword(key_2904,"direct-keywords");
  eul_intern_keyword(key_2905,"abstractp");
  eul_intern_symbol(sym_2906,"data");
  eul_intern_symbol(sym_2907,"string");
  eul_intern_symbol(sym_2908,"(setter string-data)");
  eul_intern_symbol(sym_2909,"(method initialize)");
  eul_intern_symbol(sym_2910,"(method emptyp)");
  eul_intern_symbol(sym_2911,"(method binary=)");
  eul_intern_symbol(sym_2912,"(method binary<)");
  eul_intern_symbol(sym_2913,"(method accumulate)");
  eul_intern_symbol(sym_2914,"(method accumulate1)");
  eul_intern_symbol(sym_2915,"(method any?)");
  eul_intern_symbol(sym_2916,"(method all?)");
  eul_intern_symbol(sym_2917,"(method do)");
  eul_intern_symbol(sym_2918,"(method map)");
  eul_intern_symbol(sym_2919,"(method member)");
  eul_intern_symbol(sym_2920,"(method element)");
  eul_intern_symbol(sym_2921,"(method size)");
  eul_intern_symbol(sym_2922,"(method reverse)");
  eul_intern_symbol(sym_2923,"(method reverse!)");
  eul_intern_symbol(sym_2924,"(method concatenate)");
  eul_intern_symbol(sym_2925,"(method slice)");
  eul_intern_symbol(sym_2926,"(method shallow-copy)");
  eul_intern_symbol(sym_2927,"(method deep-copy)");
  eul_intern_symbol(sym_2929,"converter");
  eul_intern_symbol(sym_2931,"<string>");
  object_class(cons_2930) = eul_static_cons_class;
  eul_car(cons_2930) = sym_2931;
  eul_cdr(cons_2930) = eul_nil;
  object_class(cons_2928) = eul_static_cons_class;
  eul_car(cons_2928) = sym_2929;
  eul_allocate_bytevector( G002899,G002898);
  eul_allocate_bytevector( G002933,G002932);
  eul_allocate_bytevector( G002935,G002934);
  eul_allocate_bytevector( G002937,G002936);
  eul_allocate_bytevector( G002939,G002938);
  eul_allocate_bytevector( G002941,G002940);
  eul_allocate_bytevector( G002943,G002942);
  eul_allocate_bytevector( G002945,G002944);
  eul_allocate_bytevector( G002947,G002946);
  eul_allocate_bytevector( G002949,G002948);
  eul_allocate_bytevector( G002951,G002950);
  eul_allocate_bytevector( G002953,G002952);
  eul_allocate_bytevector( G002955,G002954);
  eul_allocate_bytevector( G002957,G002956);
  eul_allocate_bytevector( G002959,G002958);
  eul_allocate_bytevector( G002961,G002960);
  eul_allocate_bytevector( G002963,G002962);
  eul_allocate_bytevector( G002965,G002964);
  eul_allocate_bytevector( G002967,G002966);
  eul_intern_symbol(sym_2970,"accumulate-string");
  eul_intern_symbol(sym_2971,"anyp1-string");
  eul_intern_symbol(sym_2972,"string-data");
  eul_intern_symbol(sym_2973,"string-append");
  eul_intern_symbol(sym_2974,"do1-string");
  eul_intern_symbol(sym_2975,"all?1-string");
  eul_intern_symbol(sym_2976,"string-equal");
  eul_intern_symbol(sym_2977,"string-empty?");
  eul_intern_symbol(sym_2978,"substring");
  eul_intern_symbol(sym_2979,"listify-string");
  eul_intern_symbol(sym_2980,"map1-string");
  eul_intern_symbol(sym_2981,"accumulate1-string");
  eul_intern_symbol(sym_2982,"top-level");
  eul_allocate_bytevector( G002969,G002968);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 16; i++)
      string_bindings[i] = eul_nil;
  }

  string_bindings[ 16] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_init_string2843;
  string_bindings[ 17] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_strcmp2844;
  string_bindings[ 18] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_reverse_str2845;
  string_bindings[ 19] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_reverse_des_str2846;
  string_bindings[ 20] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_append2847;
  string_bindings[ 21] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_list_as_eul_string2848;
  string_bindings[ 22] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_eul_str_copy2849;
  string_bindings[ 23] = (LispRef) (LispRef (*) (Stack *, LispRef *, LispRef *)) ff_stub_atoi2850;
  string_bindings[ 24] = G002852;
  string_bindings[ 25] = G002854;
  string_bindings[ 26] = G002856;
  string_bindings[ 27] = G002858;
  string_bindings[ 28] = sym_2861;
  string_bindings[ 29] = G002860;
  string_bindings[ 30] = G002863;
  string_bindings[ 31] = G002865;
  string_bindings[ 32] = G002867;
  string_bindings[ 33] = G002869;
  string_bindings[ 34] = G002871;
  string_bindings[ 35] = G002873;
  string_bindings[ 36] = G002875;
  string_bindings[ 37] = G002877;
  string_bindings[ 38] = G002879;
  string_bindings[ 39] = G002881;
  string_bindings[ 40] = G002883;
  string_bindings[ 41] = G002885;
  string_bindings[ 42] = G002887;
  string_bindings[ 43] = G002889;
  string_bindings[ 44] = G002891;
  string_bindings[ 45] = key_2894;
  string_bindings[ 46] = key_2895;
  string_bindings[ 47] = G002893;
  string_bindings[ 48] = G002897;
  string_bindings[ 49] = key_2900;
  string_bindings[ 50] = sym_2901;
  string_bindings[ 51] = key_2902;
  string_bindings[ 52] = key_2903;
  string_bindings[ 53] = key_2904;
  string_bindings[ 54] = key_2905;
  string_bindings[ 55] = sym_2906;
  string_bindings[ 56] = sym_2907;
  string_bindings[ 57] = sym_2908;
  string_bindings[ 58] = sym_2909;
  string_bindings[ 59] = sym_2910;
  string_bindings[ 60] = sym_2911;
  string_bindings[ 61] = sym_2912;
  string_bindings[ 62] = sym_2913;
  string_bindings[ 63] = sym_2914;
  string_bindings[ 64] = sym_2915;
  string_bindings[ 65] = sym_2916;
  string_bindings[ 66] = sym_2917;
  string_bindings[ 67] = sym_2918;
  string_bindings[ 68] = sym_2919;
  string_bindings[ 69] = sym_2920;
  string_bindings[ 70] = sym_2921;
  string_bindings[ 71] = sym_2922;
  string_bindings[ 72] = sym_2923;
  string_bindings[ 73] = sym_2924;
  string_bindings[ 74] = sym_2925;
  string_bindings[ 75] = sym_2926;
  string_bindings[ 76] = sym_2927;
  string_bindings[ 77] = sym_2929;
  string_bindings[ 78] = sym_2931;
  string_bindings[ 79] = cons_2928;
  string_bindings[ 80] = G002899;
  string_bindings[ 81] = G002933;
  string_bindings[ 82] = G002935;
  string_bindings[ 83] = G002937;
  string_bindings[ 84] = G002939;
  string_bindings[ 85] = G002941;
  string_bindings[ 86] = G002943;
  string_bindings[ 87] = G002945;
  string_bindings[ 88] = G002947;
  string_bindings[ 89] = G002949;
  string_bindings[ 90] = G002951;
  string_bindings[ 91] = G002953;
  string_bindings[ 92] = G002955;
  string_bindings[ 93] = G002957;
  string_bindings[ 94] = G002959;
  string_bindings[ 95] = G002961;
  string_bindings[ 96] = G002963;
  string_bindings[ 97] = G002965;
  string_bindings[ 98] = G002967;
  string_bindings[ 1] = eul_nil;
  string_bindings[ 99] = sym_2970;
  string_bindings[ 100] = sym_2971;
  string_bindings[ 101] = sym_2972;
  string_bindings[ 102] = sym_2973;
  string_bindings[ 103] = sym_2974;
  string_bindings[ 104] = sym_2975;
  string_bindings[ 105] = sym_2976;
  string_bindings[ 106] = sym_2977;
  string_bindings[ 107] = sym_2978;
  string_bindings[ 108] = sym_2979;
  string_bindings[ 109] = sym_2980;
  string_bindings[ 110] = sym_2981;
  string_bindings[ 111] = sym_2982;
  eul_allocate_lambda( string_bindings[0], "initialize-string", 0, G002969);

  }
}


/* eof */
