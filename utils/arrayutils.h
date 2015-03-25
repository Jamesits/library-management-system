//
//  arrayutils.h
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//
//
//  Functions to manage dymanic arrays easily.

#ifndef __library_management_system__arrayutils__
#define __library_management_system__arrayutils__

#include <stdio.h>
#include <stdlib.h>
#include "../debug/debug.h"

int **(alloc_2d_array)(unsigned int m, unsigned int n) {
    int **arr = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        arr[i] = (int *)malloc(n * sizeof(int));
        
    return arr;
}

void (free_2d_array)(int** ptr) {
    for (int i = 0; i < sizeof(ptr) / sizeof(*ptr); i++) {
        free(ptr[i]);
    }
    free(ptr);
}

#endif /* defined(__library_management_system__arrayutils__) */
