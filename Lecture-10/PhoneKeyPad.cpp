// PhoneKeyPad
#include <iostream>
#include <cstring>
using namespace std;

string keys[]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void PhoneKeyPad(char input[],int i,char output[],int j){
	// base case
	if(input[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

	// Recursive case
	int digit=input[i]-'0'; // ASCII TO INTEGER
	for(int k=0;keys[digit][k]!='\0';k++){
		output[j]=keys[digit][k];
		PhoneKeyPad(input,i+1,output,j+1);
	}
}

int main(){

	char input[]="666";
	char output[100];

	PhoneKeyPad(input,0,output,0);//input,i,ouput,j


	return 0;
}