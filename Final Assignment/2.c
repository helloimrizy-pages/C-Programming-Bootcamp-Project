#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<strings.h>


#define WORD_BUFFER_SIZE 32
#define MAX_SIZE 100

typedef struct Pair{
    char str[WORD_BUFFER_SIZE];
    int num;
} Pair;

typedef struct Map{
    int size;
    Pair * items;
} Map;

void init(Map * mp){
    mp->size = 0;
    mp->items = NULL;
}

void dest(Map * mp){
    if(mp->items != NULL){
        free(mp->items);
        init(mp);
    }
}

Pair* find(Map * mp, char * str){
    int i;
    Pair * p = NULL;


    for (i = 0; i< mp->size; i++){
        int len;
        char * c= mp->items[i].str;
        len = strcmp(c, str);

        if(len == 0){
            p = &mp->items[i]; // Issue
        }
    }

    return p;
}


void set(Map * mp, char * str, int num){

    Pair p;
    p.num = num;
    strcpy(p.str, str);


    Pair * found_p = find(mp, str);

    if(mp->items == NULL)
        init(mp);

    if(found_p == NULL){
        Map * old_map = mp;
        dest(mp);
        mp->size = old_map->size;
        mp->size++;
        mp->items = (Pair*) malloc(mp->size*sizeof(Pair*));

        int i;
        for (i = 0; i<old_map->size; i++){
            mp->items[i] = old_map->items[i];
        }

        mp->items[i] = p;

        dest(old_map);
    } else{
        found_p->num = p.num;
        strcpy(found_p->str, p.str);
    }
}

int get(Map * mp, char * str){
    Pair * p = find(mp, str);

    if(p == NULL){
        set(mp, str, 0);
        return 0;
    }

    return p->num;
}

void print(Map * mp){
    printf("\nOutput\n------\n");
    int i;
    for (i = 0; i<mp->size; i++){
        printf("%s -> %d\n", mp->items[i].str, mp->items[i].num);
    }
}

int main(){

    Map * mp;
    mp = (Map*) malloc(sizeof(Map));
    init(mp);

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
