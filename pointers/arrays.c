//
// Created by alex on 20/12/2021.
//
//#include <stdio.h>
//
//int main(){
//    int a[4] = {1,2,3,4}; // 4 bytes
//    int x;
//
//    for (x = 0; x < 4; x++){
//        printf("%p\n", &a[x]);
//    }
//
//    puts("----------------");
//
//    char c[4] = {'a', 'b', 'c', 'd'}; // 1  byte
//    int i;
//    char *p;
//    p = c; // assign pointer p to base of the char array c
////    p = &c[1] // assign p to address of c[1]
//
//    for(i = 0; i < 4; i++){
////        printf("%p\n", p);
////        p++; // increase address by 1 byte (cause array of char)
////        printf("%p\n", p + i); // same as above
//        printf("%c\n", *(p + i)); // access values (*), use %c since its char
//
//    }
//
//    return 0;
//}
