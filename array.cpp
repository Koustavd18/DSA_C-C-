#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter the size of the array"<<endl;
	if(n<=0){
		cout<<"Size should be greater than zero"<<endl;
	}else{
		cin>>n;
	}
	int arr[n];
	for(int i=0; i<n; i++){
		int elem;
		cout<<"Enter element"<<endl;
		cin>>elem;
		arr[i] = elem;
	}
	cout<<"\n"<<endl;
	for(int i:arr){
		cout<<i<<endl;
	}
	return 0;
}
