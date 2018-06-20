// Test
#include <iostream>
using namespace std;

int main(){
	char *ptr;
	char ch='A';

	// ptr=&ch;
	cout<<*ptr<<endl;

	ptr=&ch;

	cout<<(int *)ptr<<endl;
	cout<<ptr+1<<endl;


	return 0;
}