/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module collect
 **  Copyright: See file collect.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_compare();
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef compare_bindings[];
extern LispRef boot_bindings[];

/* Module bindings with size 92 */
LispRef collect_bindings[92];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module collect */
void initialize_module_collect()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_compare();
  eul_fast_table_set(eul_modules,"collect",(LispRef) collect_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_1620, G001619, sym_1616, sym_1614, sym_1613, sym_1612, sym_1611, sym_1610, sym_1609, sym_1608, sym_1607, sym_1606, sym_1605, sym_1604, sym_1603, sym_1602, sym_1601, sym_1600, sym_1599, sym_1598, sym_1597, sym_1596, sym_1595, sym_1594, sym_1593, sym_1592, sym_1591, sym_1590, sym_1589, sym_1588, sym_1587, sym_1586, sym_1585, sym_1584, key_1583, key_1581, sym_1579, key_1578, key_1577, key_1576, key_1575, sym_1574, key_1573, G001572, G001570, G001568, G001566, G001564, G001562, G001560, G001558, G001556, G001554, G001552, G001550, G001548, G001546, G001544, sym_1542, G001541, G001539, G001536, G001534;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 27 binding: (method-find) */
  static const void *G001533[] = {I(43,fd,24,00),B(collect ,11),I(1f,03,1f,03),I(1f,03,24,00),B(boot ,5),I(3d,04,03,00)};

  eul_allocate_static_string(str_1537, "fill not yet implemented", 24);
  /* Byte-vector with size: 5 is_init: 0 index: 29 binding: (method-fill) */
  static const void *G001535[] = {I(43,fd,86,23),B(collect ,28),I(24,00,00,00),B(boot ,12),I(3d,02,03,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 30 binding: anonymous */
  static const void *G001538[] = {I(aa,1b,47,00),I(00,24,00,00),B(collect ,20),I(3d,02,01,00)};

  /* Byte-vector with size: 24 is_init: 0 index: 32 binding: anonymous */
  static const void *G001540[] = {I(aa,46,01,1b),I(48,00,00,47),I(00,00,47,01),I(03,1a,1b,34),I(00,00,00,4d),I(23,00,00,00),B(collect ,31),I(23,00,00,00),B(collect ,30),I(3b,01,47,01),I(02,24,00,00),B(collect ,2),I(3c,02,47,01),I(00,1c,24,00),B(boot ,5),I(3c,02,1b,34),I(00,00,00,15),I(47,00,00,2b),I(47,01,01,3d),I(01,04,32,00),I(00,00,00,07),I(86,22,02,32),I(00,00,00,06),I(87,45,02,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 33 binding: (method-all?) */
  static const void *G001543[] = {I(43,fd,46,05),I(1d,48,00,00),I(0f,1b,48,00),I(02,24,00,00),B(collect ,9),I(47,00,02,24),B(collect ,2),I(3c,02,24,00),B(compare ,10),I(1c,24,00,00),B(boot ,5),I(3c,02,1b,48),I(00,03,86,1b),I(48,00,01,23),B(collect ,31),I(23,00,00,00),B(collect ,32),I(3b,01,48,00),I(01,82,47,00),I(01,3d,01,05),I(45,05,00,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 34 binding: anonymous */
  static const void *G001545[] = {I(aa,1b,47,00),I(00,24,00,00),B(collect ,20),I(3d,02,01,00)};

  /* Byte-vector with size: 25 is_init: 0 index: 35 binding: anonymous */
  static const void *G001547[] = {I(aa,46,01,1b),I(48,00,00,47),I(00,00,47,01),I(03,1a,1b,34),I(00,00,00,51),I(23,00,00,00),B(collect ,31),I(23,00,00,00),B(collect ,34),I(3b,01,47,01),I(02,24,00,00),B(collect ,2),I(3c,02,47,01),I(00,1c,24,00),B(boot ,5),I(3c,02,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,11),I(47,00,00,2b),I(47,01,01,3d),I(01,04,22,02),I(32,00,00,00),I(00,00,00,09),I(86,45,02,00)};

  /* Byte-vector with size: 21 is_init: 0 index: 36 binding: (method-any?) */
  static const void *G001549[] = {I(43,fd,46,05),I(1d,48,00,00),I(0f,1b,48,00),I(02,24,00,00),B(collect ,9),I(47,00,02,24),B(collect ,2),I(3c,02,24,00),B(compare ,10),I(1c,24,00,00),B(boot ,5),I(3c,02,1b,48),I(00,03,86,1b),I(48,00,01,23),B(collect ,31),I(23,00,00,00),B(collect ,35),I(3b,01,48,00),I(01,82,47,00),I(01,3d,01,05),I(45,05,00,00)};

  /* Byte-vector with size: 31 is_init: 0 index: 37 binding: (method-binary=) */
  static const void *G001551[] = {I(ab,1c,04,1c),I(04,50,1b,34),I(00,00,00,71),I(1d,7b,1b,34),I(00,00,00,21),I(24,00,00,00),B(compare ,9),I(1f,04,1f,04),I(24,00,00,00),B(collect ,16),I(3d,03,04,32),I(00,00,00,44),I(1f,03,24,00),B(collect ,9),I(3c,01,1f,03),I(24,00,00,00),B(collect ,9),I(3c,01,19,1b),I(34,00,00,00),I(00,00,00,24),I(24,00,00,00),B(compare ,9),I(1f,05,1f,05),I(24,00,00,00),B(collect ,16),I(3d,03,05,32),I(00,00,00,06),I(86,22,01,22),I(01,32,00,00),I(00,00,00,08),I(86,45,03,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 38 binding: (method-sequence?) */
  static const void *G001553[] = {I(aa,87,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 39 binding: (method-sequence?) */
  static const void *G001555[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 40 binding: (method-collectionp) */
  static const void *G001557[] = {I(aa,87,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 41 binding: (method-collectionp) */
  static const void *G001559[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 2 is_init: 0 index: 42 binding: (method-name) */
  static const void *G001561[] = {I(aa,84,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 43 binding: (method-name) */
  static const void *G001563[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 44 binding: (method-name) */
  static const void *G001565[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 45 binding: (method-name) */
  static const void *G001567[] = {I(aa,82,02,45),I(00,00,00,00)};

  /* Byte-vector with size: 2 is_init: 0 index: 46 binding: (method-name) */
  static const void *G001569[] = {I(aa,82,02,45),I(00,00,00,00)};

  eul_allocate_static_cons(cons_1582, NULL, NULL);
  eul_allocate_static_cons(cons_1580, NULL, eul_as_static(cons_1582));
  eul_allocate_static_cons(cons_1617, NULL, NULL);
  eul_allocate_static_cons(cons_1615, NULL, eul_as_static(cons_1617));
  /* Byte-vector with size: 1006 is_init: 0 index: 90 binding: top-level */
  static const void *G001571[] = {I(a9,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,71),I(23,00,00,00),B(collect ,47),I(23,00,00,00),B(collect ,48),I(23,00,00,00),B(collect ,49),I(1f,05,23,00),B(collect ,50),I(1f,06,23,00),B(collect ,51),I(86,23,00,00),B(collect ,52),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(collect ,22),I(2a,24,00,00),B(collect ,22),I(24,00,00,00),B(boot1 ,25),I(3c,01,24,00),B(boot1 ,25),I(3c,00,24,00),B(mop_class ,71),I(23,00,00,00),B(collect ,47),I(23,00,00,00),B(collect ,53),I(23,00,00,00),B(collect ,49),I(1f,05,23,00),B(collect ,50),I(1f,06,23,00),B(collect ,51),I(23,00,00,00),B(collect ,56),I(23,00,00,00),B(collect ,52),I(87,24,00,00),B(mop_gf ,2),I(3c,0b,1b,89),B(collect ,7),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,57),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,8),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,58),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,21),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,59),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,10),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,60),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,3),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,61),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,23),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,62),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,12),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,63),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,24),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,64),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,16),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,65),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,6),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,66),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,19),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,67),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,14),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,68),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,2),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,69),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,11),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,70),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,5),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,71),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,20),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,72),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,26),I(2a,84,24,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,73),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,13),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,74),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,18),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,75),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,9),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,76),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,25),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,77),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,15),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,78),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,17),I(2a,26,00,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,79),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(collect ,4),I(2a,24,00,00),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,5),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,80),I(23,00,00,00),B(collect ,46),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,82),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,80),I(23,00,00,00),B(collect ,45),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,27),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,80),I(23,00,00,00),B(collect ,44),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,76),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,80),I(23,00,00,00),B(collect ,43),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,49),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,8),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,80),I(23,00,00,00),B(collect ,42),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,8),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,8),I(2a,24,00,00),B(collect ,22),I(2a,24,00,00),B(collect ,7),I(2a,24,00,00),B(collect ,21),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,21),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,41),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,21),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,21),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(collect ,22),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,21),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,81),I(23,00,00,00),B(collect ,40),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,21),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,21),I(2a,24,00,00),B(collect ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,82),I(23,00,00,00),B(collect ,39),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(collect ,7),I(24,00,00,00),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,82),I(23,00,00,00),B(collect ,38),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,10),I(2a,24,00,00),B(collect ,3),I(2a,24,00,00),B(compare ,9),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(collect ,22),I(24,00,00,00),B(collect ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(compare ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,83),I(23,00,00,00),B(collect ,37),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(compare ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,23),I(2a,24,00,00),B(collect ,12),I(2a,24,00,00),B(collect ,24),I(2a,24,00,00),B(collect ,16),I(2a,24,00,00),B(collect ,6),I(2a,24,00,00),B(collect ,19),I(2a,24,00,00),B(collect ,14),I(2a,24,00,00),B(collect ,2),I(2a,24,00,00),B(collect ,11),I(2a,24,00,00),B(collect ,5),I(2a,24,00,00),B(collect ,24),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(collect ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,24),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,84),I(23,00,00,00),B(collect ,36),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,24),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,16),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(mop_class ,27),I(24,00,00,00),B(collect ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,16),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,85),I(23,00,00,00),B(collect ,33),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,16),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,19),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(collect ,22),I(86,24,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,19),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,86),I(23,00,00,00),B(collect ,29),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,19),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,14),I(26,00,00,00),I(00,00,00,03),I(02,84,86,24),B(collect ,22),I(24,00,00,00),B(boot1 ,39),I(3c,03,24,00),B(boot1 ,25),I(3c,00,24,00),B(collect ,14),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(collect ,87),I(23,00,00,00),B(collect ,27),I(3b,fd,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(collect ,14),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(collect ,20),I(2a,24,00,00),B(boot1 ,41),I(24,00,00,00),B(boot1 ,41),I(3c,01,26,00),I(00,00,00,03),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,39),I(3c,04,24,00),B(boot1 ,25),I(3c,00,24,00),B(boot1 ,25),I(3c,00,23,00),B(collect ,89),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,24,00),B(collect ,20),I(1c,1f,06,3c),I(02,2a,24,00),B(collect ,20),I(24,00,00,00),B(boot1 ,41),I(3c,01,2a,24),B(collect ,26),I(2a,24,00,00),B(collect ,13),I(2a,24,00,00),B(collect ,18),I(2a,24,00,00),B(collect ,9),I(2a,24,00,00),B(collect ,25),I(2a,24,00,00),B(collect ,15),I(2a,24,00,00),B(collect ,17),I(2a,24,00,00),B(collect ,4),I(45,bb,00,00)};

  /* Byte-vector with size: 68 is_init: 1 index: 0 binding: initialize-collect */
  static const void *G001618[] = {I(87,25,00,00),B(collect ,1),I(24,00,00,00),B(compare ,1),I(3e,0b,24,00),B(compare ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(86,25,00,00),B(collect ,26),I(86,25,00,00),B(collect ,25),I(86,25,00,00),B(collect ,24),I(86,25,00,00),B(collect ,23),I(86,25,00,00),B(collect ,22),I(86,25,00,00),B(collect ,21),I(86,25,00,00),B(collect ,20),I(86,25,00,00),B(collect ,19),I(86,25,00,00),B(collect ,18),I(86,25,00,00),B(collect ,17),I(86,25,00,00),B(collect ,16),I(86,25,00,00),B(collect ,15),I(86,25,00,00),B(collect ,14),I(86,25,00,00),B(collect ,13),I(86,25,00,00),B(collect ,12),I(86,25,00,00),B(collect ,11),I(86,25,00,00),B(collect ,10),I(86,25,00,00),B(collect ,9),I(86,25,00,00),B(collect ,8),I(86,25,00,00),B(collect ,7),I(86,25,00,00),B(collect ,6),I(86,25,00,00),B(collect ,5),I(86,25,00,00),B(collect ,4),I(86,25,00,00),B(collect ,3),I(86,25,00,00),B(collect ,2),I(23,00,00,00),B(collect ,91),I(23,00,00,00),B(collect ,90),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G001534,G001533);
  object_class(str_1537) = eul_static_string_class;
  eul_allocate_bytevector( G001536,G001535);
  eul_allocate_bytevector( G001539,G001538);
  eul_intern_symbol(sym_1542,"anonymous");
  eul_allocate_bytevector( G001541,G001540);
  eul_allocate_bytevector( G001544,G001543);
  eul_allocate_bytevector( G001546,G001545);
  eul_allocate_bytevector( G001548,G001547);
  eul_allocate_bytevector( G001550,G001549);
  eul_allocate_bytevector( G001552,G001551);
  eul_allocate_bytevector( G001554,G001553);
  eul_allocate_bytevector( G001556,G001555);
  eul_allocate_bytevector( G001558,G001557);
  eul_allocate_bytevector( G001560,G001559);
  eul_allocate_bytevector( G001562,G001561);
  eul_allocate_bytevector( G001564,G001563);
  eul_allocate_bytevector( G001566,G001565);
  eul_allocate_bytevector( G001568,G001567);
  eul_allocate_bytevector( G001570,G001569);
  eul_intern_keyword(key_1573,"name");
  eul_intern_symbol(sym_1574,"collection");
  eul_intern_keyword(key_1575,"direct-superclasses");
  eul_intern_keyword(key_1576,"direct-slots");
  eul_intern_keyword(key_1577,"direct-keywords");
  eul_intern_keyword(key_1578,"abstract?");
  eul_intern_symbol(sym_1579,"sequence");
  eul_intern_keyword(key_1581,"size");
  eul_intern_keyword(key_1583,"fill-value");
  object_class(cons_1582) = eul_static_cons_class;
  eul_car(cons_1582) = key_1583;
  eul_cdr(cons_1582) = eul_nil;
  object_class(cons_1580) = eul_static_cons_class;
  eul_car(cons_1580) = key_1581;
  eul_intern_symbol(sym_1584,"name");
  eul_intern_symbol(sym_1585,"collectionp");
  eul_intern_symbol(sym_1586,"sequence?");
  eul_intern_symbol(sym_1587,"emptyp");
  eul_intern_symbol(sym_1588,"accumulate");
  eul_intern_symbol(sym_1589,"accumulate1");
  eul_intern_symbol(sym_1590,"any?");
  eul_intern_symbol(sym_1591,"all?");
  eul_intern_symbol(sym_1592,"do");
  eul_intern_symbol(sym_1593,"fill");
  eul_intern_symbol(sym_1594,"find");
  eul_intern_symbol(sym_1595,"map");
  eul_intern_symbol(sym_1596,"member");
  eul_intern_symbol(sym_1597,"select");
  eul_intern_symbol(sym_1598,"element");
  eul_intern_symbol(sym_1599,"delete");
  eul_intern_symbol(sym_1600,"remove");
  eul_intern_symbol(sym_1601,"reset");
  eul_intern_symbol(sym_1602,"size");
  eul_intern_symbol(sym_1603,"reverse");
  eul_intern_symbol(sym_1604,"sort");
  eul_intern_symbol(sym_1605,"concatenate");
  eul_intern_symbol(sym_1606,"slice");
  eul_intern_symbol(sym_1607,"(method name)");
  eul_intern_symbol(sym_1608,"(method collectionp)");
  eul_intern_symbol(sym_1609,"(method sequence?)");
  eul_intern_symbol(sym_1610,"(method binary=)");
  eul_intern_symbol(sym_1611,"(method any?)");
  eul_intern_symbol(sym_1612,"(method all?)");
  eul_intern_symbol(sym_1613,"(method fill)");
  eul_intern_symbol(sym_1614,"(method find)");
  eul_intern_symbol(sym_1616,"setter");
  object_class(cons_1617) = eul_static_cons_class;
  eul_car(cons_1617) = sym_1598;
  eul_cdr(cons_1617) = eul_nil;
  object_class(cons_1615) = eul_static_cons_class;
  eul_car(cons_1615) = sym_1616;
  eul_allocate_bytevector( G001572,G001571);
  eul_intern_symbol(sym_1620,"top-level");
  eul_allocate_bytevector( G001619,G001618);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 27; i++)
      collect_bindings[i] = eul_nil;
  }

  collect_bindings[ 27] = G001534;
  collect_bindings[ 28] = str_1537;
  collect_bindings[ 29] = G001536;
  collect_bindings[ 30] = G001539;
  collect_bindings[ 31] = sym_1542;
  collect_bindings[ 32] = G001541;
  collect_bindings[ 33] = G001544;
  collect_bindings[ 34] = G001546;
  collect_bindings[ 35] = G001548;
  collect_bindings[ 36] = G001550;
  collect_bindings[ 37] = G001552;
  collect_bindings[ 38] = G001554;
  collect_bindings[ 39] = G001556;
  collect_bindings[ 40] = G001558;
  collect_bindings[ 41] = G001560;
  collect_bindings[ 42] = G001562;
  collect_bindings[ 43] = G001564;
  collect_bindings[ 44] = G001566;
  collect_bindings[ 45] = G001568;
  collect_bindings[ 46] = G001570;
  collect_bindings[ 47] = key_1573;
  collect_bindings[ 48] = sym_1574;
  collect_bindings[ 49] = key_1575;
  collect_bindings[ 50] = key_1576;
  collect_bindings[ 51] = key_1577;
  collect_bindings[ 52] = key_1578;
  collect_bindings[ 53] = sym_1579;
  collect_bindings[ 54] = key_1581;
  collect_bindings[ 55] = key_1583;
  collect_bindings[ 56] = cons_1580;
  collect_bindings[ 57] = sym_1584;
  collect_bindings[ 58] = sym_1585;
  collect_bindings[ 59] = sym_1586;
  collect_bindings[ 60] = sym_1587;
  collect_bindings[ 61] = sym_1588;
  collect_bindings[ 62] = sym_1589;
  collect_bindings[ 63] = sym_1590;
  collect_bindings[ 64] = sym_1591;
  collect_bindings[ 65] = sym_1592;
  collect_bindings[ 66] = sym_1593;
  collect_bindings[ 67] = sym_1594;
  collect_bindings[ 68] = sym_1595;
  collect_bindings[ 69] = sym_1596;
  collect_bindings[ 70] = sym_1597;
  collect_bindings[ 71] = sym_1598;
  collect_bindings[ 72] = sym_1599;
  collect_bindings[ 73] = sym_1600;
  collect_bindings[ 74] = sym_1601;
  collect_bindings[ 75] = sym_1602;
  collect_bindings[ 76] = sym_1603;
  collect_bindings[ 77] = sym_1604;
  collect_bindings[ 78] = sym_1605;
  collect_bindings[ 79] = sym_1606;
  collect_bindings[ 80] = sym_1607;
  collect_bindings[ 81] = sym_1608;
  collect_bindings[ 82] = sym_1609;
  collect_bindings[ 83] = sym_1610;
  collect_bindings[ 84] = sym_1611;
  collect_bindings[ 85] = sym_1612;
  collect_bindings[ 86] = sym_1613;
  collect_bindings[ 87] = sym_1614;
  collect_bindings[ 88] = sym_1616;
  collect_bindings[ 89] = cons_1615;
  collect_bindings[ 90] = G001572;
  collect_bindings[ 1] = eul_nil;
  collect_bindings[ 91] = sym_1620;
  eul_allocate_lambda( collect_bindings[0], "initialize-collect", 0, G001619);

  }
}


/* eof */
