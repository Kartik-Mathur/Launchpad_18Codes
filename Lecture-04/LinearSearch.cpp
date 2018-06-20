// LinearSearch
#include <iostream>
using namespace std;

int main(){
	int n;
	int a[10];
	// int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Enter number of elements(max=10) : ";
	cin>>n;
	cout<<"Enter Array Elemets : ";

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cout<<"Enter key : ";
	cin>>key;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Key found at location : "<<i;
			break; 
		}
	}

	if(i==n){
		cout<<"Key not found !";
	}

	return 0;
}