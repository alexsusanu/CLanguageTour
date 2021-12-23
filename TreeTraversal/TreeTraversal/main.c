//
//  main.c
//  TreeTraversal
//
//  Created by alex on 23/12/2021.
//

#include <stdio.h>
#include "DataStructure.h"

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
    
}


int main(int argc, const char * argv[]) {
    int elementsToInsert = 0;
    struct binaryNode* rootNode = NULL;
    
    printf("How many elements to insert? ");
    scanf("%d", &elementsToInsert);
    
    for(int i = 0; i < elementsToInsert; i++){
        int element;
        scanf("%d", &element);
        rootNode = insertInto(rootNode, element);
    }
    
    printf("\n\n");
    printf("Preorder traversal\n");
    preorderTraversal(rootNode);
    
    printf("\n\n");
    printf("Postorder traversal\n");
    postorderTraversal(rootNode);
    
    printf("\n\n");
    printf("Inorder traversal\n");
    inorderTraversal(rootNode);
    
    printf("\n\n");
    printf("Levelorder traversal\n");
    levelorderTraversal(rootNode);
    
    return 0;
}
