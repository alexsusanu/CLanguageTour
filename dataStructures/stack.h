//
//  stack.h
//  stack
//
//  Created by alex on 23/12/2021.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>


struct stack{
    int size;
    int* data;
    int capacity;
};

struct stack* createStack(int capacity);
void push(struct stack* myStack, int data);
int pop(struct stack* myStack);

#endif /* stack_h */
