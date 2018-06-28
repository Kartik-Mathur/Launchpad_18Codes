// Subsequences
#include <iostream>
using namespace std;

void Subsequences(char *input,int i,char* output,int j){
	// Base Case
	if(input[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

// Ek bari output mei input insert krdo
	output[j]=input[i];
	Subsequences(input,i+1,output,j+1);

// Next Time mat karo insert
	Subsequences(input,i+1,output,j);
}


int main(){
	char a[]="AAA";
	char output[100];

	Subsequences(a,0,output,0);


	return 0;
}
