//
//  exceptions.c
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//

#include "exceptions.h"

// an stack of errorcodes
int *errorcode;

jmp_buf *envs;

int set_break_point() {
    jmp_buf *env = (jmp_buf *)malloc(sizeof(jmp_buf));
    if (!setjmp(*env)) {
        // TODO: push env to envs stack
        return 0;
    } else {
        return 1;
    }
    
}

int get_break_point(int errorlevel, char *reason) {
    ELOG(errorlevel, reason);
    jmp_buf *env = (jmp_buf *)malloc(sizeof(jmp_buf));
    // TODO: pop env out
    longjmp(*env, 0);
}
