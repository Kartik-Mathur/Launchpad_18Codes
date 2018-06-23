// CharacterArrays
#include <iostream>
using namespace std;


int main(){

	char a[][3]={
		{'a','b','c'},
		{'d','e','f'},
		{'g','h','i'}
	};

	char b[][6]={
		"Hello",
		"apple",
		"codi"
	};

	// cout<<b[1]<<endl;
	cout<<a[1][1]<<endl;

	return 0;
}