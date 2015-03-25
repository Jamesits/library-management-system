//
//  controller.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//  Controller of the MVC model.
//  Pass data between database module and interface, and contain all program logic.

#ifndef __library_management_system__controller__
#define __library_management_system__controller__

#include <stdio.h>
#include "../debug/debug.h"

// initialize the controller.
// will be invoked on program launch.
// now ui and database is ready.
FUNCTION_RESULT initcontroller();

FUNCTION_RESULT quitcontroller();

FUNCTION_RESULT main_loop();

#endif /* defined(__library_management_system__controller__) */
