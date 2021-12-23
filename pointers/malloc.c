////
//// Created by alex on 20/12/2021.
////
//#include <stdlib.h>
//#include <stdio.h>
//
//int main(){
//    // void *malloc(size_t size); // takes one arg, size
//    // returns a pointer or NULL
//    // always check for NULL
//
//    int *storage;
//    // allocate for 15 bytes plus 1 for the \n
////    storage = (int *)malloc(sizeof (int) * 5);
//    storage = (int *) calloc(5, sizeof (int));
//    if(storage == NULL){
//        fprintf(stderr, "failed allocation\n");
//        exit(1);
//    }
////    puts("memory allocated for 16 chunks of char bytes, 16 bytes total");
//
//    // malloc() // allocated uninitialized storage
//    // calloc() // allocates and initializes to 0 or NULL
//    // realloc() // resizes an existing
//    // free() // free memory
////    storage[0] = 1;
////    storage[1] = 2;
////    storage[2] = 3;
////    storage[3] = 4;
////    storage[4] = 5;
//    *(storage + 0) = 1;
//    *(storage + 1) = 2;
//    *(storage + 2) = 3;
//    *(storage + 3) = 4;
//    *(storage + 4) = 5;
//
//    for(int i = 0; i < 5; i++){
//        printf("%d\n", *(storage + i));
//    }
//
//    storage = (int *) realloc(storage, sizeof(int) * 7);
//    if(storage == NULL){
//        fprintf(stderr, "failed");
//        exit(1);
//    }
//    puts("re-sized");
//
//    *(storage + 5) = 6;
//    *(storage + 6) = 7;
//
//    for(int i = 0; i < 7; i++){
//        printf("%d\n", *(storage + i));
//    }
//
//    free(storage);
//    storage = NULL;
//
//    return 0;
//}
