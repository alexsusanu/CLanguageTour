//
//  graph.h
//  TreeTraversal
//
//  Created by alex on 06/01/2022.
//

#ifndef graph_h
#define graph_h

#include <stdio.h>
#include "set.h"

struct graphNode{
    int data;
    struct set* siblings;
};

struct graph{
    struct graphNode* root;
};

struct graph* createGraph(int data);
struct graphNode* insertGraphNode(struct graph* myGraph, struct graphNode* sibling, int newData);
struct graphNode* findGraphNode(struct graph* myGraph, int data);
#endif /* graph_h */
