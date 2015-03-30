//
//  main.c
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//  Entry point of the entire program. Do the initialization, start program loop.

#include <stdio.h>
#include <stdlib.h>
#include "misc.h"
#include "debug/debug.h"
#include "types.h"
#include "utils/arrayutils.h"
#include "controller/controller.h"
#include "interface/interface.h"
#include "database/database.h"

// Process arguments, set all environment variables.
FUNCTION_RESULT proc_args(int argc, const char *argv[]) {
    // TODO: process arguments or somply return FSUCCESS and quit.
    // Catch exceptions WITHIN the function.
    
    return FSUCCESS;
}

// main entry point
int main(int argc, const char * argv[]) {
    // process arguments
    proc_args(argc, argv);
    
    // initialization
    ELOG(E_INFO, M_PROGRAM_NAME " Version " M_VERSION " by " M_AUTHOR ", " M_RELEASE_DATE);
    try {
        if (initui() == FFAILURE) throw(E_CRITICAL, "UI initialization failed");
        if (initdb() == FFAILURE) throw(E_CRITICAL, "Database initialization failed");
        if (initcontroller() == FFAILURE) throw(E_CRITICAL, "Controller initialization failed");
    } catch {
        return EXIT_FAILURE;
    };
    
    // let's go!
    main_loop();
    
    ELOG(E_INFO, "Saving data...");
    try {
        if (quitcontroller() == FFAILURE) throw(E_CRITICAL, "Controller initialization failed");
        if (quitdb() == FFAILURE) throw(E_CRITICAL, "Database initialization failed");
        if (quitui() == FFAILURE) throw(E_CRITICAL, "UI initialization failed");
    } catch {
        return EXIT_FAILURE;
    };
    
    ELOG(E_INFO, "Program finished successfully.");
    return EXIT_SUCCESS;
}

