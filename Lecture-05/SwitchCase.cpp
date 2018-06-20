// SwitchCase
#include <iostream>
using namespace std;

int main(){

	char ch;
	cin>>ch;

	switch(ch){
		case 'n':
		case 'N': cout<<"NORTH";
				break;
		case 'e': 
		case 'E': cout<<"EAST";
				break;
		case 'S' :cout<<"SOuth";
				break;
		default : cout<<"INVALID";
	}



	// Tertiary Operator

		int a=10;

		 a%2==0 ? cout<<"Even": cout<<"ODD";

		 bool isEven;

		 isEven=(a%2==0)?true:false;
		 cout<<isEven<<endl;

	return 0;
}