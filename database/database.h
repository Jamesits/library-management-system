//
//  database.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//  Read and write database, do all the data manipulation.

#ifndef __library_management_system__database__
#define __library_management_system__database__

#include <stdio.h>
#include "../debug/debug.h"
#include "../types.h"

// default database path
#define D_DEFAULT_BOOK_DATABASE_PATH ".\\books.tdb"
#define D_DEFAULT_COLLECTION_DATABASE_PATH ".\\collection.tdb"

// an array of all the books we know
extern book* book_set;

// an array of what book we have, and how much are they
extern collection* collections;

// Books information database
// if the path is null, use default path.
FUNCTION_RESULT read_book_db(char *path);

FUNCTION_RESULT save_book_db(char *path);

// Book collection information database
// if the path is null, use default path.
FUNCTION_RESULT read_collection_db(char *path);

FUNCTION_RESULT save_collection_db(char *path);

// initialize the database.
// will be invoked on program launch.
// ui is ready.
FUNCTION_RESULT initdb();

FUNCTION_RESULT quitdb();

#endif /* defined(__library_management_system__database__) */
