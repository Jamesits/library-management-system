//
//  types.c
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//

#include "types.h"

bool is_book_equal(book* b1, book* b2) {
    if (strcmp(b1->isbn, b2->isbn) == 0)
        return true;
    else
        return false;
}