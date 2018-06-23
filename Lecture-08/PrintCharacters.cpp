// PrintCharacters
#include <iostream>
using namespace std;

void PrintCharacters(char a[],int i){
	if(a[i]=='\0'){
		return;
	}

	PrintCharacters(a,i+1);
	cout<<a[i];

}


int main(){
	char a[]="Hello Coding Blocks!";
	PrintCharacters(a,0);

	return 0;
}