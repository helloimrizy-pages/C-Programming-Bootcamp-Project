#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>
#include <stdbool.h>

#ifndef _RLE_H
#define _RLE_H


// Member of Pair
typedef struct Pair{
    char c;
    int n;
} Pair;

// Member of Encoded
typedef struct Encoded{
    int length;
    Pair * arr; // We'll use dynamic memory handling
} Encoded;

// Declaration of functions
Encoded * encode(char * s);
char * decode (Encoded encode_ptr);
bool contains_lowercase(char * s);

#endif
