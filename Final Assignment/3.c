#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<strings.h>
#include "3.h"

int main(){

    Map * mp;
    mp = (Map*) malloc(sizeof(Map));
    init(mp);
    printf("size = %d", mp->size);


    char ** words;
    words = (char **) malloc(MAX_SIZE*sizeof(char*));

    for (int i = 0; i<MAX_SIZE; i++){
        words[i] = (char*) malloc(WORD_BUFFER_SIZE*sizeof(char));
    }

    int counter = 0;

    FILE *textfile;
    char line[WORD_BUFFER_SIZE];

    textfile = fopen("file.txt", "r");
    if(textfile == NULL)
        return 1;

    printf("Input\n-----\n");
    while(fgets(line, WORD_BUFFER_SIZE, textfile)){
        strcpy(words[counter], line);
        printf("%s ", line);
        counter++;
    }

    int i, j;
    for (i = 0; i<counter; i++){
        int times = 1;
        for (j = 0; j<counter; j++){

            if(i == j) continue;

            if(strcmp(words[i], words[j]) == 0){
                times++;
            }
        }

        set(mp, words[i], times);
    }


    print(mp);


    fclose(textfile);

    return 0;
}
