// CallByReference
#include <iostream>
using namespace std;

int main(){
	int a=10;
	int b=a;
	int &y=a;
	int &z=y;

	a++;
	b++;
	y++;
	z++;

	cout<<a<< " "<<b<<" "<<y<<" "<<z<<" "<<endl;



	return 0;
}