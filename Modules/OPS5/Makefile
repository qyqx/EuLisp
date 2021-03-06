### Copyright 1997 A. Kind & University of Bath
### Copyright 2010 Henry G. Weller
###-----------------------------------------------------------------------------
##  This file is part of
### ---                         EuLisp System 'Youtoo'
###-----------------------------------------------------------------------------
##
##  Youtoo is free software: you can redistribute it and/or modify it under the
##  terms of the GNU General Public License version 2 as published by the Free
##  Software Foundation.
##
##  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
##  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
##  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
##  details.
##
##  You should have received a copy of the GNU General Public License along with
##  this program.  If not, see <http://www.gnu.org/licenses/>.
##
###-----------------------------------------------------------------------------

###-----------------------------------------------------------------------------
### EuLisp OPS5 rule-based system Makefile
###-----------------------------------------------------------------------------
ARCH := $(shell uname -m)
include ../../Lib.$(ARCH)/Makefile

###-----------------------------------------------------------------------------
### Module name
###-----------------------------------------------------------------------------
MODULE = ops5

###-----------------------------------------------------------------------------
### Library target files
###-----------------------------------------------------------------------------
MODULE_LIB = lib$(MODULE).a
MODULE_LIB_I = $(U2_C_DIR)/lib$(MODULE).i

EUL_MODULE_LIB = $(EUL_LIB_DIR)/$(MODULE_LIB)
EUL_MODULE_LIB_I = $(EUL_LIB_DIR)/$(MODULE_LIB_I)

###-----------------------------------------------------------------------------
### Source files
###-----------------------------------------------------------------------------
MODULE_EM = $(MODULE).em
MODULE_C = $(U2_C_DIR)/$(MODULE).c
MODULE_O = $(ARCH_DIR)/$(U2_C_DIR)/$(MODULE).o

###-----------------------------------------------------------------------------
### Test source files
###-----------------------------------------------------------------------------
TEST_EM = test1.em
TEST_EXE = $(TEST_EM:%.em=$(ARCH_DIR)/%)

###-----------------------------------------------------------------------------
### Build library
###-----------------------------------------------------------------------------
.PHONY: lib
lib: $(EUL_MODULE_LIB)

$(EUL_MODULE_LIB) $(EUL_MODULE_LIB_I): $(MODULE_EM) $(OTHER_EM) | $(ARCH_DIR)/.
	$(U2) $(U2FLAGS) -ar $(MODULE_EM) --object-dir $(ARCH_DIR) -l level-0 --recompile
	mv -f $(ARCH_DIR)/$(MODULE_LIB) $(EUL_MODULE_LIB)
	mv -f $(MODULE_LIB_I) $(EUL_MODULE_LIB_I)

###-----------------------------------------------------------------------------
### Test
###-----------------------------------------------------------------------------
$(ARCH_DIR)/% : %.em $(EUL_MODULE_LIB) $(EUL_MODULE_LIB_I) | $(ARCH_DIR)/.
	$(U2) $(U2FLAGS) $< --object-dir $(ARCH_DIR) -l level-0 -l $(MODULE) --no-recompile

.PHONY: test
test:  $(TEST_EXE)
	$(TEST_EXE) Mab.l

###-----------------------------------------------------------------------------
### Misc
###-----------------------------------------------------------------------------
.PHONY: README
README: README.html

.PHONY: clean
clean:
	@rm -rf $(ARCH_DIR)

.PHONY: distclean
distclean: clean
	@rm -rf platforms $(U2_C_DIR)
	@rm -f $(EUL_MODULE_LIB) $(EUL_MODULE_LIB_I)

###-----------------------------------------------------------------------------
