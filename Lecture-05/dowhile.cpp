#include <iostream>
using namespace std;

int main(){

	int i=-1;

	do{
		cout<<i<<endl;
	}
	while(i>0);

	do{
		ch=cin.get();
		
		if(ch!='$'){
			cout<<ch;
		}
	}
	while(ch!='$');


	return 0;
}