// AddressOf
#include <iostream>
using namespace std;

int main(){
	// int x=10;
	// cout<<&x<<endl;

	// int a[]={1,2,3,4};
	// cout<<a<<endl; //  1
	// cout<<&a<<endl; //  first wale ka address
	// cout<<&a[0]<<endl;// first wale ka adress

	char ch='B';
	char *xch=&ch;

	cout<<(void *)&ch<<endl;
	cout<<(void *)xch<<endl;
	xch+=1;
	cout<<(void *)xch<<endl;


	// Never store another data type pointer in other data type pointer 
	int *xptr=(int *)&ch;
	cout<<xptr<<endl;
	cout<<xptr+1<<endl;
	return 0;
}




