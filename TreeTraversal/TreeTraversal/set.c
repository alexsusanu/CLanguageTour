//
//  set.c
//  TreeTraversal
//
//  Created by alex on 13/01/2022.
//
#include <stdlib.h>

#include "set.h"

struct set* createSet(){
    struct set* newSet = malloc(sizeof(struct set));
    newSet->data = malloc(sizeof(long) * 100);
    newSet->capacity = 100;
    newSet->size = 0;
    return newSet;
}


bool checkIfNumberExist(struct set* mySet, long data){
    for(int i = 0; i < mySet->size; i++){
        if(data == mySet->data[i]){
            return true;
        }
    }
    return false;
}

void insertIntoSet(struct set* mySet, long data){
    if(checkIfNumberExist(mySet, data) == true){
        return;
    }else{
        mySet->data[mySet->size] = data;
        mySet->size = mySet->size + 1;
    }
}
