// NullPointer
#include <iostream>
using namespace std;

int main(){
	int *y=0; // Created but not used anywhere in program
	int x=10;
	y=&x;

	cout<<*y<<endl;


	return 0;
}