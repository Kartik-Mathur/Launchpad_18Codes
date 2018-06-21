// Pointers
#include <iostream>
using namespace std;

int main(){
	// int *randomPointer;

	// cout<<randomPointer<<endl;

	int x=10;
	int *xptr=&x;


	cout<<*xptr<<endl;
	int r=*xptr;
	cout<<r<<endl;
	return 0;
}