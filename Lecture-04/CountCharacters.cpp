// CountCharacters
#include <iostream>
using namespace std;

int main(){
	char ch;
	int count=0;


	ch=cin.get();
	while(ch!='$'){
		count++;
		ch=cin.get();
	}

	cout<<count;


	return 0;
}