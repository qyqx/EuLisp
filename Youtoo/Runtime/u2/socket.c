/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Title: C source file of EuLisp module socket
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
extern LispRef mop_gf_bindings[];
extern LispRef boot1_bindings[];
extern LispRef mop_class_bindings[];
extern LispRef boot_bindings[];
extern LispRef stream2_bindings[];
extern LispRef stream1_bindings[];
extern LispRef convert_bindings[];
extern LispRef string_bindings[];
extern LispRef dynamic_bindings[];
extern LispRef lock_bindings[];

/* Module bindings with size 76 */
LispRef socket_bindings[76];

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
  LispRef sym_3541, sym_3540, sym_3539, sym_3538, sym_3537, sym_3536, sym_3535, G003534, G003532, G003530, G003528, G003526, G003524, G003522, sym_3520, sym_3519, sym_3518, sym_3517, sym_3516, sym_3515, sym_3514, sym_3513, sym_3512, sym_3511, sym_3510, key_3507, sym_3505, key_3501, key_3500, key_3499, sym_3498, key_3497, sym_3496, sym_3495, key_3494, sym_3493, key_3492, key_3491, key_3490, sym_3489, key_3488, G003487, G003485, G003483, G003481, G003479, G003477, G003475, G003473, G003471, G003469, G003467, G003465, sym_3463, sym_3462, key_3461, G003459, G003457, G003455, G003453, G003451, G003449;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 1 is_init: 0 index: 12 binding: (method-connection?) */
  static const void *G003448[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 13 binding: (method-connection?) */
  static const void *G003450[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 4 is_init: 0 index: 14 binding: (setter-connection-host) */
  static const void *G003452[] = {I(ab,1c,83,1d),I(24,00,00,00),B(socket ,2),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 15 binding: (setter-connection-port) */
  static const void *G003454[] = {I(ab,1c,82,1d),I(24,00,00,00),B(socket ,2),I(09,45,02,00)};

  /* Byte-vector with size: 7 is_init: 0 index: 16 binding: anonymous */
  static const void *G003456[] = {I(a9,47,00,00),I(24,00,00,00),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_3460, "tcp", 3);
  /* Byte-vector with size: 83 is_init: 0 index: 21 binding: (method-initialize) */
  static const void *G003458[] = {I(ab,46,02,1c),I(1c,37,02,2a),I(1c,26,00,00),I(00,00,00,03),I(24,00,00,00),B(socket ,8),I(08,24,00,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1d,82),I(24,00,00,00),B(socket ,8),I(08,1c,23,00),B(socket ,17),I(1d,41,00,00),B(stream1 ,21),I(22,03,1b,85),I(19,1b,34,00),I(00,00,00,32),I(24,00,00,00),B(stream1 ,6),I(3c,00,24,00),B(stream2 ,39),I(1c,23,00,00),B(socket ,18),I(1f,09,24,00),B(boot ,13),I(3d,04,07,22),I(01,32,00,00),I(00,00,00,d4),I(1c,85,1a,1b),I(34,00,00,00),I(00,00,00,3c),I(1d,41,00,00),B(stream1 ,24),I(22,01,24,00),B(stream2 ,39),I(1c,24,00,00),B(stream2 ,39),I(23,00,00,00),B(socket ,18),I(1f,0b,24,00),B(boot ,13),I(3d,05,08,22),I(01,32,00,00),I(00,00,00,92),I(1f,06,1f,03),I(1c,83,1d,24),B(socket ,8),I(09,22,02,2a),I(24,00,00,00),B(stream2 ,11),I(1b,48,00,00),I(23,00,00,00),B(socket ,19),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(socket ,20),I(23,00,00,00),B(socket ,16),I(3b,00,1c,0f),I(23,00,00,00),B(socket ,19),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,47),I(00,00,24,00),B(lock ,3),I(3c,01,2a,1f),I(09,24,00,00),B(stream2 ,37),I(0f,1b,89,00),B(stream2 ,37),I(47,00,00,24),B(lock ,4),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1f),I(0b,22,05,22),I(01,45,06,00)};

  /* Byte-vector with size: 1 is_init: 0 index: 22 binding: (method-socket?) */
  static const void *G003464[] = {I(aa,1b,45,01)};

  /* Byte-vector with size: 1 is_init: 0 index: 23 binding: (method-socket?) */
  static const void *G003466[] = {I(aa,86,45,01)};

  /* Byte-vector with size: 5 is_init: 0 index: 24 binding: (setter-socket-port) */
  static const void *G003468[] = {I(ab,1c,26,00),I(00,00,00,03),I(1d,24,00,00),B(socket ,8),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 25 binding: (setter-socket-host) */
  static const void *G003470[] = {I(ab,1c,84,1d),I(24,00,00,00),B(socket ,8),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 26 binding: (setter-socket-descriptor) */
  static const void *G003472[] = {I(ab,1c,83,1d),I(24,00,00,00),B(socket ,8),I(09,45,02,00)};

  /* Byte-vector with size: 4 is_init: 0 index: 27 binding: (setter-socket-queue-size) */
  static const void *G003474[] = {I(ab,1c,82,1d),I(24,00,00,00),B(socket ,8),I(09,45,02,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 28 binding: anonymous */
  static const void *G003476[] = {I(a9,26,00,00),I(00,00,12,67),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 29 binding: anonymous */
  static const void *G003478[] = {I(a9,24,00,00),B(stream1 ,3),I(3d,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 30 binding: anonymous */
  static const void *G003480[] = {I(a9,26,00,00),I(00,00,00,05),I(45,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 31 binding: anonymous */
  static const void *G003482[] = {I(a9,24,00,00),B(stream1 ,3),I(3d,00,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 32 binding: anonymous */
  static const void *G003484[] = {I(a9,26,00,00),I(00,00,12,67),I(45,00,00,00)};

  eul_allocate_static_cons(cons_3504, NULL, NULL);
  eul_allocate_static_cons(cons_3503, NULL, eul_as_static(cons_3504));
  eul_allocate_static_cons(cons_3502, NULL, eul_as_static(cons_3503));
  eul_allocate_static_cons(cons_3509, NULL, NULL);
  eul_allocate_static_cons(cons_3508, NULL, eul_as_static(cons_3509));
  eul_allocate_static_cons(cons_3506, NULL, eul_as_static(cons_3508));
  /* Byte-vector with size: 390 is_init: 0 index: 62 binding: top-level */
  static const void *G003486[] = {I(a9,24,00,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(socket ,33),I(23,00,00,00),B(socket ,34),I(23,00,00,00),B(socket ,35),I(23,00,00,00),B(socket ,20),I(23,00,00,00),B(socket ,32),I(3b,00,23,00),B(socket ,36),I(23,00,00,00),B(socket ,37),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(socket ,33),I(23,00,00,00),B(socket ,38),I(23,00,00,00),B(socket ,35),I(23,00,00,00),B(socket ,20),I(23,00,00,00),B(socket ,31),I(3b,00,23,00),B(socket ,36),I(23,00,00,00),B(socket ,39),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(socket ,33),I(23,00,00,00),B(socket ,40),I(24,00,00,00),B(boot1 ,26),I(3c,02,23,00),B(socket ,33),I(23,00,00,00),B(socket ,41),I(23,00,00,00),B(socket ,35),I(23,00,00,00),B(socket ,20),I(23,00,00,00),B(socket ,30),I(3b,00,23,00),B(socket ,36),I(23,00,00,00),B(socket ,42),I(24,00,00,00),B(boot1 ,26),I(3c,06,1f,03),I(1f,03,1f,03),I(1f,03,24,00),B(boot1 ,26),I(3c,04,24,00),B(mop_class ,81),I(23,00,00,00),B(socket ,33),I(23,00,00,00),B(socket ,43),I(23,00,00,00),B(socket ,44),I(1f,09,23,00),B(socket ,45),I(1f,06,23,00),B(socket ,46),I(23,00,00,00),B(socket ,47),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(socket ,8),I(2a,24,00,00),B(stream2 ,4),I(24,00,00,00),B(boot1 ,26),I(3c,01,23,00),B(socket ,33),I(23,00,00,00),B(socket ,38),I(23,00,00,00),B(socket ,35),I(23,00,00,00),B(socket ,20),I(23,00,00,00),B(socket ,29),I(3b,00,23,00),B(socket ,36),I(23,00,00,00),B(socket ,39),I(24,00,00,00),B(boot1 ,26),I(3c,06,23,00),B(socket ,33),I(23,00,00,00),B(socket ,34),I(23,00,00,00),B(socket ,35),I(23,00,00,00),B(socket ,20),I(23,00,00,00),B(socket ,28),I(3b,00,23,00),B(socket ,36),I(23,00,00,00),B(socket ,37),I(24,00,00,00),B(boot1 ,26),I(3c,06,1c,1c),I(24,00,00,00),B(boot1 ,26),I(3c,02,24,00),B(mop_class ,81),I(23,00,00,00),B(socket ,33),I(23,00,00,00),B(socket ,48),I(23,00,00,00),B(socket ,44),I(1f,07,23,00),B(socket ,45),I(1f,06,23,00),B(socket ,46),I(23,00,00,00),B(socket ,50),I(24,00,00,00),B(mop_gf ,2),I(3c,09,1b,89),B(socket ,2),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(socket ,51),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(socket ,10),I(2a,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(boot1 ,26),I(3c,00,23,00),B(socket ,52),I(1f,03,24,00),B(mop_class ,16),I(24,00,00,00),B(mop_class ,63),I(1f,05,1f,05),I(24,00,00,00),B(mop_gf ,16),I(3c,06,1b,89),B(socket ,4),I(2a,24,00,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,6),I(23,00,00,00),B(socket ,53),I(23,00,00,00),B(socket ,27),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,3),I(23,00,00,00),B(socket ,54),I(23,00,00,00),B(socket ,26),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,11),I(23,00,00,00),B(socket ,55),I(23,00,00,00),B(socket ,25),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,9),I(23,00,00,00),B(socket ,56),I(23,00,00,00),B(socket ,24),I(3b,02,1d,3c),I(02,2a,24,00),B(socket ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,57),I(23,00,00,00),B(socket ,23),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,10),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(socket ,8),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,10),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,57),I(23,00,00,00),B(socket ,22),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,10),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,10),I(2a,24,00,00),B(socket ,8),I(2a,24,00,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,03),I(02,84,24,00),B(socket ,8),I(86,24,00,00),B(boot1 ,40),I(3c,03,24,00),B(boot1 ,26),I(3c,00,24,00),B(mop_gf ,12),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,58),I(23,00,00,00),B(socket ,21),I(3b,02,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(mop_gf ,12),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,7),I(23,00,00,00),B(socket ,59),I(23,00,00,00),B(socket ,15),I(3b,02,1d,3c),I(02,2a,24,00),B(boot1 ,42),I(24,00,00,00),B(boot1 ,42),I(3c,01,24,00),B(socket ,5),I(23,00,00,00),B(socket ,60),I(23,00,00,00),B(socket ,14),I(3b,02,1d,3c),I(02,2a,24,00),B(socket ,4),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(mop_class ,22),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,61),I(23,00,00,00),B(socket ,13),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,4),I(26,00,00,00),I(00,00,00,03),I(02,83,24,00),B(socket ,2),I(24,00,00,00),B(boot1 ,40),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(socket ,4),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,8),I(3c,02,1f,04),I(1f,04,23,00),B(socket ,61),I(23,00,00,00),B(socket ,12),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(socket ,4),I(1c,24,00,00),B(mop_meth ,5),I(3c,02,2a,24),B(socket ,4),I(2a,24,00,00),B(socket ,2),I(45,38,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 63 binding: socket-descriptor */
  static const void *G003521[] = {I(aa,83,24,00),B(socket ,8),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 64 binding: connection-host */
  static const void *G003523[] = {I(aa,83,24,00),B(socket ,2),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 65 binding: socket-queue-size */
  static const void *G003525[] = {I(aa,82,24,00),B(socket ,8),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 66 binding: connection-port */
  static const void *G003527[] = {I(aa,82,24,00),B(socket ,2),I(08,45,00,00)};

  /* Byte-vector with size: 5 is_init: 0 index: 67 binding: socket-port */
  static const void *G003529[] = {I(aa,26,00,00),I(00,00,00,03),I(24,00,00,00),B(socket ,8),I(08,45,00,00)};

  /* Byte-vector with size: 3 is_init: 0 index: 68 binding: socket-host */
  static const void *G003531[] = {I(aa,84,24,00),B(socket ,8),I(08,45,00,00)};

  /* Byte-vector with size: 92 is_init: 1 index: 0 binding: initialize-socket */
  static const void *G003533[] = {I(87,25,00,00),B(socket ,1),I(24,00,00,00),B(string ,1),I(3e,0b,24,00),B(string ,0),I(3c,00,21,01),I(24,00,00,00),B(stream2 ,1),I(3e,0b,24,00),B(stream2 ,0),I(3c,00,21,01),I(24,00,00,00),B(stream1 ,1),I(3e,0b,24,00),B(stream1 ,0),I(3c,00,21,01),I(24,00,00,00),B(dynamic ,1),I(3e,0b,24,00),B(dynamic ,0),I(3c,00,21,01),I(24,00,00,00),B(convert ,1),I(3e,0b,24,00),B(convert ,0),I(3c,00,21,01),I(24,00,00,00),B(condition ,1),I(3e,0b,24,00),B(condition ,0),I(3c,00,21,01),I(24,00,00,00),B(lock ,1),I(3e,0b,24,00),B(lock ,0),I(3c,00,21,01),I(24,00,00,00),B(telos ,1),I(3e,0b,24,00),B(telos ,0),I(3c,00,21,01),I(23,00,00,00),B(socket ,69),I(23,00,00,00),B(socket ,68),I(3b,01,25,00),B(socket ,11),I(86,25,00,00),B(socket ,10),I(23,00,00,00),B(socket ,70),I(23,00,00,00),B(socket ,67),I(3b,01,25,00),B(socket ,9),I(86,25,00,00),B(socket ,8),I(23,00,00,00),B(socket ,71),I(23,00,00,00),B(socket ,66),I(3b,01,25,00),B(socket ,7),I(23,00,00,00),B(socket ,72),I(23,00,00,00),B(socket ,65),I(3b,01,25,00),B(socket ,6),I(23,00,00,00),B(socket ,73),I(23,00,00,00),B(socket ,64),I(3b,01,25,00),B(socket ,5),I(86,25,00,00),B(socket ,4),I(23,00,00,00),B(socket ,74),I(23,00,00,00),B(socket ,63),I(3b,01,25,00),B(socket ,3),I(86,25,00,00),B(socket ,2),I(23,00,00,00),B(socket ,75),I(23,00,00,00),B(socket ,62),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G003449,G003448);
  eul_allocate_bytevector( G003451,G003450);
  eul_allocate_bytevector( G003453,G003452);
  eul_allocate_bytevector( G003455,G003454);
  eul_allocate_bytevector( G003457,G003456);
  object_class(str_3460) = eul_static_string_class;
  eul_intern_keyword(key_3461,"value");
  eul_intern_symbol(sym_3462,"*clean-ups*");
  eul_intern_symbol(sym_3463,"anonymous");
  eul_allocate_bytevector( G003459,G003458);
  eul_allocate_bytevector( G003465,G003464);
  eul_allocate_bytevector( G003467,G003466);
  eul_allocate_bytevector( G003469,G003468);
  eul_allocate_bytevector( G003471,G003470);
  eul_allocate_bytevector( G003473,G003472);
  eul_allocate_bytevector( G003475,G003474);
  eul_allocate_bytevector( G003477,G003476);
  eul_allocate_bytevector( G003479,G003478);
  eul_allocate_bytevector( G003481,G003480);
  eul_allocate_bytevector( G003483,G003482);
  eul_allocate_bytevector( G003485,G003484);
  eul_intern_keyword(key_3488,"name");
  eul_intern_symbol(sym_3489,"port");
  eul_intern_keyword(key_3490,"default");
  eul_intern_keyword(key_3491,"keyword");
  eul_intern_keyword(key_3492,"port");
  eul_intern_symbol(sym_3493,"host");
  eul_intern_keyword(key_3494,"host");
  eul_intern_symbol(sym_3495,"descriptor");
  eul_intern_symbol(sym_3496,"queue-size");
  eul_intern_keyword(key_3497,"queue-size");
  eul_intern_symbol(sym_3498,"socket");
  eul_intern_keyword(key_3499,"direct-superclasses");
  eul_intern_keyword(key_3500,"direct-slots");
  eul_intern_keyword(key_3501,"direct-keywords");
  object_class(cons_3504) = eul_static_cons_class;
  eul_car(cons_3504) = key_3492;
  eul_cdr(cons_3504) = eul_nil;
  object_class(cons_3503) = eul_static_cons_class;
  eul_car(cons_3503) = key_3494;
  object_class(cons_3502) = eul_static_cons_class;
  eul_car(cons_3502) = key_3497;
  eul_intern_symbol(sym_3505,"connection");
  eul_intern_keyword(key_3507,"socket");
  object_class(cons_3509) = eul_static_cons_class;
  eul_car(cons_3509) = key_3494;
  eul_cdr(cons_3509) = eul_nil;
  object_class(cons_3508) = eul_static_cons_class;
  eul_car(cons_3508) = key_3492;
  object_class(cons_3506) = eul_static_cons_class;
  eul_car(cons_3506) = key_3507;
  eul_intern_symbol(sym_3510,"socket?");
  eul_intern_symbol(sym_3511,"connection?");
  eul_intern_symbol(sym_3512,"(setter socket-queue-size)");
  eul_intern_symbol(sym_3513,"(setter socket-descriptor)");
  eul_intern_symbol(sym_3514,"(setter socket-host)");
  eul_intern_symbol(sym_3515,"(setter socket-port)");
  eul_intern_symbol(sym_3516,"(method socket?)");
  eul_intern_symbol(sym_3517,"(method initialize)");
  eul_intern_symbol(sym_3518,"(setter connection-port)");
  eul_intern_symbol(sym_3519,"(setter connection-host)");
  eul_intern_symbol(sym_3520,"(method connection?)");
  eul_allocate_bytevector( G003487,G003486);
  eul_allocate_bytevector( G003522,G003521);
  eul_allocate_bytevector( G003524,G003523);
  eul_allocate_bytevector( G003526,G003525);
  eul_allocate_bytevector( G003528,G003527);
  eul_allocate_bytevector( G003530,G003529);
  eul_allocate_bytevector( G003532,G003531);
  eul_intern_symbol(sym_3535,"socket-host");
  eul_intern_symbol(sym_3536,"socket-port");
  eul_intern_symbol(sym_3537,"connection-port");
  eul_intern_symbol(sym_3538,"socket-queue-size");
  eul_intern_symbol(sym_3539,"connection-host");
  eul_intern_symbol(sym_3540,"socket-descriptor");
  eul_intern_symbol(sym_3541,"top-level");
  eul_allocate_bytevector( G003534,G003533);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 12; i++)
      socket_bindings[i] = eul_nil;
  }

  socket_bindings[ 12] = G003449;
  socket_bindings[ 13] = G003451;
  socket_bindings[ 14] = G003453;
  socket_bindings[ 15] = G003455;
  socket_bindings[ 16] = G003457;
  socket_bindings[ 17] = str_3460;
  socket_bindings[ 18] = key_3461;
  socket_bindings[ 19] = sym_3462;
  socket_bindings[ 20] = sym_3463;
  socket_bindings[ 21] = G003459;
  socket_bindings[ 22] = G003465;
  socket_bindings[ 23] = G003467;
  socket_bindings[ 24] = G003469;
  socket_bindings[ 25] = G003471;
  socket_bindings[ 26] = G003473;
  socket_bindings[ 27] = G003475;
  socket_bindings[ 28] = G003477;
  socket_bindings[ 29] = G003479;
  socket_bindings[ 30] = G003481;
  socket_bindings[ 31] = G003483;
  socket_bindings[ 32] = G003485;
  socket_bindings[ 33] = key_3488;
  socket_bindings[ 34] = sym_3489;
  socket_bindings[ 35] = key_3490;
  socket_bindings[ 36] = key_3491;
  socket_bindings[ 37] = key_3492;
  socket_bindings[ 38] = sym_3493;
  socket_bindings[ 39] = key_3494;
  socket_bindings[ 40] = sym_3495;
  socket_bindings[ 41] = sym_3496;
  socket_bindings[ 42] = key_3497;
  socket_bindings[ 43] = sym_3498;
  socket_bindings[ 44] = key_3499;
  socket_bindings[ 45] = key_3500;
  socket_bindings[ 46] = key_3501;
  socket_bindings[ 47] = cons_3502;
  socket_bindings[ 48] = sym_3505;
  socket_bindings[ 49] = key_3507;
  socket_bindings[ 50] = cons_3506;
  socket_bindings[ 51] = sym_3510;
  socket_bindings[ 52] = sym_3511;
  socket_bindings[ 53] = sym_3512;
  socket_bindings[ 54] = sym_3513;
  socket_bindings[ 55] = sym_3514;
  socket_bindings[ 56] = sym_3515;
  socket_bindings[ 57] = sym_3516;
  socket_bindings[ 58] = sym_3517;
  socket_bindings[ 59] = sym_3518;
  socket_bindings[ 60] = sym_3519;
  socket_bindings[ 61] = sym_3520;
  socket_bindings[ 62] = G003487;
  socket_bindings[ 63] = G003522;
  socket_bindings[ 64] = G003524;
  socket_bindings[ 65] = G003526;
  socket_bindings[ 66] = G003528;
  socket_bindings[ 67] = G003530;
  socket_bindings[ 68] = G003532;
  socket_bindings[ 1] = eul_nil;
  socket_bindings[ 69] = sym_3535;
  socket_bindings[ 70] = sym_3536;
  socket_bindings[ 71] = sym_3537;
  socket_bindings[ 72] = sym_3538;
  socket_bindings[ 73] = sym_3539;
  socket_bindings[ 74] = sym_3540;
  socket_bindings[ 75] = sym_3541;
  eul_allocate_lambda( socket_bindings[0], "initialize-socket", 0, G003534);

  }
}


/* eof */