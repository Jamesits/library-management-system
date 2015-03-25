//
//  interface.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//  Draw interface and interact with user.

#ifndef __library_management_system__interface__
#define __library_management_system__interface__

#include <stdio.h>
#include "../debug/debug.h"

typedef struct s_menu {
    unsigned char id;
    char* display_name;
    FUNCTION_RESULT (*func)();
} menu;

// display_menu:
// display an array of menu list in a pre-defined way, allow user to choose one, and invoke the correct function.
// input: an array of struct menu
// output: current state
FUNCTION_RESULT display_menu(menu *m);

FUNCTION_RESULT initui();

FUNCTION_RESULT quitui();

#endif /* defined(__library_management_system__interface__) */
