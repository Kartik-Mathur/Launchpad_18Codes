#include <iostream>
using namespace std;


int *CreateArray(int n){
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		arr[i]=n-i;
	}

	return arr;
}


int main(){
	int n;
	cin>>n;
	int *a=CreateArray(n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}