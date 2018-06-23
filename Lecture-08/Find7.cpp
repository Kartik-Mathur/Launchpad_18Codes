// Find7
#include <iostream>
using namespace std;

int first7(int a[],int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		return i;
	}
	else{
		first7(a,n,i+1);
	}
}

int last7(int a[],int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		int index=i;
		int BadheWalaSevenKaIndexBata=last7(a,n,i+1);

		if(BadheWalaSevenKaIndexBata>index){
			return BadheWalaSevenKaIndexBata;
		}
		else{
			return index;
		}
	}
	else{
		last7(a,n,i+1);
	}
}


int main(){

	int a[]={1,5,6,2,7,8,9,7,3};
	int n=sizeof(a)/sizeof(int);
	cout<<last7(a,n,0);

	return 0;
}