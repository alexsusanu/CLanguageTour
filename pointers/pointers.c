#include <stdio.h>

/*
 * a pointer holds the memory location -> the address of another variable
 * char a;
 * char *ptr = &a; -> declared as pointer and points to a
 * ptr -> address
 * *ptr -> the value stored at the address
 */

void set(int *x, int *y){
    *x = 1; // value set to 1
    *y =2; // value set to 2
}

//int main() {
////    char a = 'a';
////    char *a_ptr;
////    a_ptr = &a; // must always be initialized
////    // or char *a_ptr = &a;
////
////    printf("address is: %p\n", a_ptr);
////    printf("value is: %c\n", *a_ptr);
////    printf("size is: %lu\n", sizeof(*a_ptr));
//
//    int b, c;
//    set(&b, &c); // takes a pointer as arg -> pass the address &
//    printf("b = %d and c = %d\n", b, c);
//
//    int a, d;
//    int *x, *y;
//    x = &a; // address
//    y = &d; // address
//    set(x, y); // func takes addresses as args
//    printf("a is: %d and d is %d\n", *x, *y);
//
//
//    return 0;
//}
