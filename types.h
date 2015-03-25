//
//  types.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//  There are all the #define's, consts, and the base data struct.

#ifndef library_management_system_types_h
#define library_management_system_types_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "debug/debug.h"

typedef struct s_Book {
    char isbn[14];
    char *title;
    char **authors;
    char *publisher;
    unsigned short publish_year;
    char **tags;
} book;

typedef struct s_Collection {
    char isbn[14];
    unsigned int number;    // how much you have
    bool is_available;
} collection;

bool is_book_equal(book* b1, book* b2);

#endif
