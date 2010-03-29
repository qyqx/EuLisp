/** ----------------------------------------------------------------------- **
 **                 Generated by EuLisp System 'youtoo'
 ** ----------------------------------------------------------------------- **
 **  Description: C source file of EuLisp module i-compile
 **  Copyright: See file i-compile.em
 ** ----------------------------------------------------------------------- **/

#include "eulisp.h"


/* Imported modules */
extern void initialize_module_i_all();
extern void initialize_module_i_modify();
extern void initialize_module_p_read();
extern void initialize_module_p_env();
extern void initialize_module_p_parse();
extern void initialize_module_sx_obj();
extern void initialize_module_sx_write();
extern void initialize_module_ex_module();
extern void initialize_module_ex_body();
extern void initialize_module_cg_gen();
extern void initialize_module_cg_asm();
extern void initialize_module_cg_dld();
extern void initialize_module_cg_interf();
extern void initialize_module_cg_link();
extern void initialize_module_cg_exec();
extern LispRef cg_dld_bindings[];
extern LispRef ex_body_bindings[];
extern LispRef ex_module_bindings[];
extern LispRef sx_write_bindings[];
extern LispRef sx_obj_bindings[];
extern LispRef i_all_bindings[];
extern LispRef cg_link_bindings[];
extern LispRef p_read_bindings[];
extern LispRef cg_exec_bindings[];
extern LispRef cg_asm_bindings[];
extern LispRef cg_gen_bindings[];
extern LispRef p_parse_bindings[];
extern LispRef convert_bindings[];
extern LispRef sx_obj1_bindings[];
extern LispRef p_env_bindings[];
extern LispRef i_error_bindings[];
extern LispRef number_bindings[];
extern LispRef i_notify_bindings[];
extern LispRef i_modify_bindings[];
extern LispRef collect_bindings[];
extern LispRef string_bindings[];
extern LispRef mop_meth_bindings[];
extern LispRef boot_bindings[];
extern LispRef boot1_bindings[];
extern LispRef i_param_bindings[];
extern LispRef mop_gf_bindings[];
extern LispRef cg_interf_bindings[];
extern LispRef dynamic_bindings[];

/* Module bindings with size 91 */
LispRef i_compile_bindings[91];

/* Foreign functions */

/* Initialize module only once */
static int is_initialized = 0;

/* Initialize module i-compile */
void initialize_module_i_compile()
{
  if (is_initialized) return;
  initialize_module_i_all();
  initialize_module_i_modify();
  initialize_module_p_read();
  initialize_module_p_env();
  initialize_module_p_parse();
  initialize_module_sx_obj();
  initialize_module_sx_write();
  initialize_module_ex_module();
  initialize_module_ex_body();
  initialize_module_cg_gen();
  initialize_module_cg_asm();
  initialize_module_cg_dld();
  initialize_module_cg_interf();
  initialize_module_cg_link();
  initialize_module_cg_exec();
  eul_fast_table_set(eul_modules,"i_compile",(LispRef) i_compile_bindings);
  is_initialized = 1;
  {
  /* Declarations */
  LispRef sym_8631, sym_8630, sym_8629, sym_8628, sym_8627, sym_8626, sym_8625, sym_8624, sym_8623, sym_8622, G008621, sym_8618, G008616, G008614, G008611, G008609, G008606, G008604, G008585, G008582, G008579, G008577, G008567, G008565, sym_8552, G008550, sym_8548, G008547, sym_8545, sym_8544, sym_8542, sym_8541, sym_8539, sym_8537, G008535, G008533;

  /* Code vector and literal definitions */
  /* Byte-vector with size: 6 is_init: 0 index: 11 binding: anonymous */
  static const void *G008532[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_cons(cons_8540, NULL, NULL);
  eul_allocate_static_cons(cons_8538, NULL, eul_as_static(cons_8540));
  eul_allocate_static_cons(cons_8536, NULL, eul_as_static(cons_8538));
  eul_allocate_static_string(str_8543, "  ~a", 4);
  /* Byte-vector with size: 43 is_init: 0 index: 20 binding: (method-compile-module) */
  static const void *G008534[] = {I(aa,1b,23,00),B(i_compile ,15),I(86,6c,1b,34),I(00,00,00,15),I(1c,87,24,00),B(cg_interf ,12),I(3d,02,02,32),I(00,00,00,8f),I(23,00,00,00),B(i_compile ,16),I(24,00,00,00),B(dynamic ,3),I(3c,01,86,23),B(i_compile ,17),I(1d,24,00,00),B(mop_gf ,17),I(3c,03,23,00),B(i_compile ,16),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(i_compile ,18),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,19),I(23,00,00,00),B(i_compile ,11),I(3b,00,1c,0f),I(23,00,00,00),B(i_compile ,18),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,1f),I(05,24,00,00),B(i_compile ,10),I(3c,01,83,24),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(22,05,45,02)};

  /* Byte-vector with size: 28 is_init: 0 index: 22 binding: top-level */
  static const void *G008546[] = {I(a9,24,00,00),B(i_param ,19),I(26,00,00,00),I(00,00,00,03),I(02,83,86,24),B(boot1 ,39),I(3c,02,24,00),B(boot1 ,26),I(3c,00,24,00),B(i_param ,19),I(26,00,00,00),I(00,00,00,04),I(02,1c,1c,24),B(boot ,11),I(3c,02,1f,04),I(1f,04,23,00),B(i_compile ,21),I(23,00,00,00),B(i_compile ,20),I(3b,01,1f,03),I(24,00,00,00),B(mop_meth ,3),I(3c,04,24,00),B(i_param ,19),I(1c,24,00,00),B(mop_meth ,5),I(3d,02,06,45),I(06,00,00,00)};

  eul_allocate_static_string(str_8551, ".c", 2);
  eul_allocate_static_string(str_8553, ".c", 2);
  eul_allocate_static_string(str_8554, ".o", 2);
  eul_allocate_static_string(str_8555, ".o", 2);
  eul_allocate_static_string(str_8556, ".o", 2);
  eul_allocate_static_string(str_8557, ".o", 2);
  eul_allocate_static_string(str_8558, "~a~a~a", 6);
  eul_allocate_static_string(str_8559, "-o", 2);
  eul_allocate_static_string(str_8560, "-c", 2);
  eul_allocate_static_string(str_8561, "  Compiling ~a using ~a ...", 27);
  eul_allocate_static_string(str_8562, "file ~a can't be compiled correctly", 35);
  eul_allocate_static_string(str_8563, "  Module file ~a need not be recompiled.", 40);
  /* Byte-vector with size: 180 is_init: 0 index: 36 binding: compile-C-file-aux */
  static const void *G008549[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,1b),I(23,00,00,00),B(i_compile ,23),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,24),I(23,00,00,00),B(i_compile ,24),I(24,00,00,00),B(collect ,18),I(3c,02,1f,04),I(24,00,00,00),B(i_param ,24),I(50,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,26),I(1f,05,1d,50),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,10),I(24,00,00,00),B(i_param ,37),I(12,22,01,1b),I(34,00,00,00),I(00,00,00,18),I(1f,06,24,00),B(i_modify ,6),I(3c,01,32,00),I(00,00,00,07),I(86,1b,34,00),I(00,00,02,22),I(1f,04,24,00),B(i_modify ,5),I(3c,01,1f,08),I(7d,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0b),I(1f,09,82,02),I(1b,23,00,00),B(i_compile ,25),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_modify ,4),I(3c,01,24,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,0b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0c,82,02),I(1b,23,00,00),B(i_compile ,26),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,23),I(1c,24,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,53),I(1c,24,00,00),B(string ,11),I(3c,02,22,04),I(32,00,00,00),I(00,00,00,34),I(1f,0b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0c,82,02),I(23,00,00,00),B(i_compile ,27),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(2a,24,00,00),B(i_param ,6),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,97),I(24,00,00,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,0c,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0d,82,02),I(1b,23,00,00),B(i_compile ,28),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,23),I(1c,24,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,53),I(1c,24,00,00),B(string ,11),I(3c,02,22,04),I(32,00,00,00),I(00,00,00,34),I(1f,0c,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0d,82,02),I(23,00,00,00),B(i_compile ,29),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(86,23,00,00),B(i_compile ,30),I(1f,04,24,00),B(i_param ,23),I(1f,04,24,00),B(mop_gf ,17),I(3c,05,24,00),B(i_param ,46),I(24,00,00,00),B(i_param ,55),I(23,00,00,00),B(i_compile ,31),I(1f,03,23,00),B(i_compile ,32),I(1f,0b,24,00),B(i_compile ,8),I(3c,06,23,00),B(i_compile ,33),I(1f,0d,24,00),B(i_param ,46),I(24,00,00,00),B(i_notify ,3),I(3c,03,2a,1b),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1b),I(24,00,00,00),B(boot1 ,4),I(3c,01,24,00),B(number ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,22),I(26,00,00,00),I(ff,ff,ff,fe),I(23,00,00,00),B(i_compile ,34),I(1f,0f,24,00),B(i_error ,4),I(3d,03,11,22),I(09,32,00,00),I(00,00,00,1a),I(23,00,00,00),B(i_compile ,35),I(1f,05,24,00),B(i_notify ,3),I(3d,02,08,45),I(08,00,00,00)};

  /* Byte-vector with size: 37 is_init: 0 index: 37 binding: link */
  static const void *G008564[] = {I(aa,24,00,00),B(i_compile ,7),I(3c,00,2a,24),B(i_param ,64),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,29),I(24,00,00,00),B(i_param ,29),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,0f),I(24,00,00,00),B(i_param ,7),I(22,01,1b,34),I(00,00,00,4d),I(24,00,00,00),B(i_param ,29),I(34,00,00,00),I(00,00,00,18),I(1d,24,00,00),B(i_compile ,4),I(3d,01,03,32),I(00,00,00,26),I(24,00,00,00),B(i_param ,7),I(34,00,00,00),I(00,00,00,18),I(1d,24,00,00),B(i_compile ,6),I(3d,01,03,32),I(00,00,00,06),I(86,32,00,00),I(00,00,00,08),I(86,45,03,00)};

  eul_allocate_static_string(str_8568, "Creating library of module ~a ...", 33);
  eul_allocate_static_string(str_8569, ".o", 2);
  eul_allocate_static_string(str_8570, ".o", 2);
  eul_allocate_static_string(str_8571, "~a~alib~a.a", 11);
  eul_allocate_static_string(str_8572, "lib~a.a", 7);
  eul_allocate_static_string(str_8573, "~a~a~a", 6);
  eul_allocate_static_string(str_8574, "library ~a can't be created correctly", 37);
  eul_allocate_static_string(str_8575, "archive ~a can't be converted correctly", 39);
  /* Byte-vector with size: 130 is_init: 0 index: 46 binding: create-C-library */
  static const void *G008566[] = {I(aa,23,00,00),B(i_compile ,38),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,24),B(i_param ,6),I(86,89,00,00),B(i_param ,6),I(2a,1c,24,00),B(i_compile ,5),I(3c,01,2a,1b),I(89,00,00,00),B(i_param ,6),I(2a,1c,24,00),B(cg_interf ,16),I(3c,01,24,00),B(cg_interf ,23),I(3c,00,24,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(1b,23,00,00),B(i_compile ,39),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,23),I(1c,24,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,53),I(1c,24,00,00),B(string ,11),I(3c,02,22,04),I(32,00,00,00),I(00,00,00,34),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(23,00,00,00),B(i_compile ,40),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,4),I(3c,01,24,00),B(i_param ,6),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,6b),I(24,00,00,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,30),I(86,23,00,00),B(i_compile ,41),I(24,00,00,00),B(i_param ,53),I(24,00,00,00),B(i_param ,23),I(1f,09,24,00),B(mop_gf ,17),I(3c,05,32,00),I(00,00,00,18),I(86,23,00,00),B(i_compile ,42),I(1f,07,24,00),B(mop_gf ,17),I(3c,03,86,23),B(i_compile ,43),I(1f,04,24,00),B(i_param ,23),I(1f,04,24,00),B(mop_gf ,17),I(3c,05,22,01),I(24,00,00,00),B(i_param ,39),I(1c,1f,06,1f),I(06,24,00,00),B(i_compile ,8),I(3c,04,24,00),B(i_param ,8),I(1d,24,00,00),B(i_compile ,8),I(3c,02,1c,24),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(boot1 ,4),I(3c,01,24,00),B(number ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(85,23,00,00),B(i_compile ,44),I(1f,05,24,00),B(i_error ,4),I(3c,03,2a,1c),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,1c),I(24,00,00,00),B(boot1 ,4),I(3c,01,24,00),B(number ,8),I(3c,01,1b,34),I(00,00,00,0d),I(1b,32,00,00),I(00,00,00,19),I(85,23,00,00),B(i_compile ,45),I(1f,06,24,00),B(i_error ,4),I(3c,03,2a,1f),I(0a,24,00,00),B(cg_interf ,11),I(3d,01,0b,00)};

  /* Byte-vector with size: 22 is_init: 0 index: 47 binding: compile-C-file */
  static const void *G008576[] = {I(aa,1b,24,00),B(p_env ,14),I(3c,01,1b,34),I(00,00,00,15),I(1b,83,24,00),B(sx_obj1 ,60),I(08,32,00,00),I(00,00,00,11),I(1c,24,00,00),B(cg_interf ,15),I(3c,01,24,00),B(cg_interf ,6),I(3c,00,24,00),B(number ,7),I(3c,02,24,00),B(i_compile ,2),I(1c,24,00,00),B(boot ,4),I(3c,02,2a,1d),I(24,00,00,00),B(i_compile ,2),I(3d,01,03,00)};

  eul_allocate_static_string(str_8580, " -L", 3);
  /* Byte-vector with size: 10 is_init: 0 index: 49 binding: anonymous */
  static const void *G008578[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,23),B(i_compile ,48),I(1c,24,00,00),B(string ,11),I(3d,02,03,00)};

  eul_allocate_static_string(str_8583, " -l", 3);
  /* Byte-vector with size: 10 is_init: 0 index: 51 binding: anonymous */
  static const void *G008581[] = {I(aa,1b,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,23),B(i_compile ,50),I(1c,24,00,00),B(string ,11),I(3d,02,03,00)};

  eul_allocate_static_string(str_8586, "Creating stand-alone application of module ~a ...", 49);
  eul_allocate_static_string(str_8587, "_", 1);
  eul_allocate_static_string(str_8588, "  Linking ~a.o with imports using ~a ...", 40);
  eul_allocate_static_string(str_8589, "_.o", 3);
  eul_allocate_static_string(str_8590, "_.o", 3);
  eul_allocate_static_string(str_8591, " -leulvm", 8);
  eul_allocate_static_string(str_8592, ".o", 2);
  eul_allocate_static_string(str_8593, ".o", 2);
  eul_allocate_static_string(str_8594, "~a~a~a", 6);
  eul_allocate_static_string(str_8595, "", 0);
  eul_allocate_static_string(str_8596, "", 0);
  eul_allocate_static_string(str_8597, "-lgc", 4);
  eul_allocate_static_string(str_8598, "", 0);
  eul_allocate_static_string(str_8599, "-o", 2);
  eul_allocate_static_string(str_8600, "strip ", 6);
  eul_allocate_static_string(str_8601, "executable ~a can't be stipped correctly", 40);
  eul_allocate_static_string(str_8602, "module ~a can't be linked correctly", 35);
  /* Byte-vector with size: 232 is_init: 0 index: 69 binding: create-stand-alone-application */
  static const void *G008584[] = {I(aa,23,00,00),B(i_compile ,52),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,1b),I(24,00,00,00),B(i_compile ,5),I(3c,01,2a,1b),I(7d,1b,34,00),I(00,00,00,0e),I(1b,32,00,00),I(00,00,00,0a),I(1c,82,02,1b),I(23,00,00,00),B(i_compile ,53),I(24,00,00,00),B(string ,11),I(3c,02,1b,41),B(boot1 ,52),I(22,01,24,00),B(i_compile ,2),I(3c,01,2a,23),B(i_compile ,54),I(1f,04,24,00),B(i_param ,66),I(24,00,00,00),B(i_notify ,3),I(3c,03,2a,24),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(1b,23,00,00),B(i_compile ,55),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,23),I(1c,24,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,53),I(1c,24,00,00),B(string ,11),I(3c,02,22,04),I(32,00,00,00),I(00,00,00,34),I(1f,03,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,04,82,02),I(23,00,00,00),B(i_compile ,56),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,5),I(3c,01,23,00),B(i_compile ,57),I(24,00,00,00),B(cg_interf ,23),I(3c,00,24,00),B(cg_interf ,21),I(3c,00,1f,07),I(24,00,00,00),B(cg_interf ,16),I(3c,01,24,00),B(i_param ,53),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,a1),I(24,00,00,00),B(i_param ,53),I(34,00,00,00),I(00,00,00,5c),I(1f,09,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0a,82,02),I(1b,23,00,00),B(i_compile ,58),I(24,00,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,23),I(1c,24,00,00),B(string ,11),I(3c,02,24,00),B(i_param ,53),I(1c,24,00,00),B(string ,11),I(3c,02,22,04),I(32,00,00,00),I(00,00,00,34),I(1f,09,7d,1b),I(34,00,00,00),I(00,00,00,10),I(1b,32,00,00),I(00,00,00,0b),I(1f,0a,82,02),I(23,00,00,00),B(i_compile ,59),I(24,00,00,00),B(string ,11),I(3c,02,22,01),I(24,00,00,00),B(i_modify ,4),I(3c,01,24,00),B(i_param ,6),I(1b,34,00,00),I(00,00,00,0f),I(1b,32,00,00),I(00,00,00,09),I(1f,0b,86,23),B(i_compile ,60),I(1f,04,24,00),B(i_param ,23),I(1f,04,24,00),B(mop_gf ,17),I(3c,05,23,00),B(i_compile ,19),I(23,00,00,00),B(i_compile ,51),I(3b,01,24,00),B(i_param ,15),I(24,00,00,00),B(boot ,15),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,17),I(23,00,00,00),B(i_compile ,61),I(32,00,00,00),I(00,00,00,1a),I(24,00,00,00),B(collect ,18),I(1d,24,00,00),B(boot ,9),I(3c,02,24,00),B(i_param ,63),I(34,00,00,00),I(00,00,00,18),I(23,00,00,00),B(i_compile ,62),I(32,00,00,00),I(00,00,00,10),I(23,00,00,00),B(i_compile ,63),I(23,00,00,00),B(i_compile ,19),I(23,00,00,00),B(i_compile ,49),I(3b,01,24,00),B(i_param ,9),I(24,00,00,00),B(boot ,15),I(3c,02,1b,12),I(1b,34,00,00),I(00,00,00,17),I(23,00,00,00),B(i_compile ,64),I(32,00,00,00),I(00,00,00,1a),I(24,00,00,00),B(collect ,18),I(1d,24,00,00),B(boot ,9),I(3c,02,24,00),B(i_param ,66),I(24,00,00,00),B(i_param ,55),I(23,00,00,00),B(i_compile ,65),I(1f,0a,1f,10),I(1f,15,24,00),B(i_param ,54),I(1f,15,1f,08),I(1f,16,1f,19),I(1f,0f,1f,0f),I(24,00,00,00),B(i_param ,22),I(24,00,00,00),B(i_compile ,8),I(3c,0e,1b,24),B(i_notify ,4),I(3c,01,2a,1b),I(24,00,00,00),B(boot1 ,4),I(3c,01,82,19),I(1b,34,00,00),I(00,00,00,67),I(24,00,00,00),B(i_param ,57),I(12,1b,34,00),I(00,00,00,0e),I(86,32,00,00),I(00,00,00,48),I(23,00,00,00),B(i_compile ,66),I(1f,0b,24,00),B(string ,11),I(3c,02,1b,24),B(boot1 ,4),I(3c,01,82,19),I(1b,34,00,00),I(00,00,00,0f),I(86,32,00,00),I(00,00,00,1a),I(86,23,00,00),B(i_compile ,67),I(1f,1b,24,00),B(i_error ,4),I(3d,03,1a,22),I(02,22,01,32),I(00,00,00,18),I(86,23,00,00),B(i_compile ,68),I(1f,18,24,00),B(i_error ,4),I(3d,03,17,45),I(17,00,00,00)};

  /* Byte-vector with size: 19 is_init: 0 index: 70 binding: check-stop */
  static const void *G008603[] = {I(a9,24,00,00),B(i_param ,60),I(34,00,00,00),I(00,00,00,40),I(24,00,00,00),B(i_param ,60),I(24,00,00,00),B(i_param ,25),I(50,1b,34,00),I(00,00,00,1e),I(86,89,00,00),B(i_param ,25),I(2a,24,00,00),B(i_error ,2),I(3d,00,01,32),I(00,00,00,06),I(86,22,01,32),I(00,00,00,06),I(86,45,00,00)};

  eul_allocate_static_string(str_8607, " ", 1);
  /* Byte-vector with size: 21 is_init: 0 index: 72 binding: anonymous */
  static const void *G008605[] = {I(ab,1c,12,1b),I(34,00,00,00),I(00,00,00,10),I(1c,32,00,00),I(00,00,00,44),I(1d,11,1f,03),I(10,1b,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,23,00),B(i_compile ,71),I(1c,24,00,00),B(string ,11),I(3c,02,1f,05),I(1c,24,00,00),B(string ,11),I(3c,02,1f,04),I(1c,47,00,00),I(3d,02,08,22),I(05,45,03,00)};

  /* Byte-vector with size: 15 is_init: 0 index: 73 binding: string-append-with-space */
  static const void *G008608[] = {I(a8,46,01,86),I(1b,48,00,00),I(23,00,00,00),B(i_compile ,19),I(23,00,00,00),B(i_compile ,72),I(3b,02,48,00),I(00,1c,11,1d),I(10,1b,24,00),B(string ,13),I(24,00,00,00),B(convert ,2),I(3c,02,1d,1c),I(47,00,00,3d),I(02,05,45,05)};

  eul_allocate_static_string(str_8612, "Interactive compiling ...", 25);
  /* Byte-vector with size: 16 is_init: 0 index: 75 binding: interactive-compile */
  static const void *G008610[] = {I(aa,23,00,00),B(i_compile ,74),I(24,00,00,00),B(i_notify ,4),I(3c,01,2a,24),B(p_parse ,2),I(3c,01,1b,24),B(cg_gen ,18),I(3c,01,1c,1c),I(24,00,00,00),B(cg_asm ,3),I(3c,02,1d,1c),I(24,00,00,00),B(cg_exec ,4),I(3d,02,03,45),I(03,00,00,00)};

  /* Byte-vector with size: 6 is_init: 0 index: 76 binding: anonymous */
  static const void *G008613[] = {I(a9,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3d,01,00,00)};

  eul_allocate_static_string(str_8617, "Compiling module ~a ...", 23);
  eul_allocate_static_string(str_8619, "... module ~a compiled.", 23);
  /* Byte-vector with size: 73 is_init: 0 index: 80 binding: compile */
  static const void *G008615[] = {I(aa,23,00,00),B(i_compile ,77),I(1c,24,00,00),B(i_notify ,3),I(3c,02,2a,1b),I(89,00,00,00),B(i_param ,62),I(2a,86,86,86),I(86,1f,04,24),B(p_read ,2),I(3c,01,1b,20),I(05,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(04,24,00,00),B(i_param ,18),I(3c,01,23,00),B(i_compile ,78),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,23),B(i_compile ,18),I(24,00,00,00),B(dynamic ,3),I(3c,01,23,00),B(i_compile ,19),I(23,00,00,00),B(i_compile ,76),I(3b,00,1c,0f),I(23,00,00,00),B(i_compile ,18),I(1c,24,00,00),B(dynamic ,2),I(3c,02,2a,24),B(i_compile ,7),I(3c,00,2a,1d),I(86,24,00,00),B(cg_gen ,9),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(03,1f,08,24),B(cg_asm ,3),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(04,1f,08,24),B(cg_link ,23),I(3c,02,1b,20),I(08,24,00,00),B(i_compile ,7),I(3c,00,2a,1f),I(05,1f,08,24),B(cg_link ,4),I(3c,02,2a,24),B(i_compile ,7),I(3c,00,2a,1f),I(05,24,00,00),B(cg_interf ,9),I(3c,01,2a,23),B(i_compile ,79),I(1f,0c,24,00),B(i_notify ,3),I(3c,02,2a,1f),I(05,83,24,00),B(dynamic ,8),I(3c,01,2a,83),I(24,00,00,00),B(dynamic ,8),I(3c,01,2a,1b),I(45,0d,00,00)};

  /* Byte-vector with size: 137 is_init: 1 index: 0 binding: initialize-i-compile */
  static const void *G008620[] = {I(87,25,00,00),B(i_compile ,1),I(24,00,00,00),B(cg_exec ,1),I(3e,0b,24,00),B(cg_exec ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_link ,1),I(3e,0b,24,00),B(cg_link ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_interf ,1),I(3e,0b,24,00),B(cg_interf ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_dld ,1),I(3e,0b,24,00),B(cg_dld ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_asm ,1),I(3e,0b,24,00),B(cg_asm ,0),I(3c,00,21,01),I(24,00,00,00),B(cg_gen ,1),I(3e,0b,24,00),B(cg_gen ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_body ,1),I(3e,0b,24,00),B(ex_body ,0),I(3c,00,21,01),I(24,00,00,00),B(ex_module ,1),I(3e,0b,24,00),B(ex_module ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_write ,1),I(3e,0b,24,00),B(sx_write ,0),I(3c,00,21,01),I(24,00,00,00),B(sx_obj ,1),I(3e,0b,24,00),B(sx_obj ,0),I(3c,00,21,01),I(24,00,00,00),B(p_parse ,1),I(3e,0b,24,00),B(p_parse ,0),I(3c,00,21,01),I(24,00,00,00),B(p_env ,1),I(3e,0b,24,00),B(p_env ,0),I(3c,00,21,01),I(24,00,00,00),B(p_read ,1),I(3e,0b,24,00),B(p_read ,0),I(3c,00,21,01),I(24,00,00,00),B(i_modify ,1),I(3e,0b,24,00),B(i_modify ,0),I(3c,00,21,01),I(24,00,00,00),B(i_all ,1),I(3e,0b,24,00),B(i_all ,0),I(3c,00,21,01),I(23,00,00,00),B(i_compile ,81),I(23,00,00,00),B(i_compile ,80),I(3b,01,25,00),B(i_compile ,10),I(23,00,00,00),B(i_compile ,82),I(23,00,00,00),B(i_compile ,75),I(3b,01,25,00),B(i_compile ,9),I(23,00,00,00),B(i_compile ,83),I(23,00,00,00),B(i_compile ,73),I(3b,ff,25,00),B(i_compile ,8),I(23,00,00,00),B(i_compile ,84),I(23,00,00,00),B(i_compile ,70),I(3b,00,25,00),B(i_compile ,7),I(23,00,00,00),B(i_compile ,85),I(23,00,00,00),B(i_compile ,69),I(3b,01,25,00),B(i_compile ,6),I(23,00,00,00),B(i_compile ,86),I(23,00,00,00),B(i_compile ,47),I(3b,01,25,00),B(i_compile ,5),I(23,00,00,00),B(i_compile ,87),I(23,00,00,00),B(i_compile ,46),I(3b,01,25,00),B(i_compile ,4),I(23,00,00,00),B(i_compile ,88),I(23,00,00,00),B(i_compile ,37),I(3b,01,25,00),B(i_compile ,3),I(23,00,00,00),B(i_compile ,89),I(23,00,00,00),B(i_compile ,36),I(3b,01,25,00),B(i_compile ,2),I(23,00,00,00),B(i_compile ,90),I(23,00,00,00),B(i_compile ,22),I(3b,00,3d,00),I(00,ac,00,00)};


  /* Initializations */
  eul_allocate_bytevector( G008533,G008532);
  eul_intern_symbol(sym_8537,"telos");
  eul_intern_symbol(sym_8539,"level1");
  eul_intern_symbol(sym_8541,"math");
  object_class(cons_8540) = eul_static_cons_class;
  eul_car(cons_8540) = sym_8541;
  eul_cdr(cons_8540) = eul_nil;
  object_class(cons_8538) = eul_static_cons_class;
  eul_car(cons_8538) = sym_8539;
  object_class(cons_8536) = eul_static_cons_class;
  eul_car(cons_8536) = sym_8537;
  eul_intern_symbol(sym_8542,"*indent*");
  object_class(str_8543) = eul_static_string_class;
  eul_intern_symbol(sym_8544,"*clean-ups*");
  eul_intern_symbol(sym_8545,"anonymous");
  eul_allocate_bytevector( G008535,G008534);
  eul_intern_symbol(sym_8548,"(method compile-module)");
  eul_allocate_bytevector( G008547,G008546);
  object_class(str_8551) = eul_static_string_class;
  eul_intern_symbol(sym_8552,"_");
  object_class(str_8553) = eul_static_string_class;
  object_class(str_8554) = eul_static_string_class;
  object_class(str_8555) = eul_static_string_class;
  object_class(str_8556) = eul_static_string_class;
  object_class(str_8557) = eul_static_string_class;
  object_class(str_8558) = eul_static_string_class;
  object_class(str_8559) = eul_static_string_class;
  object_class(str_8560) = eul_static_string_class;
  object_class(str_8561) = eul_static_string_class;
  object_class(str_8562) = eul_static_string_class;
  object_class(str_8563) = eul_static_string_class;
  eul_allocate_bytevector( G008550,G008549);
  eul_allocate_bytevector( G008565,G008564);
  object_class(str_8568) = eul_static_string_class;
  object_class(str_8569) = eul_static_string_class;
  object_class(str_8570) = eul_static_string_class;
  object_class(str_8571) = eul_static_string_class;
  object_class(str_8572) = eul_static_string_class;
  object_class(str_8573) = eul_static_string_class;
  object_class(str_8574) = eul_static_string_class;
  object_class(str_8575) = eul_static_string_class;
  eul_allocate_bytevector( G008567,G008566);
  eul_allocate_bytevector( G008577,G008576);
  object_class(str_8580) = eul_static_string_class;
  eul_allocate_bytevector( G008579,G008578);
  object_class(str_8583) = eul_static_string_class;
  eul_allocate_bytevector( G008582,G008581);
  object_class(str_8586) = eul_static_string_class;
  object_class(str_8587) = eul_static_string_class;
  object_class(str_8588) = eul_static_string_class;
  object_class(str_8589) = eul_static_string_class;
  object_class(str_8590) = eul_static_string_class;
  object_class(str_8591) = eul_static_string_class;
  object_class(str_8592) = eul_static_string_class;
  object_class(str_8593) = eul_static_string_class;
  object_class(str_8594) = eul_static_string_class;
  object_class(str_8595) = eul_static_string_class;
  object_class(str_8596) = eul_static_string_class;
  object_class(str_8597) = eul_static_string_class;
  object_class(str_8598) = eul_static_string_class;
  object_class(str_8599) = eul_static_string_class;
  object_class(str_8600) = eul_static_string_class;
  object_class(str_8601) = eul_static_string_class;
  object_class(str_8602) = eul_static_string_class;
  eul_allocate_bytevector( G008585,G008584);
  eul_allocate_bytevector( G008604,G008603);
  object_class(str_8607) = eul_static_string_class;
  eul_allocate_bytevector( G008606,G008605);
  eul_allocate_bytevector( G008609,G008608);
  object_class(str_8612) = eul_static_string_class;
  eul_allocate_bytevector( G008611,G008610);
  eul_allocate_bytevector( G008614,G008613);
  object_class(str_8617) = eul_static_string_class;
  eul_intern_symbol(sym_8618,"*actual-module*");
  object_class(str_8619) = eul_static_string_class;
  eul_allocate_bytevector( G008616,G008615);
  eul_intern_symbol(sym_8622,"compile");
  eul_intern_symbol(sym_8623,"interactive-compile");
  eul_intern_symbol(sym_8624,"string-append-with-space");
  eul_intern_symbol(sym_8625,"check-stop");
  eul_intern_symbol(sym_8626,"create-stand-alone-application");
  eul_intern_symbol(sym_8627,"compile-C-file");
  eul_intern_symbol(sym_8628,"create-C-library");
  eul_intern_symbol(sym_8629,"link");
  eul_intern_symbol(sym_8630,"compile-C-file-aux");
  eul_intern_symbol(sym_8631,"top-level");
  eul_allocate_bytevector( G008621,G008620);

  /* Set local bindings */
  {
    int i;
    for (i = 2; i < 11; i++)
      i_compile_bindings[i] = eul_nil;
  }

  i_compile_bindings[ 11] = G008533;
  i_compile_bindings[ 12] = sym_8537;
  i_compile_bindings[ 13] = sym_8539;
  i_compile_bindings[ 14] = sym_8541;
  i_compile_bindings[ 15] = cons_8536;
  i_compile_bindings[ 16] = sym_8542;
  i_compile_bindings[ 17] = str_8543;
  i_compile_bindings[ 18] = sym_8544;
  i_compile_bindings[ 19] = sym_8545;
  i_compile_bindings[ 20] = G008535;
  i_compile_bindings[ 21] = sym_8548;
  i_compile_bindings[ 22] = G008547;
  i_compile_bindings[ 23] = str_8551;
  i_compile_bindings[ 24] = sym_8552;
  i_compile_bindings[ 25] = str_8553;
  i_compile_bindings[ 26] = str_8554;
  i_compile_bindings[ 27] = str_8555;
  i_compile_bindings[ 28] = str_8556;
  i_compile_bindings[ 29] = str_8557;
  i_compile_bindings[ 30] = str_8558;
  i_compile_bindings[ 31] = str_8559;
  i_compile_bindings[ 32] = str_8560;
  i_compile_bindings[ 33] = str_8561;
  i_compile_bindings[ 34] = str_8562;
  i_compile_bindings[ 35] = str_8563;
  i_compile_bindings[ 36] = G008550;
  i_compile_bindings[ 37] = G008565;
  i_compile_bindings[ 38] = str_8568;
  i_compile_bindings[ 39] = str_8569;
  i_compile_bindings[ 40] = str_8570;
  i_compile_bindings[ 41] = str_8571;
  i_compile_bindings[ 42] = str_8572;
  i_compile_bindings[ 43] = str_8573;
  i_compile_bindings[ 44] = str_8574;
  i_compile_bindings[ 45] = str_8575;
  i_compile_bindings[ 46] = G008567;
  i_compile_bindings[ 47] = G008577;
  i_compile_bindings[ 48] = str_8580;
  i_compile_bindings[ 49] = G008579;
  i_compile_bindings[ 50] = str_8583;
  i_compile_bindings[ 51] = G008582;
  i_compile_bindings[ 52] = str_8586;
  i_compile_bindings[ 53] = str_8587;
  i_compile_bindings[ 54] = str_8588;
  i_compile_bindings[ 55] = str_8589;
  i_compile_bindings[ 56] = str_8590;
  i_compile_bindings[ 57] = str_8591;
  i_compile_bindings[ 58] = str_8592;
  i_compile_bindings[ 59] = str_8593;
  i_compile_bindings[ 60] = str_8594;
  i_compile_bindings[ 61] = str_8595;
  i_compile_bindings[ 62] = str_8596;
  i_compile_bindings[ 63] = str_8597;
  i_compile_bindings[ 64] = str_8598;
  i_compile_bindings[ 65] = str_8599;
  i_compile_bindings[ 66] = str_8600;
  i_compile_bindings[ 67] = str_8601;
  i_compile_bindings[ 68] = str_8602;
  i_compile_bindings[ 69] = G008585;
  i_compile_bindings[ 70] = G008604;
  i_compile_bindings[ 71] = str_8607;
  i_compile_bindings[ 72] = G008606;
  i_compile_bindings[ 73] = G008609;
  i_compile_bindings[ 74] = str_8612;
  i_compile_bindings[ 75] = G008611;
  i_compile_bindings[ 76] = G008614;
  i_compile_bindings[ 77] = str_8617;
  i_compile_bindings[ 78] = sym_8618;
  i_compile_bindings[ 79] = str_8619;
  i_compile_bindings[ 80] = G008616;
  i_compile_bindings[ 1] = eul_nil;
  i_compile_bindings[ 81] = sym_8622;
  i_compile_bindings[ 82] = sym_8623;
  i_compile_bindings[ 83] = sym_8624;
  i_compile_bindings[ 84] = sym_8625;
  i_compile_bindings[ 85] = sym_8626;
  i_compile_bindings[ 86] = sym_8627;
  i_compile_bindings[ 87] = sym_8628;
  i_compile_bindings[ 88] = sym_8629;
  i_compile_bindings[ 89] = sym_8630;
  i_compile_bindings[ 90] = sym_8631;
  eul_allocate_lambda( i_compile_bindings[0], "initialize-i-compile", 0, G008621);

  }
}


/* eof */