// CharPointers
#include <iostream>
using namespace std;

int main(){
	// char a[]="abcdef";
	// char b='I';
	// cout<<sizeof(a)<<endl;

	// cout<<a<<endl;
	// a[1]='H';
	// cout<<a<<endl;
	char *p="abc";
	cout<<p<<endl;

	p[0]='d'; // Not allowed
	cout<<p<<endl; // error
	return 0;
}
