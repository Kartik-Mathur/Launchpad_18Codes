// NullPointer
#include <iostream>
using namespace std;

int main(){
	int *y=0; // Created but not used anywhere in program
	// int x=10;
	// y=&x; 
 
  	// Error if not assigned to a valid bucket
	// as dereferencing a NUll makes no sense
	cout<<*y<<endl;



	return 0;
}