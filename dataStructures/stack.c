//
//  stack.c
//  stack
//
//  Created by alex on 23/12/2021.
//

#include <stdlib.h>
#include "stack.h"

struct stack* createStack(int capacity){
    struct stack* newStack = malloc(sizeof(struct stack));
    newStack->data = malloc(sizeof(int) * capacity);
    newStack->size = 0;
    newStack->capacity = capacity;
    return newStack;
}

void push(struct stack* myStack, int data){
    myStack->data[myStack->size] = data;
    myStack->size += 1;
    if(myStack->size == myStack->capacity){
        myStack->capacity *= 2;
        myStack->data = realloc(myStack->data, sizeof(int) * myStack->capacity);
    }
}

int pop(struct stack* myStack){ // 4
    myStack->size -= 1; // 3
    return myStack->data[myStack->size];
}
