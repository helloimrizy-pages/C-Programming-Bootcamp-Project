#include "rle.h"

int const LEN = 123; // Length of English Alphabet

// Encoded function definition
Encoded * encode(char * s){
    int counter[LEN];
    memset(counter, 0, sizeof(counter));

    int i = 0;
    while(s[i] != '\0'){
      
        counter[s[i]]++;
        i++;
    }

    // Dynamic memory allocation
    // In order to do not acess random memory address
    Encoded * encode_ptr = NULL;
    encode_ptr = (Encoded*) malloc(sizeof(Encoded)); // Allocate memory for Encoded member
    encode_ptr->arr = NULL;
    encode_ptr->arr = (Pair*) malloc(LEN*sizeof(Pair)); // For array of Pairs
    encode_ptr->length = 0; // We don't know the exact number of elements
    int pos = 0;

    for (i = 'a'; i<='z'; i++){
         if(counter[i] > 0){
             // Create a pair which will be added to our pointer array of Pairs
             Pair pair;
             pair.c = (char) i; // Convert integer to char
             pair.n = counter[i]; // Number of repetitions

             // Insert to pointer array
             //*(encode_ptr->arr + pos) = pair;
             encode_ptr->arr[pos] = pair;
             pos++;

            printf("%d%c", pair.n, pair.c);

         }
    }

    encode_ptr->length = pos;
    return encode_ptr;
}

char * decode (Encoded encode_ptr){
    char * str_decoded = NULL;
    str_decoded = malloc(sizeof(char*));
    int x = 0;
	int j;
	int i;
	
    for (j = 0; j<encode_ptr.length; j++){
        for (i = 0; i<encode_ptr.arr[j].n; i++){
            char c = encode_ptr.arr[j].c;
            *(str_decoded + x) = c;
            printf("%c", c);
        }
    }

    return str_decoded;
}

bool contains_lowercase(char * s){
    bool flag = true;
    int x;
    
    for (x = 0; s[x] != '\0'; x++){
        if(!islower(s[x])){
            flag = false;
        }
    }
    return flag;
}
