//
//  main.c
//  TreeTraversal
//
//  Created by alex on 23/12/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "DataStructure.h"
#include "graph.h"

void preorderTraversal(struct binaryNode* rootNode){
    printf("%d ", rootNode->value);
    if(rootNode->leftChild != NULL){
        preorderTraversal(rootNode->leftChild);
    }
    if(rootNode->rightChild != NULL){
        preorderTraversal(rootNode->rightChild);
    }
}

void postorderTraversal(struct binaryNode* rootNode){
    if(rootNode->leftChild != NULL){
        postorderTraversal(rootNode->leftChild);
    }
    if(rootNode->rightChild != NULL){
        postorderTraversal(rootNode->rightChild);
    }
    printf("%d ", rootNode->value);
}

void inorderTraversal(struct binaryNode* rootNode){
    if(rootNode->leftChild != NULL){
        inorderTraversal(rootNode->leftChild);
    }
    printf("%d ", rootNode->value);
    if(rootNode->rightChild != NULL){
        inorderTraversal(rootNode->rightChild);
    }
}

void levelorderTraversal(struct binaryNode* rootNode){
    struct queue* myQueue = createQueue();
    enqueue(myQueue, (long) rootNode);
    while(!isEmpty(myQueue)){
        struct binaryNode* myBinaryNode = (struct binaryNode*) dequeue(myQueue);
        printf("%d ", myBinaryNode->value);
        if(myBinaryNode->leftChild){
            enqueue(myQueue, (long) myBinaryNode->leftChild);
        }
        if(myBinaryNode->rightChild){
            enqueue(myQueue, (long) myBinaryNode->rightChild);
        }
    }
}


int main(int argc, const char * argv[]) {
//    int elementsToInsert = 0;
//    struct binaryNode* rootNode = NULL;
//
//    printf("How many elements to insert? ");
//    scanf("%d", &elementsToInsert);
//
//    for(int i = 0; i < elementsToInsert; i++){
//        int element;
//        scanf("%d", &element);
//        rootNode = insertInto(rootNode, element);
//    }
//
//    printf("\n\n");
//    printf("Preorder traversal\n");
//    preorderTraversal(rootNode);
//
//    printf("\n\n");
//    printf("Postorder traversal\n");
//    postorderTraversal(rootNode);
//
//    printf("\n\n");
//    printf("Inorder traversal\n");
//    inorderTraversal(rootNode);
//
//    printf("\n\n");
//    printf("Levelorder traversal\n");
//    levelorderTraversal(rootNode);
//    printf("\n\n");
    
    // create a graph with some root value
    printf("Enter root node value\n");
    int rootValue;
    scanf("%i", &rootValue);
    struct graph *graph = createGraph(rootValue);
    
    // ask how many nodes to insert
    printf("How many nodes to insert?\n");
    int insertCount;
    scanf("%i", &insertCount);
    
    for (int i = 0; i < insertCount; i++) {
        // read in two node values to link, the first value MUST
        // exist in the graph
        int v1, v2;
        scanf("%i %i", &v1, &v2);
        struct graphNode *n1 = findGraphNode(graph, v1);
        if (n1 == NULL) {
            exit(999);
        }
        insertGraphNode(graph, n1, v2);
    }
    
    // ask how many nodes to insert
    printf("How many nodes to find?\n");
    int findCount;
    scanf("%i", &findCount);
    
    for (int i = 0; i < findCount; i++) {
        int v;
        scanf("%i", &v);
        
        if (findGraphNode(graph, v) == NULL) {
            printf("Does not exist!");
        } else {
            printf("Does exist!");
        }
    }
    
    return 0;
}
