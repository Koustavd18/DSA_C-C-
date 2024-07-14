#include <iostream>
using namespace std;

int main () {
    int a = 25;
    int &r = a;
    char name[] = "Hello" ; 

    cout <<a<<endl;
    r++;
    cout<<r<<endl;
    cout<<name<<endl;
    return 0;
}