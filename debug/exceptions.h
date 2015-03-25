//
//  exceptions.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//
//  Create breakpoints, process exceptions and put everything back to normal. Superhero.

#ifndef __library_management_system__exceptions__
#define __library_management_system__exceptions__

#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>
#include "debug.h"

extern int *errorcodes;
extern jmp_buf *envs;

int set_break_point();
int get_break_point();

// In this way you can write:
// try {
//      // do something,
//      // and if something is wrong,
//      throw();
// }
// catch {
//      // then process exceptions here.
// }
#define try if(!set_break_point())
#define throw(ERRORLEVEL, REASON) get_break_point(ERRORLEVEL, REASON);
#define catch else

#endif /* defined(__library_management_system__exceptions__) */
