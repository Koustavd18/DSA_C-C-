#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p; //using stack mem
    int *h; //using heap mem
    int a = 55;
    p =&a;

    h = (int *) malloc(5 * sizeof(int));
    h[0]=1;h[1]=2;h[2]=3;h[3]=4; h[4]= 5;
    printf("Stack pointer address %p \n", p);
    printf("Value stored in pointer %d \n", *p);
    printf("Heap pointer address %p \n", h);
    for (int i = 0 ; i<5; i++){

    printf("Value stored in heap pointer address %d \n", h[i]);
    }
    printf("Size of heap pointer address %lu \n", sizeof(h));

    free(p);
}