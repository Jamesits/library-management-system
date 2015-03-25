//
//  debug.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//  Provides various debug function.
//  This module should be independent to any other modules in the same project.

#ifndef __library_management_system__debug__
#define __library_management_system__debug__

#include <stdio.h>
#include <stdlib.h>
#include "exceptions.h"

// enum of error levels.
enum {
    E_DEBUG,
    E_INFO,
    E_WARNING,
    E_ERROR,
    E_CRITICAL,
};
// the coresponding text.
static const char *eText[] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR",
    "CRITICAL",
};

#ifdef DEBUG
#define E_DEFAULT_ERROR_LEVEL E_DEBUG
#else
#define E_DEFAULT_ERROR_LEVEL E_ERROR
#endif

// Values to determine if the function has been executed without error
typedef int FUNCTION_RESULT;
enum {FSUCCESS, FFAILURE};

// Determine how much log to print out
extern int e_minimal_error_level;

// Determine whether to print out error according to current error level settings.
FUNCTION_RESULT debug_log(int error_level, char* const content);

// I'm lazy!
#define ELOG debug_log


#endif /* defined(__library_management_system__debug__) */
