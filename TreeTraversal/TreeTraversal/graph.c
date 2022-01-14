//
//  graph.c
//  TreeTraversal
//
//  Created by alex on 06/01/2022.
//

#include <stdlib.h>

#include "graph.h"
#include "queue.h"
#include "set.h"

struct graphNode* createGraphNode(int data){
    struct graphNode* newGraphNode = malloc(sizeof(struct graphNode));
    newGraphNode->data = data;
    newGraphNode->siblings = createSet();
    return newGraphNode;
};

struct graph* createGraph(int data){
    struct graph* newGraph = malloc(sizeof(struct graph));
    newGraph->root = createGraphNode(data);
    return newGraph;
};

struct graphNode* findGraphNode(struct graph* myGraph, int data){
    struct queue* myQueue = createQueue();
    struct set* visited = createSet();
    enqueue(myQueue, (long) myGraph->root);
    while(!isEmpty(myQueue)){
        struct graphNode* myGraphNode = (struct graphNode*) dequeue(myQueue);
        if(myGraphNode->data == data){
            return myGraphNode;
        }
        insertIntoSet(visited, (long)myGraphNode);
        for(int i = 0; i < myGraphNode->siblings->size; i++){
            if(!checkIfNumberExist(visited, (long) myGraphNode)){
                enqueue(myQueue, (long) myGraphNode->siblings->data[i]);
            }
        }
    }
    return NULL;
}

struct graphNode* insertGraphNode(struct graph* myGraph, struct graphNode* sibling, int newData) {
    struct graphNode* node = findGraphNode(myGraph, newData);
    if(node == NULL){
        node = createGraphNode(newData);
    }
    insertIntoSet(node->siblings, (long)sibling);
    insertIntoSet(sibling->siblings, (long)node);
    return node;
}
// int* = block of memory [0,1,2,3,4]
//
