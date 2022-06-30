#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<strings.h>


#define WORD_BUFFER_SIZE 32

typedef struct Pair{
    char str[WORD_BUFFER_SIZE];
    unsigned int num;
};

typedef struct Map{
    unsigned int size;
    Pair * items;
};

void init(Map mp){
    mp.size = 0;
    mp.items = NULL;
}

void dest(Map mp){
    if(mp.items != NULL){
        free(mp.items);
        init(mp);
    }
}

Pair find(Map mp, char * str){
    int i;
    for (i = 0; i< mp.size; i++){
        if(strcmp(str, mp.items[i].str) == 0){
                return &mp.items[i]; // Issue
        }
    }

    return NULL;
}


void set(Map mp, char * str, int num){
    Pair p;
    p.num = num;
    p.str = str;

    if(find(mp, str) == NULL){
        *(mp.items + mp.size) = p;
        mp.size++;
    } else{
        int index = exist(mp, str);
        mp.items[index].num++; // Issue
    }

}

int get(Map mp, char * str){
    Pair p = find(mp, str);

    if(p == NULL){
        set(mp, str, 0);
        return 0;
    }

    return p.num;
}

void print(Map mp){
    int i;
    for (i = 0; i<mp.size; i++){
        printf("%s -> %d\n", mp.items[i].str, num);
    }
}
