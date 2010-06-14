/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module socket
 **  Copyright: See file socket.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_telos();
extern void initialize_module_lock();
extern void initialize_module_condition();
extern void initialize_module_convert();
extern void initialize_module_dynamic();
extern void initialize_module_stream1();
extern void initialize_module_stream2();
extern void initialize_module_string();
extern LispRef condition_bindings[];
extern LispRef telos_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef stream2_bindings[];
extern LispRef convert_bindings[];
extern LispRef string_bindings[];
extern LispRef stream1_bindings[];
extern LispRef boot_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef lock_bindings[];

/* Module bindings with size 85 */
LispRef socket_bindings[85];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module socket */
void initialize_module_socket()
{
  if (is_initialized) return;
  initialize_module_telos();
  initialize_module_lock();
  initialize_module_condition();
  initialize_module_convert();
  initialize_module_dynamic();
  initialize_module_stream1();
  initialize_module_stream2();
  initialize_module_string();
  eul_fast_table_set(eul_modules,"socket",(LispRef) socket_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_5580, sym_5579, sym_5578, sym_5577, sym_5576, sym_5575, sym_5574, G005573, G005571, G005569, G005567, G005565, G005563, G005561, sym_5559, sym_5558, sym_5557, sym_5556, sym_5555, sym_5554, sym_5553, sym_5552, sym_5551, sym_5550, sym_5549, sym_5545, key_5541, key_5540, key_5539, sym_5538, key_5537, sym_5536, sym_5535, key_5534, sym_5533, key_5532, key_5531, key_5530, sym_5529, key_5528, G005527, G005525, G005523, G005521, G005519, G005517, G005515, G005513, G005511, G005509, G005507, G005505, G005502, G005500, G005498, G005496, G005494, G005492, sym_5490, sym_5489, sym_5488, key_5487, sym_5486, key_5485, key_5484, key_5482, key_5480, G005479, G005477;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 7 is_init: 0 index: 12 binding: anonymous */
  static const void *G005476[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_5481, "tcp", 3);
  eul_allocate_static_string(str_5483, "~a:~a", 5);
  /* Byte-vector with size: 153 is_init: 0 index: 24 binding: (method-initialize) */
  static const void *G005478[] = {I(ab,46,04,1c),I(1c,37,02,2a),I(1b,23,00,00),B(socket ,13),I(24,00,00,00),B(boot ,29),I(3c,02,86,86),I(86,1f,03,24),B(socket ,9),I(3c,01,1b,34),I(00,00,00,65),I(1f,04,84,24),B(socket ,7),I(08,1b,20,05),I(1f,05,26,00),I(00,00,00,03),I(24,00,00,00),B(socket ,7),I(08,1b,20,05),I(1f,08,1f,06),I(1c,83,1d,24),B(socket ,2),I(09,22,02,2a),I(1f,08,1f,05),I(1c,82,1d,24),B(socket ,2),I(09,22,02,2a),I(1f,06,83,24),B(socket ,7),I(08,41,00,00),B(stream1 ,22),I(22,01,1b,20),I(05,1f,04,22),I(03,32,00,00),I(00,00,00,4c),I(1f,06,83,24),B(socket ,2),I(08,1b,20,05),I(1f,07,82,24),B(socket ,2),I(08,1b,20,05),I(1f,04,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1f,06),I(1c,23,00,00),B(socket ,14),I(41,00,00,00),B(stream1 ,23),I(22,03,1b,20),I(06,1f,05,22),I(04,2a,1c,85),I(19,1b,34,00),I(00,00,00,32),I(24,00,00,00),B(stream1 ,6),I(3c,00,1b,24),B(stream2 ,38),I(23,00,00,00),B(socket ,15),I(1f,0b,24,00),B(boot ,12),I(3c,04,22,01),I(32,00,00,00),I(00,00,00,43),I(1d,85,1a,1b),I(34,00,00,00),I(00,00,00,34),I(1f,03,41,00),B(stream1 ,24),I(22,01,1b,24),B(stream2 ,38),I(23,00,00,00),B(socket ,15),I(1f,0c,24,00),B(boot ,12),I(3c,04,22,01),I(32,00,00,00),I(00,00,00,09),I(86,22,01,2a),I(86,23,00,00),B(socket ,16),I(1f,06,1f,06),I(24,00,00,00),B(mop_gf ,17),I(3c,04,24,00),B(stream2 ,4),I(23,00,00,00),B(socket ,17),I(1d,23,00,00),B(socket ,18),I(23,00,00,00),B(socket ,19),I(23,00,00,00),B(socket ,20),I(1f,09,24,00),B(mop_gf ,2),I(3c,07,24,00),B(stream2 ,4),I(23,00,00,00),B(socket ,17),I(1f,03,23,00),B(socket ,18),I(23,00,00,00),B(socket ,21),I(23,00,00,00),B(socket ,20),I(1f,0a,24,00),B(mop_gf ,2),I(3c,07,1f,0a),I(1d,1c,26,00),I(00,00,00,04),I(1d,24,00,00),B(stream2 ,21),I(09,22,02,2a),I(1f,0a,1c,1c),I(26,00,00,00),I(00,00,00,05),I(1d,24,00,00),B(stream2 ,21),I(09,22,02,2a),I(24,00,00,00),B(stream2 ,12),I(1b,48,00,00),I(23,00,00,00),B(socket ,22),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(socket ,23),I(23,00,00,00),B(socket ,12),I(3b,00,1c,0f),I(23,00,00,00),B(socket ,22),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(0d,24,00,00),B(stream2 ,37),I(0f,1b,89,00),B(stream2 ,37),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0f,45,10,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 25 binding: (method-connectionp) */
  static const void *G005491[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 26 binding: (method-connectionp) */
  static const void *G005493[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 27 binding: (setter-connection-host) */
  static const void *G005495[] = {I(ab,1c,83,1d),I(24,00,00,00),B(socket ,2),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 28 binding: (setter-connection-port) */
  static const void *G005497[] = {I(ab,1c,82,1d),I(24,00,00,00),B(socket ,2),I(09,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 29 binding: anonymous */
  static const void *G005499[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_5503, "tcp", 3);
  /* Byte-vector with size: 81 is_init: 0 index: 31 binding: (method-initialize) */
  static const void *G005501[] = {I(ab,46,02,1c),I(1c,37,02,2a),I(1c,26,00,00),I(00,00,00,03),I(24,00,00,00),B(socket ,7),I(08,24,00,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1d,82),I(24,00,00,00),B(socket ,7),I(08,1c,23,00),B(socket ,30),I(1d,41,00,00),B(stream1 ,21),I(22,03,1b,85),I(19,1b,34,00),I(00,00,00,32),I(24,00,00,00),B(stream1 ,6),I(3c,00,1b,24),B(stream2 ,38),I(23,00,00,00),B(socket ,15),I(1f,09,24,00),B(boot ,12),I(3d,04,07,22),I(01,32,00,00),I(00,00,00,cc),I(1c,85,1a,1b),I(34,00,00,00),I(00,00,00,34),I(1d,41,00,00),B(stream1 ,24),I(22,01,1b,24),B(stream2 ,38),I(23,00,00,00),B(socket ,15),I(1f,0a,24,00),B(boot ,12),I(3d,04,08,22),I(01,32,00,00),I(00,00,00,92),I(1f,06,1f,03),I(1c,83,1d,24),B(socket ,7),I(09,22,02,2a),I(24,00,00,00),B(stream2 ,12),I(1b,48,00,00),I(23,00,00,00),B(socket ,22),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(socket ,23),I(23,00,00,00),B(socket ,29),I(3b,00,1c,0f),I(23,00,00,00),B(socket ,22),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(09,24,00,00),B(stream2 ,37),I(0f,1b,89,00),B(stream2 ,37),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0b,22,05,22),I(01,45,06,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 32 binding: (method-socket?) */
  static const void *G005504[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 33 binding: (method-socket?) */
  static const void *G005506[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 34 binding: (setter-socket-port) */
  static const void *G005508[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(socket ,7),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 35 binding: (setter-socket-host) */
  static const void *G005510[] = {I(ab,1c,84,1d),I(24,00,00,00),B(socket ,7),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 36 binding: (setter-socket-descriptor) */
  static const void *G005512[] = {I(ab,1c,83,1d),I(24,00,00,00),B(socket ,7),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 37 binding: (setter-socket-queue-size) */
  static const void *G005514[] = {I(ab,1c,82,1d),I(24,00,00,00),B(socket ,7),I(09,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 38 binding: anonymous */
  static const void *G005516[] = {I(a9,26,00,00),I(00,00,12,67),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 39 binding: anonymous */
  static const void *G005518[] = {I(a9,24,00,00),B(stream1 ,3),I(3d,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 40 binding: anonymous */
  static const void *G005520[] = {I(a9,26,00,00),I(00,00,00,05),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 41 binding: anonymous */
  static const void *G005522[] = {I(a9,24,00,00),B(stream1 ,3),I(3d,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 42 binding: anonymous */
  static const void *G005524[] = {I(a9,26,00,00),I(00,00,12,67),I(45,00,00,00)};

  eul_allocate_static_cons(cons_5544, NULL, NULL);
  eul_allocate_static_cons(cons_5543, NULL, eul_as_static(cons_5544));
  eul_allocate_static_cons(cons_5542, NULL, eul_as_static(cons_5543));
  eul_allocate_static_cons(cons_5548, NULL, NULL);
  eul_allocate_static_cons(cons_5547, NULL, eul_as_static(cons_5548));
  eul_allocate_static_cons(cons_5546, NULL, eul_as_static(cons_5547));
  /* Byte-vector with size: 419 is_init: 0 index: 71 binding: top-level */
  static const void *G005526[] = {I(a9,24,00,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(socket ,43),I(23,00,00,00),B(socket ,44),I(23,00,00,00),B(socket ,45),I(23,00,00,00),B(socket ,23),I(23,00,00,00),B(socket ,42),I(3b,00,23,00),B(socket ,46),I(23,00,00,00),B(socket ,47),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(socket ,43),I(23,00,00,00),B(socket ,48),I(23,00,00,00),B(socket ,45),I(23,00,00,00),B(socket ,23),I(23,00,00,00),B(socket ,41),I(3b,00,23,00),B(socket ,46),I(23,00,00,00),B(socket ,49),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(socket ,43),I(23,00,00,00),B(socket ,50),I(24,00,00,00),B(boot1 ,26),I(3c,02,23,00),B(socket ,43),I(23,00,00,00),B(socket ,51),I(23,00,00,00),B(socket ,45),I(23,00,00,00),B(socket ,23),I(23,00,00,00),B(socket ,40),I(3b,00,23,00),B(socket ,46),I(23,00,00,00),B(socket ,52),I(24,00,00,00),B(boot1 ,26),I(3c,06,1f,03),I(1f,03,1f,03),I(1f,03,24,00),B(boot1 ,26),I(3c,04,24,00),B(mop_class ,70),I(23,00,00,00),B(socket ,43),I(23,00,00,00),B(socket ,53),I(23,00,00,00),B(socket ,54),I(1f,09,23,00),B(socket ,55),I(1f,06,23,00),B(socket ,56),I(23,00,00,00),B(socket ,57),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(socket ,7),I(2a,24,00,00),B(stream2 ,5),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(socket ,43),I(23,00,00,00),B(socket ,48),I(23,00,00,00),B(socket ,45),I(23,00,00,00),B(socket ,23),I(23,00,00,00),B(socket ,39),I(3b,00,23,00),B(socket ,46),I(23,00,00,00),B(socket ,49),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(socket ,43),I(23,00,00,00),B(socket ,44),I(23,00,00,00),B(socket ,45),I(23,00,00,00),B(socket ,23),I(23,00,00,00),B(socket ,38),I(3b,00,23,00),B(socket ,46),I(23,00,00,00),B(socket ,47),I(24,00,00,00),B(boot1 ,26),I(3c,06,1c,1c),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,70),I(23,00,00,00),B(socket ,43),I(23,00,00,00),B(socket ,58),I(23,00,00,00),B(socket ,54),I(1f,07,23,00),B(socket ,55),I(1f,06,23,00),B(socket ,56),I(23,00,00,00),B(socket ,59),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(socket ,2),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(socket ,60),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(socket ,9),I(2a,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(socket ,61),I(1f,03,24,00),B(mop_class ,15),I(24,00,00,00),B(mop_class ,55),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(socket ,10),I(2a,24,00,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,5),I(23,00,00,00),B(socket ,62),I(23,00,00,00),B(socket ,37),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,3),I(23,00,00,00),B(socket ,63),I(23,00,00,00),B(socket ,36),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,11),I(23,00,00,00),B(socket ,64),I(23,00,00,00),B(socket ,35),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,8),I(23,00,00,00),B(socket ,65),I(23,00,00,00),B(socket ,34),I(3b,02,1d,3c),I(02,2a,24,00),B(socket ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,66),I(23,00,00,00),B(socket ,33),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,9),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(socket ,7),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,9),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,66),I(23,00,00,00),B(socket ,32),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,9),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,9),I(2a,24,00,00),B(socket ,7),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,7),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,67),I(23,00,00,00),B(socket ,31),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,6),I(23,00,00,00),B(socket ,68),I(23,00,00,00),B(socket ,28),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,4),I(23,00,00,00),B(socket ,69),I(23,00,00,00),B(socket ,27),I(3b,02,1d,3c),I(02,2a,24,00),B(socket ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,20),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,70),I(23,00,00,00),B(socket ,26),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(socket ,2),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,70),I(23,00,00,00),B(socket ,25),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,10),I(2a,24,00,00),B(socket ,2),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,2),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,7),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,67),I(23,00,00,00),B(socket ,24),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,3e,45),I(3e,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 72 binding: socket-descriptor */
  static const void *G005560[] = {I(aa,83,24,00),B(socket ,7),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 73 binding: connection-host */
  static const void *G005562[] = {I(aa,83,24,00),B(socket ,2),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 74 binding: socket-queue-size */
  static const void *G005564[] = {I(aa,82,24,00),B(socket ,7),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 75 binding: connection-port */
  static const void *G005566[] = {I(aa,82,24,00),B(socket ,2),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 76 binding: socket-port */
  static const void *G005568[] = {I(aa,26,00,00),I(00,00,00,03),I(24,00,00,00),B(socket ,7),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 77 binding: socket-host */
  static const void *G005570[] = {I(aa,84,24,00),B(socket ,7),I(08,45,00,00)};

  /* Byte-vector with size: 92 is_init: 1 index: 0 binding: initialize-socket */
  static const void *G005572[] = {I(87,25,00,00),B(socket ,1),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(stream2 ,1),I(3e,0b,24,00),B(stream2 ,0),I(3c,00,21,01),I(24,00,00,00),B(stream1 ,1),I(3e,0b,24,00),B(stream1 ,0),I(3c,00,21,01),I(24,00,00,00),B(dynamic ,1),I(3e,0b,24,00),B(dynamic ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(lock ,1),I(3e,0b,24,00),B(lock ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(socket ,78),I(23,00,00,00),B(socket ,77),I(3b,01,25,00),B(socket ,11),I(86,25,00,00),B(socket ,10),I(86,25,00,00),B(socket ,9),I(23,00,00,00),B(socket ,79),I(23,00,00,00),B(socket ,76),I(3b,01,25,00),B(socket ,8),I(86,25,00,00),B(socket ,7),I(23,00,00,00),B(socket ,80),I(23,00,00,00),B(socket ,75),I(3b,01,25,00),B(socket ,6),I(23,00,00,00),B(socket ,81),I(23,00,00,00),B(socket ,74),I(3b,01,25,00),B(socket ,5),I(23,00,00,00),B(socket ,82),I(23,00,00,00),B(socket ,73),I(3b,01,25,00),B(socket ,4),I(23,00,00,00),B(socket ,83),I(23,00,00,00),B(socket ,72),I(3b,01,25,00),B(socket ,3),I(86,25,00,00),B(socket ,2),I(23,00,00,00),B(socket ,84),I(23,00,00,00),B(socket ,71),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G005477,G005476);
  eul_intern_keyword(key_5480,"socket");
  object_class(str_5481) = eul_static_string_class;
  eul_intern_keyword(key_5482,"value");
  object_class(str_5483) = eul_static_string_class;
  eul_intern_keyword(key_5484,"file-name");
  eul_intern_keyword(key_5485,"mode");
  eul_intern_symbol(sym_5486,"r");
  eul_intern_keyword(key_5487,"descriptor");
  eul_intern_symbol(sym_5488,"w");
  eul_intern_symbol(sym_5489,"*clean-ups*");
  eul_intern_symbol(sym_5490,"anonymous");
  eul_allocate_bytevector( G005479,G005478);
  eul_allocate_bytevector( G005492,G005491);
  eul_allocate_bytevector( G005494,G005493);
  eul_allocate_bytevector( G005496,G005495);
  eul_allocate_bytevector( G005498,G005497);
  eul_allocate_bytevector( G005500,G005499);
  object_class(str_5503) = eul_static_string_class;
  eul_allocate_bytevector( G005502,G005501);
  eul_allocate_bytevector( G005505,G005504);
  eul_allocate_bytevector( G005507,G005506);
  eul_allocate_bytevector( G005509,G005508);
  eul_allocate_bytevector( G005511,G005510);
  eul_allocate_bytevector( G005513,G005512);
  eul_allocate_bytevector( G005515,G005514);
  eul_allocate_bytevector( G005517,G005516);
  eul_allocate_bytevector( G005519,G005518);
  eul_allocate_bytevector( G005521,G005520);
  eul_allocate_bytevector( G005523,G005522);
  eul_allocate_bytevector( G005525,G005524);
  eul_intern_keyword(key_5528,"name");
  eul_intern_symbol(sym_5529,"port");
  eul_intern_keyword(key_5530,"default");
  eul_intern_keyword(key_5531,"keyword");
  eul_intern_keyword(key_5532,"port");
  eul_intern_symbol(sym_5533,"host");
  eul_intern_keyword(key_5534,"host");
  eul_intern_symbol(sym_5535,"descriptor");
  eul_intern_symbol(sym_5536,"queue-size");
  eul_intern_keyword(key_5537,"queue-size");
  eul_intern_symbol(sym_5538,"socket");
  eul_intern_keyword(key_5539,"direct-superclasses");
  eul_intern_keyword(key_5540,"direct-slots");
  eul_intern_keyword(key_5541,"direct-keywords");
  object_class(cons_5544) = eul_static_cons_class;
  eul_car(cons_5544) = key_5532;
  eul_cdr(cons_5544) = eul_nil;
  object_class(cons_5543) = eul_static_cons_class;
  eul_car(cons_5543) = key_5534;
  object_class(cons_5542) = eul_static_cons_class;
  eul_car(cons_5542) = key_5537;
  eul_intern_symbol(sym_5545,"connection");
  object_class(cons_5548) = eul_static_cons_class;
  eul_car(cons_5548) = key_5534;
  eul_cdr(cons_5548) = eul_nil;
  object_class(cons_5547) = eul_static_cons_class;
  eul_car(cons_5547) = key_5532;
  object_class(cons_5546) = eul_static_cons_class;
  eul_car(cons_5546) = key_5480;
  eul_intern_symbol(sym_5549,"socket?");
  eul_intern_symbol(sym_5550,"connectionp");
  eul_intern_symbol(sym_5551,"(setter socket-queue-size)");
  eul_intern_symbol(sym_5552,"(setter socket-descriptor)");
  eul_intern_symbol(sym_5553,"(setter socket-host)");
  eul_intern_symbol(sym_5554,"(setter socket-port)");
  eul_intern_symbol(sym_5555,"(method socket?)");
  eul_intern_symbol(sym_5556,"(method initialize)");
  eul_intern_symbol(sym_5557,"(setter connection-port)");
  eul_intern_symbol(sym_5558,"(setter connection-host)");
  eul_intern_symbol(sym_5559,"(method connectionp)");
  eul_allocate_bytevector( G005527,G005526);
  eul_allocate_bytevector( G005561,G005560);
  eul_allocate_bytevector( G005563,G005562);
  eul_allocate_bytevector( G005565,G005564);
  eul_allocate_bytevector( G005567,G005566);
  eul_allocate_bytevector( G005569,G005568);
  eul_allocate_bytevector( G005571,G005570);
  eul_intern_symbol(sym_5574,"socket-host");
  eul_intern_symbol(sym_5575,"socket-port");
  eul_intern_symbol(sym_5576,"connection-port");
  eul_intern_symbol(sym_5577,"socket-queue-size");
  eul_intern_symbol(sym_5578,"connection-host");
  eul_intern_symbol(sym_5579,"socket-descriptor");
  eul_intern_symbol(sym_5580,"top-level");
  eul_allocate_bytevector( G005573,G005572);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 12; i++)
      socket_bindings[i] = eul_nil;
  }

  socket_bindings[ 12] = G005477;
  socket_bindings[ 13] = key_5480;
  socket_bindings[ 14] = str_5481;
  socket_bindings[ 15] = key_5482;
  socket_bindings[ 16] = str_5483;
  socket_bindings[ 17] = key_5484;
  socket_bindings[ 18] = key_5485;
  socket_bindings[ 19] = sym_5486;
  socket_bindings[ 20] = key_5487;
  socket_bindings[ 21] = sym_5488;
  socket_bindings[ 22] = sym_5489;
  socket_bindings[ 23] = sym_5490;
  socket_bindings[ 24] = G005479;
  socket_bindings[ 25] = G005492;
  socket_bindings[ 26] = G005494;
  socket_bindings[ 27] = G005496;
  socket_bindings[ 28] = G005498;
  socket_bindings[ 29] = G005500;
  socket_bindings[ 30] = str_5503;
  socket_bindings[ 31] = G005502;
  socket_bindings[ 32] = G005505;
  socket_bindings[ 33] = G005507;
  socket_bindings[ 34] = G005509;
  socket_bindings[ 35] = G005511;
  socket_bindings[ 36] = G005513;
  socket_bindings[ 37] = G005515;
  socket_bindings[ 38] = G005517;
  socket_bindings[ 39] = G005519;
  socket_bindings[ 40] = G005521;
  socket_bindings[ 41] = G005523;
  socket_bindings[ 42] = G005525;
  socket_bindings[ 43] = key_5528;
  socket_bindings[ 44] = sym_5529;
  socket_bindings[ 45] = key_5530;
  socket_bindings[ 46] = key_5531;
  socket_bindings[ 47] = key_5532;
  socket_bindings[ 48] = sym_5533;
  socket_bindings[ 49] = key_5534;
  socket_bindings[ 50] = sym_5535;
  socket_bindings[ 51] = sym_5536;
  socket_bindings[ 52] = key_5537;
  socket_bindings[ 53] = sym_5538;
  socket_bindings[ 54] = key_5539;
  socket_bindings[ 55] = key_5540;
  socket_bindings[ 56] = key_5541;
  socket_bindings[ 57] = cons_5542;
  socket_bindings[ 58] = sym_5545;
  socket_bindings[ 59] = cons_5546;
  socket_bindings[ 60] = sym_5549;
  socket_bindings[ 61] = sym_5550;
  socket_bindings[ 62] = sym_5551;
  socket_bindings[ 63] = sym_5552;
  socket_bindings[ 64] = sym_5553;
  socket_bindings[ 65] = sym_5554;
  socket_bindings[ 66] = sym_5555;
  socket_bindings[ 67] = sym_5556;
  socket_bindings[ 68] = sym_5557;
  socket_bindings[ 69] = sym_5558;
  socket_bindings[ 70] = sym_5559;
  socket_bindings[ 71] = G005527;
  socket_bindings[ 72] = G005561;
  socket_bindings[ 73] = G005563;
  socket_bindings[ 74] = G005565;
  socket_bindings[ 75] = G005567;
  socket_bindings[ 76] = G005569;
  socket_bindings[ 77] = G005571;
  socket_bindings[ 1] = eul_nil;
  socket_bindings[ 78] = sym_5574;
  socket_bindings[ 79] = sym_5575;
  socket_bindings[ 80] = sym_5576;
  socket_bindings[ 81] = sym_5577;
  socket_bindings[ 82] = sym_5578;
  socket_bindings[ 83] = sym_5579;
  socket_bindings[ 84] = sym_5580;
  eul_allocate_lambda( socket_bindings[0], "initialize-socket", 0, G005573);

  }
}


/* eof */
