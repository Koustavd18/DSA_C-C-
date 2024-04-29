#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0; i<=n; i++){
		int elem;
		cout<<"Enter element"<<endl;
		cin>>elem;
		arr[i] = elem;
	}
	for(int i=0;i<n;++i){
		cout<<arr[i]<<endl;
	}
	return 0;
}
