### Copyright 2010 Henry G. Weller
###-----------------------------------------------------------------------------
##  This file is part of
### ---                                     EuLisp
###-----------------------------------------------------------------------------
##
##  Eu2C is free software: you can redistribute it and/or modify it under the
##  terms of the GNU General Public License version 2 as published by the Free
##  Software Foundation.
##
##  Eu2C is distributed in the hope that it will be useful, but WITHOUT ANY
##  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
##  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
##  details.
##
##  You should have received a copy of the GNU General Public License along with
##  this program.  If not, see <http://www.gnu.org/licenses/>.
##
###-----------------------------------------------------------------------------
### Title: LaTeX EuLisp definition document Makefile
###  Maintainer: Henry G. Weller
###  Description:
##                    Programming Language EuLisp
##                            Version 0.99
##                            Working Draft
###-----------------------------------------------------------------------------
DOCUMENT = eulisp

###-----------------------------------------------------------------------------
### Source files
###-----------------------------------------------------------------------------
TEX_FILES = \
    bibliography.tex  eulisp.tex        modules.tex    level-0.tex \
    float.tex         mop.tex           syntax.tex     character.tex \
    foreword.tex      table.tex         collection.tex formatted-io.tex \
    number.tex        telos-0.tex       condition.tex  fpi.tex \
    prim.tex          telos-1.tex       control-0.tex  terms.tex \
    dynamic.tex       integer.tex       stream.tex     thread.tex \
    convert.tex       introduction.tex  string.tex     vector.tex \
    copy.tex          list.tex          structure.tex  compare.tex \
    double.tex        mathlib.tex       symbol.tex     modules-1.tex \
    level-1.tex       exit-1.tex

STY_FILES = eulisp.sty

4HT_FILES = isov2.4ht

SOURCE_FILES = $(TEX_FILES) $(STY_FILES) Makefile

SECTION_IND_FILES = \
    function.ind      special.ind       generic.ind \
    condition.ind     constant.ind      class.ind      module.ind

IND_FILES = $(SECTION_IND_FILES) general.ind
# keyword.ind

IND_4DX = ${IND_FILES:%.ind=%.4dx}

HTML_DIR = html
HTML1_DIR = html1

###-----------------------------------------------------------------------------
### Generate the PDF file
###-----------------------------------------------------------------------------
.PHONY: all
all: pdf html

.PHONY: all1
all1: pdf html html1

.PHONY: pdf
pdf: $(DOCUMENT).pdf
$(DOCUMENT).pdf: $(SOURCE_FILES)
	$(MAKE) clean
	$(MAKE) index
	pdflatex $(DOCUMENT)
	pdflatex $(DOCUMENT)
	$(MAKE) index
	pdflatex $(DOCUMENT)

.PHONY: html
html: $(HTML_DIR)/$(DOCUMENT).html
$(HTML_DIR)/$(DOCUMENT).html: $(SOURCE_FILES) $(4HT_FILES)
	@mkdir -p $(HTML_DIR)
	xhlatex $(DOCUMENT) "html,1,next,noannex" "" "-d./$(HTML_DIR)/"
	xhlatex $(DOCUMENT) "html,1,next,noannex" "" "-d./$(HTML_DIR)/"
	$(MAKE) tex4htindex
	xhlatex $(DOCUMENT) "html,1,next,noannex" "" "-d./$(HTML_DIR)/"

.PHONY: html1
html1: $(HTML1_DIR)/$(DOCUMENT).html
$(HTML1_DIR)/$(DOCUMENT).html: $(SOURCE_FILES) $(4HT_FILES)
	@mkdir -p $(HTML1_DIR)
	xhlatex $(DOCUMENT) "html" "" "-d./$(HTML1_DIR)/"
	xhlatex $(DOCUMENT) "html" "" "-d./$(HTML1_DIR)/"
	$(MAKE) tex4htindex
	xhlatex $(DOCUMENT) "html" "" "-d./$(HTML1_DIR)/"

.PHONY: undefined
undefined: $(DOCUMENT).pdf
	grep "undefined" eulisp.log \
	| awk '{print $$5}' | sort | uniq > undefined.txt

###-----------------------------------------------------------------------------
### Generate the index files
###-----------------------------------------------------------------------------
.PHONY: index
index: $(IND_FILES)

.PHONY: tex4htindex
tex4htindex: $(IND_FILES) $(IND_4DX)

ifeq ($(MAKECMDGOALS),index)

%.ind : %.idx
	makeindex -s iso/iso.ist -o $@ $<

%.ind :
	touch $@

else

%.4dx : %.idx
	tex "\def\filename{{$*}{idx}{4dx}{ind}} \input  idxmake.4ht"

%.ind : %.4dx
	makeindex -o $@ $<

endif

hypersed: general.ind
	@grep yhbLNK general.ind | \
	sed 's% *\\item {\\tt \([^}]*\)}.* \\yhbLNK{hyperem}{\([^}]*\)}{\([^}]*\)}{}{[^}]*}.*%s\%=\1=\%\[\[file:EuLisp-0.991/html/\2#\3\]\[=\1=\]\]\%%' |\
sed -e 's/\*/\\\*/g' > hypersed

###-----------------------------------------------------------------------------
.PHONY: clean
clean:
	@rm -f *.{aux,bbl,blg,dvi,idx,ilg,ind,lof,log,lot,toc,4ct,4tc,idv,in}
	@rm -f *.{lg,tmp,out,xref,html,css,fls,cut}
	@rm -f *.{png,4dx,4ix}

.PHONY: distclean
distclean: clean
	@rm -f $(DOCUMENT).pdf
	@rm -rf $(HTML_DIR) $(HTML1_DIR)

###-----------------------------------------------------------------------------
