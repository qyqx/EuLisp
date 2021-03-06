/// Copyright 1997 J. Garcia & University of Bath
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
/// Title: String operations
///  Library: tcltk
///  Authors: J. Garcia
///  Maintainer: Henry G. Weller
///-----------------------------------------------------------------------------
#include "StrOperations.h"
#include "globalvariables.h"

int ParseArguments2
(
    struct infoargs *infoArgs,
    const char *command,
    const char *name,
    LispRef listArgs
)
{
    int argc = (listArgs != eul_nil)? eul_fpi_as_c_int(eul_car(listArgs)) : 0;
    const char **argv = (const char **)gc_malloc((argc + 2)*sizeof(char*));
    argv[0] = command;
    argv[1] = name;

    int i = 2;
    if (argc != 0)
    {
        listArgs = eul_cdr(listArgs);
        while (listArgs != eul_nil)
        {
            argv[i++] = eul_string_as_c_string(eul_car(listArgs));
            listArgs = eul_cdr(listArgs);
        }
    }

    infoArgs->argc = argc + 2;
    infoArgs->argv = argv;

    return i;
}


int ParseArguments3
(
    struct infoargs *infoArgs,
    const char *command,
    const char *name,
    const char *name1,
    LispRef listArgs
)
{
    int argc = (listArgs != eul_nil) ? eul_fpi_as_c_int(eul_car(listArgs)) : 0;
    const char **argv = (const char **)gc_malloc((argc + 3)*sizeof(char*));
    argv[0] = command;
    argv[1] = name;
    argv[2] = name1;

    int i = 3;
    if (argc != 0)
    {
        listArgs = eul_cdr(listArgs);

        while (listArgs != eul_nil)
        {
            argv[i++] = eul_string_as_c_string(eul_car(listArgs));
            listArgs = eul_cdr(listArgs);
        }
    }

    infoArgs->argc = argc + 3;
    infoArgs->argv = argv;

    return i;
}


int ParseArguments4
(
    struct infoargs *infoArgs,
    const char *command,
    const char *name,
    const char *name1,
    const char *name2
)
{
    int argc = 4;
    const char **argv = (const char **)gc_malloc(argc*sizeof(char*));
    argv[0] = command;
    argv[1] = name;
    argv[2] = name1;
    argv[3] = name2;

    infoArgs->argc = argc;
    infoArgs->argv = argv;

    return argc;
}


///-----------------------------------------------------------------------------
