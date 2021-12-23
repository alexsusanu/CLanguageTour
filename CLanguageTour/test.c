//
//  test.c
//  CLanguageTour
//
//  Created by alex on 01/12/2021.
//

#include "test.h"
#include <stdbool.h>
#include <stdio.h>


bool findValue(int value, struct sortedArray a){
    if(a.size == 2){
        return (a.data[0] == value) || (a.data[1] == value);
    }

    int pivotIndex = a.size / 2;
    if(value == pivotIndex){
        return true;
    }else if(value < pivotIndex){
       struct sortedArray newArray = {pivotIndex, a.data};
       return findValue(value, newArray);
    }else{
        struct sortedArray newArray = {pivotIndex, a.data + pivotIndex};
        return findValue(value, newArray);
    }
}

int main(int argc, const char* argv[]){
    struct sortedArray a1;
    a1.size = 5;
    int a[] = {1,2,3,4,5};
    a1.data = a;

    printf("%i\n", findValue(4, a1));
//    printf("%i\n", *(a));
//    printf("%i\n", *(a+1));
//    printf("%i\n", *(a+2));

    return 0;
}
