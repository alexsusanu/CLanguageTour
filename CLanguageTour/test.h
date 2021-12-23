//
//  test.h
//  CLanguageTour
//
//  Created by alex on 01/12/2021.
//


#ifndef test_h
#define test_h

#include <stdbool.h>
#include <stdio.h>
struct sortedArray{
    int size;
    int* data;
};

bool findValue(int value, struct sortedArray a);
#endif /* test_h */
