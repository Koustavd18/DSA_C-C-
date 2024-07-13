#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){

struct Rectangle r;

r.length = 10;
r.breadth = 5;

printf("Area of the rectangle is %d \n", r.length * r.breadth);

}