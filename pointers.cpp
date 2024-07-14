#include<iostream>
using namespace std;

int main (){

    int a = 10;
    int *p;
    int *h;
    p = &a;
    h = new int[5];
    h[0]=1;h[1]=2;h[2]=3;h[3]=4; h[4]= 5;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<h<<endl;
    for (int i =0 ; i<5 ; i++){
        cout<<h[i]<<endl;
    }
    delete [] h;
}