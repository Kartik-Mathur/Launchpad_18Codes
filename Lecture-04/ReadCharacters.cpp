// ReadCharacters
#include <iostream>
using namespace std;

int main(){
	int alphabets=0;
	int digits=0;
	int others=0;
	int spaces=0;

	char ch;

	ch=cin.get();
	while(ch!='$'){
		// alphabets
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'){
			alphabets++;
		}
		else if(ch>='0'&&ch<='9'){
			digits++;
		}
		else if(ch==' '||ch=='\n'){
			spaces++;
		}
		else{
			others++;
		}
		ch=cin.get();
	}


	cout<<"alphabets : "<<alphabets<<endl;
	cout<<"Digits :"<<digits<<endl;
	cout<<"White Spaces :"<<spaces<<endl;
	cout<<"Others : "<<others;
	return 0;
}