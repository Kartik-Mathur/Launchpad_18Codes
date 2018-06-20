// Scope
#include <iostream>
using namespace std;

int x=30;
int main(){
	int x=10;

	int i=20;

	for(i=0;i<10;i++){
		int x=i;
	}
	::x=::x+2;
	cout<<::x<<endl;
	cout<<i<<endl;




	return 0;
}