//
//  binaryTree.h
//  TreeTraversal
//
//  Created by alex on 23/12/2021.
//

#ifndef binaryTree_h
#define binaryTree_h

#include <stdio.h>
#include <stdbool.h>

struct binaryNode{
    int value;
    struct binaryNode* leftChild; // sibling -> rightChild || go through parent
    struct binaryNode* rightChild;
};

// ternary tree
struct ternarybinaryNode{
    int value;
    struct binaryNode* leftChild;
    struct binaryNode* middleChild;
    struct binaryNode* rightChild;
};

/// returns a binary node pointer
struct binaryNode* insertInto(struct binaryNode* rootbinaryNode, int value);
bool findValue(struct binaryNode* mybinaryNode, int value);
#endif /* binaryTree_h */
