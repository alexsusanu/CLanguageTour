//  main.c
//  CLanguageT
//
//  Created by alex on 10/11/2021.
//
#include <stdio.h>
#include <stdlib.h>

//a node is comprised of data and a pointer to the next node. thats it
struct node{
    int data;
    struct node *next;
};

//struct node* createNode(int data, struct node *next){
//    struct node *i = (struct node*)malloc(sizeof(struct node));
////    (*i).data = data;
////    (*i).next = next;
//    i-> data =  data;
//    i-> next = next;
//    return i;
//}
struct node* createNode(int data){
     struct node* node = malloc(sizeof(node));
     node-> data = data;
     node-> next = NULL;
     return node;
 }
 
struct node* mergeLists(struct node* head1, struct node* head2) {
    struct node* current1 =  head1;
    struct node* current2 =  head2;
    struct node* newCurrent = NULL;
    struct node* newHead = NULL;
    
    while(current1 != NULL || current2 != NULL){
        struct node* newNode;
        if(current1 != NULL && current2 != NULL){
            if(current1->data < current2->data){
                newNode = createNode(current1->data);
                current1 = current1->next;
            }else{
                newNode = createNode(current2->data);
                current2 = current2->next;
            }
        }else if(current1 != NULL){
            newNode = createNode(current1->data);
            current1 = current1->next;
        }else{
            newNode = createNode(current2->data);
            current2 = current2->next;
        }
        if(newCurrent != NULL){
                newCurrent->next = newNode;
                newCurrent = newNode;
            }else{
                newCurrent = newNode;
                newHead = newNode;
            }
    }
    
    return newHead;
}

//int main(int argc, const char * argv[]) {
//    struct node *n3 = createNode(3);
//    struct node *n2 = createNode(2);
//    struct node *n1 = createNode(1);
//    
//    struct node *m3 = createNode(8);
//    struct node *m2 = createNode(5);
//    struct node *m1 = createNode(3);
//    
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = NULL;
//    
//    m1->next = m2;
//    m2->next = m3;
//    m3->next = NULL;
//   
//    struct node *newHead = mergeLists(m1, n1);
//    struct node *current = newHead;
//    
//    while (current != NULL) {
//        printf("data current: %i\n", current-> data);
//        current = current-> next;
//    }
//    
////    printf("size of char equals: %lu\n", sizeof(char*));
////    printf("size of short equals: %lu\n", sizeof(short*));
////    printf("size of int equals: %lu\n", sizeof(int*));
////    printf("size of long equals: %lu\n", sizeof(long*));
////    printf("size of long long equals: %lu\n", sizeof(long long*));
////    printf("size of float equals: %lu\n", sizeof(float*));
////    printf("size of double equals: %lu\n", sizeof(double*));
////
//////    // (MSB)00000100(LSB)
//////    printf("unsigned size of int equals: %lu\n", sizeof(unsigned int*));
//////    printf("unsigned size of long equals: %lu\n", sizeof(unsigned long*));
////
////    int *i = (int*)malloc(sizeof(int));
////    printf("i: %p\n", &i);
//    
//    int *i = (int*)malloc(sizeof(int));
//    i[0] = 123;
//    i[1] = 456;
//    printf("i: %i\n", i[0]);
//    return 0;
//}
