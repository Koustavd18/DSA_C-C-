#include<stdio.h>
#include<stdlib.h>


struct Rectangle{
    int length;
    int breadth;
};

struct Card {
    int face;
    int shape; 
};

int main(){

// struct Rectangle r;
// struct Rectangle r ={10,5}

// struct Card deck[55];

// deck[0].face = 5;
// deck[0].shape = 6;

// printf("%d \n", deck[0].face);

// r.length = 10;
// r.breadth = 5;
// printf("Area of the rectangle is %d \n", r.length * r.breadth);

struct Rectangle *p;
p = (struct Rectangle *)malloc(sizeof (struct Rectangle));
(*p).length= 20;
p->breadth=10;
printf("rectangle has length : %d, breadth :%d .\n",(*p).length, (*p).breadth);
free(p);
}