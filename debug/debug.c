//
//  debug.c
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//

#include "debug.h"

int e_minimal_error_level = (E_DEFAULT_ERROR_LEVEL);

FUNCTION_RESULT debug_log(int error_level, char* const content) {
    if (error_level >= e_minimal_error_level) {
        fprintf(stderr, "[%s]%s\n", eText[error_level], content);
    }
    
    return FSUCCESS;
}