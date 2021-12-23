//
//  queue.h
//  ques
//
//  Created by alex on 23/12/2021.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>

struct node{
    int data;
    struct node* next;
};

struct queue{
    struct node* head;
    struct node* tail;
};

struct node* createNode(int data);
struct queue* createQueue(void);
/// pop from queue
int dequeue(struct queue* myQueue);
/// insert into queue
void enqueue(struct queue* myQueue, int data);
#endif /* queue_h */
