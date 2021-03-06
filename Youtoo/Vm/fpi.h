/// Copyright 1997 A. Kind & University of Bath
/// Copyright 2010 Henry G. Weller
///-----------------------------------------------------------------------------
//  This file is part of
/// ---                         EuLisp System 'Youtoo'
///-----------------------------------------------------------------------------
//
//  Youtoo is free software: you can redistribute it and/or modify it under the
//  terms of the GNU General Public License version 2 as published by the Free
//  Software Foundation.
//
//  Youtoo is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
//  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
//  details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program.  If not, see <http://www.gnu.org/licenses/>.
//
///-----------------------------------------------------------------------------
/// Title: Fixed precision integers
///  Library: eulvm (Bytecode Interpreter -- Eutopia)
///  Authors: Keith Playford, Andreas Kind
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#ifndef FPI_H
#define FPI_H

///-----------------------------------------------------------------------------
/// Initialization
///-----------------------------------------------------------------------------
extern void eul_initialize_fpi();

///-----------------------------------------------------------------------------
/// Fpi allocation
///-----------------------------------------------------------------------------
#define fpi_value(x) (((ptrInt) x) >> TAG_BITS)
#define eul_fpi_as_c_int(x) fpi_value(x)
#define eul_bool_as_c_bool(x) (eul_null(x) ? false : true)
#define c_int_as_eul_fpi(x) ((LispRef) ((((ptrInt)(x)) << TAG_BITS)|FPI_TAG))
#define c_bool_as_eul_bool(x) ((bool) x ? eul_true : eul_nil)
#define eul_allocate_int(loc, x) (loc) = c_int_as_eul_fpi(x)

// Backward compatability ...
#define eul_allocate_fpi(loc, x) (loc) = c_int_as_eul_fpi(x)

#define MAX_FPI ((ptrInt)0x1fffffff)
#define fpi_value_overflow(n) (top_bit_set(((ptrInt)n) ^ (((ptrInt)n)<<1)))
#define top_bit_set(n) (((ptrInt)(n)) < 0)

///-----------------------------------------------------------------------------
#endif // FPI_H
///-----------------------------------------------------------------------------
