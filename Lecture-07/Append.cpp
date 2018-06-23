// Append
#include <iostream>
using namespace std;

int length(char b[]){
		int i;
		for(i=0;b[i]!='\0';i++){
			// cout<<b[i];
		}
		return i;
}


void append(char a[],char b[]){
	int lena=length(a);
	int lenb=length(b);

	int i=lena;
	int j=0;

	while(j<=lenb){
		a[i]=b[j];
		j++;
		i++;
	}
}


int main(){
	char a[100];
	char b[100];

	cin.getline(a,100);
	cin.getline(b,100);

	append(a,b);
	cout<<a<<endl;
	return 0;
}