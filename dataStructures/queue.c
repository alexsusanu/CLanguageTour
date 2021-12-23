//
//  queue.c
//  ques
//
//  Created by alex on 23/12/2021.
//

#include <stdlib.h>
#include "queue.h"

struct node* createNode(int data){
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct queue* createQueue(void){
    struct queue* newQueue = malloc(sizeof(struct queue));
    newQueue->head = NULL;
    newQueue->tail = NULL;
    return newQueue;
}

void enqueue(struct queue* myQueue, int data){
    struct node* myNode = createNode(data);
    if(myQueue->head == NULL){
        myQueue->head = myNode;
        myQueue->tail = myNode;
        return;
    }
    myQueue->tail->next = myNode;
    myQueue->tail = myNode;
}

int dequeue(struct queue* myQueue){
    struct node* oldHead = myQueue->head;
    myQueue->head = myQueue->head->next;
    int data = oldHead->data;
    free(oldHead);
    return data;
}

