// Permutations
#include <iostream>
using namespace std;

int main(){
	char a[100];
	cin.getline(a,100);

	int freq[256]={0};


	for(int i=0;a[i]!='\0';i++){
		int index=a[i]-'a';
		freq[index]++;
	}

	for(int i=0;i<256;i++){
		cout<<freq[i]<<" ";
	}

	return 0;
}