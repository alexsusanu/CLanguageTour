//
//  queue.h
//  ques
//
//  Created by alex on 23/12/2021.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include <stdbool.h>

struct node{
    long data;
    struct node* next;
};

struct queue{
    struct node* head;
    struct node* tail;
};

struct node* createNode(long data);
struct queue* createQueue(void);
/// pop from queue
long dequeue(struct queue* myQueue);
/// insert into queue
void enqueue(struct queue* myQueue, long data);
bool isEmpty(struct queue* myQueue);

#endif /* queue_h */
