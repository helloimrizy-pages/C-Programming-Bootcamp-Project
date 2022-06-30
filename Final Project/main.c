#include <stdio.h>
#include "rle.h"

int main()
{
    char * s = NULL;

    s = (char*) malloc(sizeof(char*));
    
    // Ask from the user
    printf("input: ");
    scanf("%s", s);

    if(!contains_lowercase(s)){
        printf("Bad input!\n");
        exit(0);
    }

    printf("output: ");
    Encoded * encode_ptr = NULL;
    encode_ptr = encode(s);
    printf(" -> ");
    decode(*encode_ptr);

    free(encode_ptr); // Dealocate the memory

    return 0;
}
