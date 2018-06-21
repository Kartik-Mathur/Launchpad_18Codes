// ArraysPointers
#include <iostream>
using namespace std;

void update(int a[]){
	cout<<"In update : ";
	cout<<sizeof(a)<<endl; // 4 bytes

}

void Print(int *a,int n){

	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
		// or cout<<a[i]<<" ";
	}

}


// int a[] is same as int *a
void SecondUpdate(int *a){

	cout<<sizeof(a)<<endl; // size = 4 on 32-bit system
							// size =8 on 64-bit system
}

int main(){
	int a[]={1,2,3,4,5};
	// cout<<"In main ";
	// cout<<sizeof(a)<<endl;
	int n=sizeof(a)/sizeof(int);
	Print(a,n);
	// update(a);
	SecondUpdate(a);
	return 0;
}