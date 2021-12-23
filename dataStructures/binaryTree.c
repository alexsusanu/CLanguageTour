//
//  binaryTree.c
//  TreeTraversal
//
//  Created by alex on 23/12/2021.
//

#include <stdlib.h>
#include "binaryTree.h"

struct binaryNode* insertInto(struct binaryNode* rootNode, int value){
    
    if(rootNode == NULL){
        struct binaryNode* newNode = malloc(sizeof(struct binaryNode));
        newNode->value = value; // 1
        newNode->leftChild = NULL;
        newNode->rightChild = NULL;
        return newNode;
    }
    
    
    if(value <= rootNode->value){
        // leftChild
        if(rootNode->leftChild){
            insertInto(rootNode->leftChild, value);
        }else{
            rootNode->leftChild = malloc(sizeof(struct binaryNode));
            rootNode->leftChild->value = value;
            rootNode->leftChild->leftChild = NULL;
            rootNode->leftChild->rightChild = NULL;
        }
    }else{
        // rightChild
        if(rootNode->rightChild){
            insertInto(rootNode->rightChild, value);
        }else{
            rootNode->rightChild = malloc(sizeof(struct binaryNode));
            rootNode->rightChild->value = value;
            rootNode->rightChild->leftChild = NULL;
            rootNode->rightChild->rightChild = NULL;
        }
        
    }
    return rootNode;
}


bool findValue(struct binaryNode* myNode, int value){
    if(value == myNode->value){
        return true;
    }else if(value < myNode->value && myNode->leftChild){
        return findValue(myNode->leftChild, value);
    }else if(value > myNode->value && myNode->rightChild){
        return findValue(myNode->rightChild, value);
    }
    return false;
}
