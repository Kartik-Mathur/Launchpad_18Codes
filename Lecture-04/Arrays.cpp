// Arrays
#include <iostream>
using namespace std;

int main(){
	int a[10];
	int n;

	for(int i=0;i<10;i++){
		cin>>a[i];
	}

	cout<<"Array Elements are : "<<endl;
	for(int i=9;i>=0;i--){
		cout<<a[i]<<" ";
	}

	int a[10]={1,2,3,4,5};
	
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}


	return 0;
}