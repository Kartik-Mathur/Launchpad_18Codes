// PrintArray
#include <iostream>
using namespace std;

void PrintArray(int a[],int n,int i){

	if(i==n){
		return;
	}

	PrintArray(a,n,i+1);
	cout<<a[i]<<" ";
	
}


int main(){
	int a[]={1,4,5,6,9,10};
	int n=sizeof(a)/sizeof(int);

	PrintArray(a,n,0);

	return 0;
}