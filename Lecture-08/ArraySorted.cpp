// ArraySorted
#include <iostream>
using namespace std;

bool isSorted(int a[],int n){
	if(n==0 || n==1){
		return true;
	}

	bool kyaChotaSortedHai=isSorted(a+1,n-1);

	if(a[0]<a[1] && kyaChotaSortedHai){
		return true;
	}
	else{
		return false;
	}
}


int main(){
	int a[]={1,2,3,8,6,7};
	int n=sizeof(a)/sizeof(int);

	if(isSorted(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}

	return 0;
}