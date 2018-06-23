// LargestString
#include <iostream>
using namespace std;

int length(char b[]){
		int i;
		for(i=0;b[i]!='\0';i++){
			// cout<<b[i];
		}
		return i;
}

void copyString(char LargestString[],char temp[]){
	int i;
	for(i=0;temp[i]!='\0';i++){
		LargestString[i]=temp[i];
	}
	LargestString[i]='\0';
}

int main(){

	int n;
	cin>>n;
	cin.get();
	int largest=0;
	char largestString[100];
	char temp[100];

	for(int i=0;i<n;i++){

		cin.getline(temp,100);
		int temp_length=length(temp);

		if(temp_length>largest){
			copyString(largestString,temp);
			largest=temp_length;
		}

	}
	cout<<"Largest length is : "<<largest<<endl;
	cout<<"String is : "<<largestString;


	return 0;
}