/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module op-peep-r
 **  Copyright: See file op-peep-r.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_op_peep();
extern LispRef i_all_bindings[];
extern LispRef op_peep_bindings[];
extern LispRef boot1_bindings[];

/* Module bindings with size 86 */
LispRef op_peep_r_bindings[86];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module op-peep-r */
void initialize_module_op_peep_r()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_op_peep();
  eul_fast_table_set(eul_modules,"op_peep_r",(LispRef) op_peep_r_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5959, G005958, sym_5932, sym_5927, sym_5922, sym_5920, sym_5913, sym_5910, sym_5897, sym_5894, sym_5890, sym_5883, sym_5874, sym_5850, sym_5842, sym_5838, sym_5836, sym_5833, sym_5830, G005827, G005825, G005823, sym_5821, G005820, G005818, G005816, G005814, G005812, sym_5810, G005809, G005807, sym_5805, G005804, sym_5802, G005801, sym_5799, G005798, sym_5796, G005795, G005793, G005791, sym_5789, G005788, sym_5786, G005785, sym_5783, G005782, G005780, G005778, G005776, sym_5774, G005773, sym_5771, G005770, sym_5768, G005767, sym_5765, G005764, sym_5762, G005761, sym_5759, G005758;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 3 binding: anonymous */
  static const void *G005757[] = {I(a9,23,00,00),B(op_peep_r ,2),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 5 binding: anonymous */
  static const void *G005760[] = {I(a9,23,00,00),B(op_peep_r ,4),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 7 binding: anonymous */
  static const void *G005763[] = {I(a9,23,00,00),B(op_peep_r ,6),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 9 binding: anonymous */
  static const void *G005766[] = {I(a9,23,00,00),B(op_peep_r ,8),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 11 binding: anonymous */
  static const void *G005769[] = {I(a9,23,00,00),B(op_peep_r ,10),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 13 binding: anonymous */
  static const void *G005772[] = {I(a9,23,00,00),B(op_peep_r ,12),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 14 binding: anonymous */
  static const void *G005775[] = {I(aa,24,00,00),B(boot1 ,25),I(3d,00,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 15 binding: anonymous */
  static const void *G005777[] = {I(ab,24,00,00),B(boot1 ,25),I(3d,00,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 16 binding: anonymous */
  static const void *G005779[] = {I(aa,24,00,00),B(boot1 ,25),I(3d,00,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 18 binding: anonymous */
  static const void *G005781[] = {I(aa,23,00,00),B(op_peep_r ,17),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 20 binding: anonymous */
  static const void *G005784[] = {I(aa,23,00,00),B(op_peep_r ,19),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 22 binding: anonymous */
  static const void *G005787[] = {I(aa,23,00,00),B(op_peep_r ,21),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 23 binding: anonymous */
  static const void *G005790[] = {I(ab,24,00,00),B(boot1 ,25),I(3d,00,02,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 24 binding: anonymous */
  static const void *G005792[] = {I(ab,50,45,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 26 binding: anonymous */
  static const void *G005794[] = {I(ab,23,00,00),B(op_peep_r ,25),I(1d,24,00,00),B(boot1 ,25),I(3c,02,24,00),B(boot1 ,25),I(3d,01,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 28 binding: anonymous */
  static const void *G005797[] = {I(aa,23,00,00),B(op_peep_r ,27),I(1c,24,00,00),B(boot1 ,25),I(3c,02,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 30 binding: anonymous */
  static const void *G005800[] = {I(aa,23,00,00),B(op_peep_r ,29),I(1c,24,00,00),B(boot1 ,25),I(3c,02,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 32 binding: anonymous */
  static const void *G005803[] = {I(ab,14,23,00),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,25),I(3c,02,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 33 binding: anonymous */
  static const void *G005806[] = {I(ab,14,26,00),I(00,00,01,00),I(1a,45,00,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 35 binding: anonymous */
  static const void *G005808[] = {I(ab,14,23,00),B(op_peep_r ,34),I(1c,24,00,00),B(boot1 ,25),I(3c,02,24,00),B(boot1 ,25),I(3d,01,01,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 36 binding: anonymous */
  static const void *G005811[] = {I(ab,14,26,00),I(00,00,01,00),I(1a,45,00,00)};

  /* Byte-vector with size: 72 is_init: 0 index: 37 binding: anonymous */
  static const void *G005813[] = {I(aa,23,00,00),B(op_peep_r ,31),I(26,00,00,00),I(00,00,00,ff),I(24,00,00,00),B(boot1 ,25),I(3c,02,1c,26),I(00,00,00,ff),I(15,26,00,00),I(00,00,00,ff),I(1c,1a,1b,34),I(00,00,00,15),I(26,00,00,00),I(00,00,00,ff),I(32,00,00,00),I(00,00,00,1f),I(1c,82,1a,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,08),I(82,22,01,23),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,25),I(3c,02,84,26),I(00,00,00,ff),I(16,1f,06,1c),I(15,26,00,00),I(00,00,00,ff),I(1c,1a,1b,34),I(00,00,00,15),I(26,00,00,00),I(00,00,00,ff),I(32,00,00,00),I(00,00,00,1f),I(1c,82,1a,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,08),I(82,22,01,23),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,25),I(3c,02,26,00),I(00,00,00,03),I(26,00,00,00),I(00,00,00,ff),I(16,1f,0b,1c),I(15,26,00,00),I(00,00,00,ff),I(1c,1a,1b,34),I(00,00,00,15),I(26,00,00,00),I(00,00,00,ff),I(32,00,00,00),I(00,00,00,1f),I(1c,82,1a,1b),I(34,00,00,00),I(00,00,00,10),I(1d,32,00,00),I(00,00,00,08),I(82,22,01,23),B(op_peep_r ,31),I(1c,24,00,00),B(boot1 ,25),I(3c,02,1f,0e),I(1f,0b,1f,07),I(1f,03,24,00),B(boot1 ,25),I(3d,04,10,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: anonymous */
  static const void *G005815[] = {I(aa,26,00,00),I(00,00,00,ff),I(1c,1a,45,01)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: anonymous */
  static const void *G005817[] = {I(aa,24,00,00),B(boot1 ,25),I(3d,00,01,00)};

  /* Byte-vector with size: 8 is_init: 0 index: 41 binding: anonymous */
  static const void *G005819[] = {I(43,03,23,00),B(op_peep_r ,40),I(1f,03,1f,03),I(24,00,00,00),B(boot1 ,25),I(3c,03,24,00),B(boot1 ,25),I(3d,01,03,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 42 binding: anonymous */
  static const void *G005822[] = {I(ab,23,00,00),B(op_peep_r ,40),I(1d,1d,24,00),B(boot1 ,25),I(3c,03,24,00),B(boot1 ,25),I(3d,01,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 43 binding: anonymous */
  static const void *G005824[] = {I(a9,24,00,00),B(boot1 ,25),I(3d,00,00,00)};

  eul_allocate_static_cons(cons_5829, NULL, NULL);
  eul_allocate_static_cons(cons_5832, NULL, NULL);
  eul_allocate_static_cons(cons_5831, eul_as_static(cons_5832), NULL);
  eul_allocate_static_cons(cons_5828, eul_as_static(cons_5829), eul_as_static(cons_5831));
  eul_allocate_static_cons(cons_5837, NULL, NULL);
  eul_allocate_static_cons(cons_5835, NULL, eul_as_static(cons_5837));
  eul_allocate_static_cons(cons_5841, NULL, NULL);
  eul_allocate_static_cons(cons_5840, NULL, eul_as_static(cons_5841));
  eul_allocate_static_cons(cons_5839, eul_as_static(cons_5840), NULL);
  eul_allocate_static_cons(cons_5834, eul_as_static(cons_5835), eul_as_static(cons_5839));
  eul_allocate_static_cons(cons_5846, NULL, NULL);
  eul_allocate_static_cons(cons_5845, NULL, eul_as_static(cons_5846));
  eul_allocate_static_cons(cons_5844, NULL, eul_as_static(cons_5845));
  eul_allocate_static_cons(cons_5849, NULL, NULL);
  eul_allocate_static_cons(cons_5848, NULL, eul_as_static(cons_5849));
  eul_allocate_static_cons(cons_5847, eul_as_static(cons_5848), NULL);
  eul_allocate_static_cons(cons_5843, eul_as_static(cons_5844), eul_as_static(cons_5847));
  eul_allocate_static_cons(cons_5853, c_int_as_eul_int(0), NULL);
  eul_allocate_static_cons(cons_5852, NULL, eul_as_static(cons_5853));
  eul_allocate_static_cons(cons_5851, eul_as_static(cons_5852), NULL);
  eul_allocate_static_cons(cons_5856, NULL, NULL);
  eul_allocate_static_cons(cons_5855, NULL, eul_as_static(cons_5856));
  eul_allocate_static_cons(cons_5854, eul_as_static(cons_5855), NULL);
  eul_allocate_static_cons(cons_5859, NULL, NULL);
  eul_allocate_static_cons(cons_5858, NULL, eul_as_static(cons_5859));
  eul_allocate_static_cons(cons_5862, NULL, NULL);
  eul_allocate_static_cons(cons_5861, NULL, eul_as_static(cons_5862));
  eul_allocate_static_cons(cons_5860, eul_as_static(cons_5861), NULL);
  eul_allocate_static_cons(cons_5857, eul_as_static(cons_5858), eul_as_static(cons_5860));
  eul_allocate_static_cons(cons_5865, NULL, NULL);
  eul_allocate_static_cons(cons_5864, NULL, eul_as_static(cons_5865));
  eul_allocate_static_cons(cons_5868, NULL, NULL);
  eul_allocate_static_cons(cons_5867, NULL, eul_as_static(cons_5868));
  eul_allocate_static_cons(cons_5866, eul_as_static(cons_5867), NULL);
  eul_allocate_static_cons(cons_5863, eul_as_static(cons_5864), eul_as_static(cons_5866));
  eul_allocate_static_cons(cons_5870, NULL, NULL);
  eul_allocate_static_cons(cons_5873, NULL, NULL);
  eul_allocate_static_cons(cons_5872, NULL, eul_as_static(cons_5873));
  eul_allocate_static_cons(cons_5871, eul_as_static(cons_5872), NULL);
  eul_allocate_static_cons(cons_5869, eul_as_static(cons_5870), eul_as_static(cons_5871));
  eul_allocate_static_cons(cons_5876, NULL, NULL);
  eul_allocate_static_cons(cons_5879, NULL, NULL);
  eul_allocate_static_cons(cons_5878, NULL, eul_as_static(cons_5879));
  eul_allocate_static_cons(cons_5877, eul_as_static(cons_5878), NULL);
  eul_allocate_static_cons(cons_5875, eul_as_static(cons_5876), eul_as_static(cons_5877));
  eul_allocate_static_cons(cons_5882, NULL, NULL);
  eul_allocate_static_cons(cons_5881, NULL, eul_as_static(cons_5882));
  eul_allocate_static_cons(cons_5886, NULL, NULL);
  eul_allocate_static_cons(cons_5885, NULL, eul_as_static(cons_5886));
  eul_allocate_static_cons(cons_5884, eul_as_static(cons_5885), NULL);
  eul_allocate_static_cons(cons_5880, eul_as_static(cons_5881), eul_as_static(cons_5884));
  eul_allocate_static_cons(cons_5889, NULL, NULL);
  eul_allocate_static_cons(cons_5888, NULL, eul_as_static(cons_5889));
  eul_allocate_static_cons(cons_5893, NULL, NULL);
  eul_allocate_static_cons(cons_5892, NULL, eul_as_static(cons_5893));
  eul_allocate_static_cons(cons_5891, eul_as_static(cons_5892), NULL);
  eul_allocate_static_cons(cons_5887, eul_as_static(cons_5888), eul_as_static(cons_5891));
  eul_allocate_static_cons(cons_5898, c_int_as_eul_int(0), NULL);
  eul_allocate_static_cons(cons_5896, NULL, eul_as_static(cons_5898));
  eul_allocate_static_cons(cons_5895, eul_as_static(cons_5896), NULL);
  eul_allocate_static_cons(cons_5901, c_int_as_eul_int(1), NULL);
  eul_allocate_static_cons(cons_5900, NULL, eul_as_static(cons_5901));
  eul_allocate_static_cons(cons_5899, eul_as_static(cons_5900), NULL);
  eul_allocate_static_cons(cons_5904, c_int_as_eul_int(2), NULL);
  eul_allocate_static_cons(cons_5903, NULL, eul_as_static(cons_5904));
  eul_allocate_static_cons(cons_5902, eul_as_static(cons_5903), NULL);
  eul_allocate_static_cons(cons_5907, NULL, NULL);
  eul_allocate_static_cons(cons_5906, NULL, eul_as_static(cons_5907));
  eul_allocate_static_cons(cons_5909, NULL, NULL);
  eul_allocate_static_cons(cons_5908, eul_as_static(cons_5909), NULL);
  eul_allocate_static_cons(cons_5905, eul_as_static(cons_5906), eul_as_static(cons_5908));
  eul_allocate_static_cons(cons_5915, NULL, NULL);
  eul_allocate_static_cons(cons_5914, NULL, eul_as_static(cons_5915));
  eul_allocate_static_cons(cons_5912, NULL, eul_as_static(cons_5914));
  eul_allocate_static_cons(cons_5917, NULL, NULL);
  eul_allocate_static_cons(cons_5916, eul_as_static(cons_5917), NULL);
  eul_allocate_static_cons(cons_5911, eul_as_static(cons_5912), eul_as_static(cons_5916));
  eul_allocate_static_cons(cons_5921, NULL, NULL);
  eul_allocate_static_cons(cons_5919, NULL, eul_as_static(cons_5921));
  eul_allocate_static_cons(cons_5924, NULL, NULL);
  eul_allocate_static_cons(cons_5923, eul_as_static(cons_5924), NULL);
  eul_allocate_static_cons(cons_5918, eul_as_static(cons_5919), eul_as_static(cons_5923));
  eul_allocate_static_cons(cons_5926, NULL, NULL);
  eul_allocate_static_cons(cons_5929, NULL, NULL);
  eul_allocate_static_cons(cons_5928, eul_as_static(cons_5929), NULL);
  eul_allocate_static_cons(cons_5925, eul_as_static(cons_5926), eul_as_static(cons_5928));
  eul_allocate_static_cons(cons_5931, NULL, NULL);
  eul_allocate_static_cons(cons_5934, NULL, NULL);
  eul_allocate_static_cons(cons_5933, eul_as_static(cons_5934), NULL);
  eul_allocate_static_cons(cons_5930, eul_as_static(cons_5931), eul_as_static(cons_5933));
  eul_allocate_static_cons(cons_5936, NULL, NULL);
  eul_allocate_static_cons(cons_5938, NULL, NULL);
  eul_allocate_static_cons(cons_5937, eul_as_static(cons_5938), NULL);
  eul_allocate_static_cons(cons_5935, eul_as_static(cons_5936), eul_as_static(cons_5937));
  eul_allocate_static_cons(cons_5940, NULL, NULL);
  eul_allocate_static_cons(cons_5942, NULL, NULL);
  eul_allocate_static_cons(cons_5941, eul_as_static(cons_5942), NULL);
  eul_allocate_static_cons(cons_5939, eul_as_static(cons_5940), eul_as_static(cons_5941));
  eul_allocate_static_cons(cons_5944, NULL, NULL);
  eul_allocate_static_cons(cons_5946, NULL, NULL);
  eul_allocate_static_cons(cons_5948, NULL, NULL);
  eul_allocate_static_cons(cons_5947, eul_as_static(cons_5948), NULL);
  eul_allocate_static_cons(cons_5945, eul_as_static(cons_5946), eul_as_static(cons_5947));
  eul_allocate_static_cons(cons_5943, eul_as_static(cons_5944), eul_as_static(cons_5945));
  eul_allocate_static_cons(cons_5950, NULL, NULL);
  eul_allocate_static_cons(cons_5952, NULL, NULL);
  eul_allocate_static_cons(cons_5954, NULL, NULL);
  eul_allocate_static_cons(cons_5956, NULL, NULL);
  eul_allocate_static_cons(cons_5955, eul_as_static(cons_5956), NULL);
  eul_allocate_static_cons(cons_5953, eul_as_static(cons_5954), eul_as_static(cons_5955));
  eul_allocate_static_cons(cons_5951, eul_as_static(cons_5952), eul_as_static(cons_5953));
  eul_allocate_static_cons(cons_5949, eul_as_static(cons_5950), eul_as_static(cons_5951));
  /* Byte-vector with size: 205 is_init: 0 index: 84 binding: top-level */
  static const void *G005826[] = {I(a9,23,00,00),B(op_peep_r ,45),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,43),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,50),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,42),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,52),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,41),I(3b,03,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,53),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,39),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,54),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,38),I(3b,01,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,37),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,55),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,36),I(3b,02,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,35),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,56),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,33),I(3b,02,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,32),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,58),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,30),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,59),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,28),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,61),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,26),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,64),I(23,00,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,24),I(3b,02,23,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,23),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,66),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,22),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,67),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,20),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,68),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,18),I(3b,01,83,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,70),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,16),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,72),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,15),I(3b,02,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,75),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,14),I(3b,01,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,77),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,13),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,79),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,11),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,80),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,9),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,81),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,7),I(3b,00,84,24),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,82),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,5),I(3b,00,26,00),I(00,00,00,03),I(24,00,00,00),B(op_peep ,5),I(3c,04,2a,23),B(op_peep_r ,83),I(86,23,00,00),B(op_peep_r ,46),I(23,00,00,00),B(op_peep_r ,3),I(3b,00,26,00),I(00,00,00,04),I(24,00,00,00),B(op_peep ,5),I(3d,04,00,00)};

  /* Byte-vector with size: 18 is_init: 1 index: 0 binding: initialize-op-peep-r */
  static const void *G005957[] = {I(87,25,00,00),B(op_peep_r ,1),I(24,00,00,00),B(op_peep ,1),I(3e,0b,24,00),B(op_peep ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(op_peep_r ,85),I(23,00,00,00),B(op_peep_r ,84),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_intern_symbol(sym_5759,"cadddr");
  eul_allocate_bytevector( G005758,G005757);
  eul_intern_symbol(sym_5762,"caddr");
  eul_allocate_bytevector( G005761,G005760);
  eul_intern_symbol(sym_5765,"cddr");
  eul_allocate_bytevector( G005764,G005763);
  eul_intern_symbol(sym_5768,"cdar");
  eul_allocate_bytevector( G005767,G005766);
  eul_intern_symbol(sym_5771,"cadr");
  eul_allocate_bytevector( G005770,G005769);
  eul_intern_symbol(sym_5774,"caar");
  eul_allocate_bytevector( G005773,G005772);
  eul_allocate_bytevector( G005776,G005775);
  eul_allocate_bytevector( G005778,G005777);
  eul_allocate_bytevector( G005780,G005779);
  eul_intern_symbol(sym_5783,"stack-ref2");
  eul_allocate_bytevector( G005782,G005781);
  eul_intern_symbol(sym_5786,"stack-ref1");
  eul_allocate_bytevector( G005785,G005784);
  eul_intern_symbol(sym_5789,"stack-ref0");
  eul_allocate_bytevector( G005788,G005787);
  eul_allocate_bytevector( G005791,G005790);
  eul_allocate_bytevector( G005793,G005792);
  eul_intern_symbol(sym_5796,"branch");
  eul_allocate_bytevector( G005795,G005794);
  eul_intern_symbol(sym_5799,"branch-nil");
  eul_allocate_bytevector( G005798,G005797);
  eul_intern_symbol(sym_5802,"branch-true");
  eul_allocate_bytevector( G005801,G005800);
  eul_intern_symbol(sym_5805,"nobble");
  eul_allocate_bytevector( G005804,G005803);
  eul_allocate_bytevector( G005807,G005806);
  eul_intern_symbol(sym_5810,"return");
  eul_allocate_bytevector( G005809,G005808);
  eul_allocate_bytevector( G005812,G005811);
  eul_allocate_bytevector( G005814,G005813);
  eul_allocate_bytevector( G005816,G005815);
  eul_allocate_bytevector( G005818,G005817);
  eul_intern_symbol(sym_5821,"tail-call-operator");
  eul_allocate_bytevector( G005820,G005819);
  eul_allocate_bytevector( G005823,G005822);
  eul_allocate_bytevector( G005825,G005824);
  eul_intern_symbol(sym_5830,"null");
  object_class(cons_5829) = eul_static_cons_class;
  eul_car(cons_5829) = sym_5830;
  eul_cdr(cons_5829) = eul_nil;
  object_class(cons_5832) = eul_static_cons_class;
  eul_car(cons_5832) = sym_5830;
  eul_cdr(cons_5832) = eul_nil;
  object_class(cons_5831) = eul_static_cons_class;
  eul_cdr(cons_5831) = eul_nil;
  object_class(cons_5828) = eul_static_cons_class;
  eul_intern_symbol(sym_5833,"anonymous");
  eul_intern_symbol(sym_5836,"call-operator");
  eul_intern_symbol(sym_5838,"nargs");
  object_class(cons_5837) = eul_static_cons_class;
  eul_car(cons_5837) = sym_5838;
  eul_cdr(cons_5837) = eul_nil;
  object_class(cons_5835) = eul_static_cons_class;
  eul_car(cons_5835) = sym_5836;
  eul_intern_symbol(sym_5842,"n");
  object_class(cons_5841) = eul_static_cons_class;
  eul_car(cons_5841) = sym_5842;
  eul_cdr(cons_5841) = eul_nil;
  object_class(cons_5840) = eul_static_cons_class;
  eul_car(cons_5840) = sym_5810;
  object_class(cons_5839) = eul_static_cons_class;
  eul_cdr(cons_5839) = eul_nil;
  object_class(cons_5834) = eul_static_cons_class;
  object_class(cons_5846) = eul_static_cons_class;
  eul_car(cons_5846) = sym_5842;
  eul_cdr(cons_5846) = eul_nil;
  object_class(cons_5845) = eul_static_cons_class;
  eul_car(cons_5845) = sym_5838;
  object_class(cons_5844) = eul_static_cons_class;
  eul_car(cons_5844) = sym_5821;
  eul_intern_symbol(sym_5850,"m");
  object_class(cons_5849) = eul_static_cons_class;
  eul_car(cons_5849) = sym_5850;
  eul_cdr(cons_5849) = eul_nil;
  object_class(cons_5848) = eul_static_cons_class;
  eul_car(cons_5848) = sym_5810;
  object_class(cons_5847) = eul_static_cons_class;
  eul_cdr(cons_5847) = eul_nil;
  object_class(cons_5843) = eul_static_cons_class;
  object_class(cons_5853) = eul_static_cons_class;
  eul_cdr(cons_5853) = eul_nil;
  object_class(cons_5852) = eul_static_cons_class;
  eul_car(cons_5852) = sym_5805;
  object_class(cons_5851) = eul_static_cons_class;
  eul_cdr(cons_5851) = eul_nil;
  object_class(cons_5856) = eul_static_cons_class;
  eul_car(cons_5856) = sym_5842;
  eul_cdr(cons_5856) = eul_nil;
  object_class(cons_5855) = eul_static_cons_class;
  eul_car(cons_5855) = sym_5805;
  object_class(cons_5854) = eul_static_cons_class;
  eul_cdr(cons_5854) = eul_nil;
  object_class(cons_5859) = eul_static_cons_class;
  eul_car(cons_5859) = sym_5842;
  eul_cdr(cons_5859) = eul_nil;
  object_class(cons_5858) = eul_static_cons_class;
  eul_car(cons_5858) = sym_5805;
  object_class(cons_5862) = eul_static_cons_class;
  eul_car(cons_5862) = sym_5850;
  eul_cdr(cons_5862) = eul_nil;
  object_class(cons_5861) = eul_static_cons_class;
  eul_car(cons_5861) = sym_5810;
  object_class(cons_5860) = eul_static_cons_class;
  eul_cdr(cons_5860) = eul_nil;
  object_class(cons_5857) = eul_static_cons_class;
  object_class(cons_5865) = eul_static_cons_class;
  eul_car(cons_5865) = sym_5842;
  eul_cdr(cons_5865) = eul_nil;
  object_class(cons_5864) = eul_static_cons_class;
  eul_car(cons_5864) = sym_5805;
  object_class(cons_5868) = eul_static_cons_class;
  eul_car(cons_5868) = sym_5850;
  eul_cdr(cons_5868) = eul_nil;
  object_class(cons_5867) = eul_static_cons_class;
  eul_car(cons_5867) = sym_5805;
  object_class(cons_5866) = eul_static_cons_class;
  eul_cdr(cons_5866) = eul_nil;
  object_class(cons_5863) = eul_static_cons_class;
  object_class(cons_5870) = eul_static_cons_class;
  eul_car(cons_5870) = sym_5830;
  eul_cdr(cons_5870) = eul_nil;
  eul_intern_symbol(sym_5874,"label");
  object_class(cons_5873) = eul_static_cons_class;
  eul_car(cons_5873) = sym_5874;
  eul_cdr(cons_5873) = eul_nil;
  object_class(cons_5872) = eul_static_cons_class;
  eul_car(cons_5872) = sym_5799;
  object_class(cons_5871) = eul_static_cons_class;
  eul_cdr(cons_5871) = eul_nil;
  object_class(cons_5869) = eul_static_cons_class;
  object_class(cons_5876) = eul_static_cons_class;
  eul_car(cons_5876) = sym_5830;
  eul_cdr(cons_5876) = eul_nil;
  object_class(cons_5879) = eul_static_cons_class;
  eul_car(cons_5879) = sym_5874;
  eul_cdr(cons_5879) = eul_nil;
  object_class(cons_5878) = eul_static_cons_class;
  eul_car(cons_5878) = sym_5802;
  object_class(cons_5877) = eul_static_cons_class;
  eul_cdr(cons_5877) = eul_nil;
  object_class(cons_5875) = eul_static_cons_class;
  eul_intern_symbol(sym_5883,"lab");
  object_class(cons_5882) = eul_static_cons_class;
  eul_car(cons_5882) = sym_5883;
  eul_cdr(cons_5882) = eul_nil;
  object_class(cons_5881) = eul_static_cons_class;
  eul_car(cons_5881) = sym_5796;
  object_class(cons_5886) = eul_static_cons_class;
  eul_car(cons_5886) = sym_5842;
  eul_cdr(cons_5886) = eul_nil;
  object_class(cons_5885) = eul_static_cons_class;
  eul_car(cons_5885) = sym_5810;
  object_class(cons_5884) = eul_static_cons_class;
  eul_cdr(cons_5884) = eul_nil;
  object_class(cons_5880) = eul_static_cons_class;
  eul_intern_symbol(sym_5890,"lab1");
  object_class(cons_5889) = eul_static_cons_class;
  eul_car(cons_5889) = sym_5890;
  eul_cdr(cons_5889) = eul_nil;
  object_class(cons_5888) = eul_static_cons_class;
  eul_car(cons_5888) = sym_5796;
  eul_intern_symbol(sym_5894,"lab2");
  object_class(cons_5893) = eul_static_cons_class;
  eul_car(cons_5893) = sym_5894;
  eul_cdr(cons_5893) = eul_nil;
  object_class(cons_5892) = eul_static_cons_class;
  eul_car(cons_5892) = sym_5874;
  object_class(cons_5891) = eul_static_cons_class;
  eul_cdr(cons_5891) = eul_nil;
  object_class(cons_5887) = eul_static_cons_class;
  eul_intern_symbol(sym_5897,"stack-ref");
  object_class(cons_5898) = eul_static_cons_class;
  eul_cdr(cons_5898) = eul_nil;
  object_class(cons_5896) = eul_static_cons_class;
  eul_car(cons_5896) = sym_5897;
  object_class(cons_5895) = eul_static_cons_class;
  eul_cdr(cons_5895) = eul_nil;
  object_class(cons_5901) = eul_static_cons_class;
  eul_cdr(cons_5901) = eul_nil;
  object_class(cons_5900) = eul_static_cons_class;
  eul_car(cons_5900) = sym_5897;
  object_class(cons_5899) = eul_static_cons_class;
  eul_cdr(cons_5899) = eul_nil;
  object_class(cons_5904) = eul_static_cons_class;
  eul_cdr(cons_5904) = eul_nil;
  object_class(cons_5903) = eul_static_cons_class;
  eul_car(cons_5903) = sym_5897;
  object_class(cons_5902) = eul_static_cons_class;
  eul_cdr(cons_5902) = eul_nil;
  object_class(cons_5907) = eul_static_cons_class;
  eul_car(cons_5907) = sym_5842;
  eul_cdr(cons_5907) = eul_nil;
  object_class(cons_5906) = eul_static_cons_class;
  eul_car(cons_5906) = sym_5897;
  eul_intern_symbol(sym_5910,"pop1");
  object_class(cons_5909) = eul_static_cons_class;
  eul_car(cons_5909) = sym_5910;
  eul_cdr(cons_5909) = eul_nil;
  object_class(cons_5908) = eul_static_cons_class;
  eul_cdr(cons_5908) = eul_nil;
  object_class(cons_5905) = eul_static_cons_class;
  eul_intern_symbol(sym_5913,"display-ref");
  object_class(cons_5915) = eul_static_cons_class;
  eul_car(cons_5915) = sym_5850;
  eul_cdr(cons_5915) = eul_nil;
  object_class(cons_5914) = eul_static_cons_class;
  eul_car(cons_5914) = sym_5842;
  object_class(cons_5912) = eul_static_cons_class;
  eul_car(cons_5912) = sym_5913;
  object_class(cons_5917) = eul_static_cons_class;
  eul_car(cons_5917) = sym_5910;
  eul_cdr(cons_5917) = eul_nil;
  object_class(cons_5916) = eul_static_cons_class;
  eul_cdr(cons_5916) = eul_nil;
  object_class(cons_5911) = eul_static_cons_class;
  eul_intern_symbol(sym_5920,"register-ref");
  eul_intern_symbol(sym_5922,"*");
  object_class(cons_5921) = eul_static_cons_class;
  eul_car(cons_5921) = sym_5922;
  eul_cdr(cons_5921) = eul_nil;
  object_class(cons_5919) = eul_static_cons_class;
  eul_car(cons_5919) = sym_5920;
  object_class(cons_5924) = eul_static_cons_class;
  eul_car(cons_5924) = sym_5910;
  eul_cdr(cons_5924) = eul_nil;
  object_class(cons_5923) = eul_static_cons_class;
  eul_cdr(cons_5923) = eul_nil;
  object_class(cons_5918) = eul_static_cons_class;
  eul_intern_symbol(sym_5927,"car");
  object_class(cons_5926) = eul_static_cons_class;
  eul_car(cons_5926) = sym_5927;
  eul_cdr(cons_5926) = eul_nil;
  object_class(cons_5929) = eul_static_cons_class;
  eul_car(cons_5929) = sym_5927;
  eul_cdr(cons_5929) = eul_nil;
  object_class(cons_5928) = eul_static_cons_class;
  eul_cdr(cons_5928) = eul_nil;
  object_class(cons_5925) = eul_static_cons_class;
  eul_intern_symbol(sym_5932,"cdr");
  object_class(cons_5931) = eul_static_cons_class;
  eul_car(cons_5931) = sym_5932;
  eul_cdr(cons_5931) = eul_nil;
  object_class(cons_5934) = eul_static_cons_class;
  eul_car(cons_5934) = sym_5927;
  eul_cdr(cons_5934) = eul_nil;
  object_class(cons_5933) = eul_static_cons_class;
  eul_cdr(cons_5933) = eul_nil;
  object_class(cons_5930) = eul_static_cons_class;
  object_class(cons_5936) = eul_static_cons_class;
  eul_car(cons_5936) = sym_5927;
  eul_cdr(cons_5936) = eul_nil;
  object_class(cons_5938) = eul_static_cons_class;
  eul_car(cons_5938) = sym_5932;
  eul_cdr(cons_5938) = eul_nil;
  object_class(cons_5937) = eul_static_cons_class;
  eul_cdr(cons_5937) = eul_nil;
  object_class(cons_5935) = eul_static_cons_class;
  object_class(cons_5940) = eul_static_cons_class;
  eul_car(cons_5940) = sym_5932;
  eul_cdr(cons_5940) = eul_nil;
  object_class(cons_5942) = eul_static_cons_class;
  eul_car(cons_5942) = sym_5932;
  eul_cdr(cons_5942) = eul_nil;
  object_class(cons_5941) = eul_static_cons_class;
  eul_cdr(cons_5941) = eul_nil;
  object_class(cons_5939) = eul_static_cons_class;
  object_class(cons_5944) = eul_static_cons_class;
  eul_car(cons_5944) = sym_5932;
  eul_cdr(cons_5944) = eul_nil;
  object_class(cons_5946) = eul_static_cons_class;
  eul_car(cons_5946) = sym_5932;
  eul_cdr(cons_5946) = eul_nil;
  object_class(cons_5948) = eul_static_cons_class;
  eul_car(cons_5948) = sym_5927;
  eul_cdr(cons_5948) = eul_nil;
  object_class(cons_5947) = eul_static_cons_class;
  eul_cdr(cons_5947) = eul_nil;
  object_class(cons_5945) = eul_static_cons_class;
  object_class(cons_5943) = eul_static_cons_class;
  object_class(cons_5950) = eul_static_cons_class;
  eul_car(cons_5950) = sym_5932;
  eul_cdr(cons_5950) = eul_nil;
  object_class(cons_5952) = eul_static_cons_class;
  eul_car(cons_5952) = sym_5932;
  eul_cdr(cons_5952) = eul_nil;
  object_class(cons_5954) = eul_static_cons_class;
  eul_car(cons_5954) = sym_5932;
  eul_cdr(cons_5954) = eul_nil;
  object_class(cons_5956) = eul_static_cons_class;
  eul_car(cons_5956) = sym_5927;
  eul_cdr(cons_5956) = eul_nil;
  object_class(cons_5955) = eul_static_cons_class;
  eul_cdr(cons_5955) = eul_nil;
  object_class(cons_5953) = eul_static_cons_class;
  object_class(cons_5951) = eul_static_cons_class;
  object_class(cons_5949) = eul_static_cons_class;
  eul_allocate_bytevector( G005827,G005826);
  eul_intern_symbol(sym_5959,"top-level");
  eul_allocate_bytevector( G005958,G005957);

  /* Set local bindings */
  op_peep_r_bindings[ 2] = sym_5759;
  op_peep_r_bindings[ 3] = G005758;
  op_peep_r_bindings[ 4] = sym_5762;
  op_peep_r_bindings[ 5] = G005761;
  op_peep_r_bindings[ 6] = sym_5765;
  op_peep_r_bindings[ 7] = G005764;
  op_peep_r_bindings[ 8] = sym_5768;
  op_peep_r_bindings[ 9] = G005767;
  op_peep_r_bindings[ 10] = sym_5771;
  op_peep_r_bindings[ 11] = G005770;
  op_peep_r_bindings[ 12] = sym_5774;
  op_peep_r_bindings[ 13] = G005773;
  op_peep_r_bindings[ 14] = G005776;
  op_peep_r_bindings[ 15] = G005778;
  op_peep_r_bindings[ 16] = G005780;
  op_peep_r_bindings[ 17] = sym_5783;
  op_peep_r_bindings[ 18] = G005782;
  op_peep_r_bindings[ 19] = sym_5786;
  op_peep_r_bindings[ 20] = G005785;
  op_peep_r_bindings[ 21] = sym_5789;
  op_peep_r_bindings[ 22] = G005788;
  op_peep_r_bindings[ 23] = G005791;
  op_peep_r_bindings[ 24] = G005793;
  op_peep_r_bindings[ 25] = sym_5796;
  op_peep_r_bindings[ 26] = G005795;
  op_peep_r_bindings[ 27] = sym_5799;
  op_peep_r_bindings[ 28] = G005798;
  op_peep_r_bindings[ 29] = sym_5802;
  op_peep_r_bindings[ 30] = G005801;
  op_peep_r_bindings[ 31] = sym_5805;
  op_peep_r_bindings[ 32] = G005804;
  op_peep_r_bindings[ 33] = G005807;
  op_peep_r_bindings[ 34] = sym_5810;
  op_peep_r_bindings[ 35] = G005809;
  op_peep_r_bindings[ 36] = G005812;
  op_peep_r_bindings[ 37] = G005814;
  op_peep_r_bindings[ 38] = G005816;
  op_peep_r_bindings[ 39] = G005818;
  op_peep_r_bindings[ 40] = sym_5821;
  op_peep_r_bindings[ 41] = G005820;
  op_peep_r_bindings[ 42] = G005823;
  op_peep_r_bindings[ 43] = G005825;
  op_peep_r_bindings[ 44] = sym_5830;
  op_peep_r_bindings[ 45] = cons_5828;
  op_peep_r_bindings[ 46] = sym_5833;
  op_peep_r_bindings[ 47] = sym_5836;
  op_peep_r_bindings[ 48] = sym_5838;
  op_peep_r_bindings[ 49] = sym_5842;
  op_peep_r_bindings[ 50] = cons_5834;
  op_peep_r_bindings[ 51] = sym_5850;
  op_peep_r_bindings[ 52] = cons_5843;
  op_peep_r_bindings[ 53] = cons_5851;
  op_peep_r_bindings[ 54] = cons_5854;
  op_peep_r_bindings[ 55] = cons_5857;
  op_peep_r_bindings[ 56] = cons_5863;
  op_peep_r_bindings[ 57] = sym_5874;
  op_peep_r_bindings[ 58] = cons_5869;
  op_peep_r_bindings[ 59] = cons_5875;
  op_peep_r_bindings[ 60] = sym_5883;
  op_peep_r_bindings[ 61] = cons_5880;
  op_peep_r_bindings[ 62] = sym_5890;
  op_peep_r_bindings[ 63] = sym_5894;
  op_peep_r_bindings[ 64] = cons_5887;
  op_peep_r_bindings[ 65] = sym_5897;
  op_peep_r_bindings[ 66] = cons_5895;
  op_peep_r_bindings[ 67] = cons_5899;
  op_peep_r_bindings[ 68] = cons_5902;
  op_peep_r_bindings[ 69] = sym_5910;
  op_peep_r_bindings[ 70] = cons_5905;
  op_peep_r_bindings[ 71] = sym_5913;
  op_peep_r_bindings[ 72] = cons_5911;
  op_peep_r_bindings[ 73] = sym_5920;
  op_peep_r_bindings[ 74] = sym_5922;
  op_peep_r_bindings[ 75] = cons_5918;
  op_peep_r_bindings[ 76] = sym_5927;
  op_peep_r_bindings[ 77] = cons_5925;
  op_peep_r_bindings[ 78] = sym_5932;
  op_peep_r_bindings[ 79] = cons_5930;
  op_peep_r_bindings[ 80] = cons_5935;
  op_peep_r_bindings[ 81] = cons_5939;
  op_peep_r_bindings[ 82] = cons_5943;
  op_peep_r_bindings[ 83] = cons_5949;
  op_peep_r_bindings[ 84] = G005827;
  op_peep_r_bindings[ 1] = eul_nil;
  op_peep_r_bindings[ 85] = sym_5959;
  eul_allocate_lambda( op_peep_r_bindings[0], "initialize-op-peep-r", 0, G005958);

  }
}


/* eof */
