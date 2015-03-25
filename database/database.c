//
//  database.c
//  library-management-system
//
//  Created by James Swineson on 3/25/15.
//  Copyright (c) 2015 James Swineson. All rights reserved.
//

#include "database.h"

book *bookset;
collection *collections;

FUNCTION_RESULT read_book_db(char *path) {
    if (path == NULL) path = D_DEFAULT_BOOK_DATABASE_PATH;
    // TODO
    
    return FSUCCESS;
}

FUNCTION_RESULT save_book_db(char *path) {
    if (path == NULL) path = D_DEFAULT_BOOK_DATABASE_PATH;
    // TODO
    
    return FSUCCESS;
}

FUNCTION_RESULT read_collection_db(char *path) {
    if (path == NULL) path = D_DEFAULT_COLLECTION_DATABASE_PATH;
    // TODO
    
    return FSUCCESS;
}

FUNCTION_RESULT save_collection_db(char *path) {
    if (path == NULL) path = D_DEFAULT_COLLECTION_DATABASE_PATH;
    // TODO
    
    return FSUCCESS;
}


FUNCTION_RESULT initdb() {
    ELOG(E_INFO, "Reading database...");
    try {
        if (read_book_db(NULL) != FSUCCESS) throw(E_ERROR, "Read book database error");
    } catch {
        // TODO: Do something when database error, and if fixed, ignore the following "return" statement.
        
        return FFAILURE;
    }
    
    try {
        if (read_collection_db(NULL) != FSUCCESS) throw(E_ERROR, "Read collection database error");
    } catch {
        // TODO: Do something when database error, and if fixed, ignore the following "return" statement.
        
        return FFAILURE;
    }
    
    return FSUCCESS;
}

FUNCTION_RESULT quitdb() {
    ELOG(E_INFO, "Writing database...");
    try {
        if (save_collection_db(NULL) != FSUCCESS) throw(E_ERROR, "Read book database error");
    } catch {
        // TODO: Do something when database error, and if fixed, ignore the following "return" statement.
        
        return FFAILURE;
    }
    try {
        if (save_book_db(NULL) != FSUCCESS) throw(E_ERROR, "Read book database error");
    } catch {
        // TODO: Do something when database error, and if fixed, ignore the following "return" statement.
        
        return FFAILURE;
    }
    
    return FSUCCESS;
}