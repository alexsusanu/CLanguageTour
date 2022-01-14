//
//  set.h
//  TreeTraversal
//
//  Created by alex on 13/01/2022.
//

#ifndef set_h
#define set_h

#include <stdio.h>
#include <stdbool.h>

struct set{
    long* data;
    long capacity; // how many numbers can store
    long size; // how many numbers is currently storing
};

// create
// insert
// check

struct set* createSet();
void insertIntoSet(struct set* mySet, long data);
bool checkIfNumberExist(struct set* mySet, long data);

#endif /* set_h */
