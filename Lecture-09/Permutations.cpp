// Permutations
#include <iostream>
using namespace std;

void Permutations(char a[],int i,int j){
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}

	for(j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutations(a,i+1,j);
		swap(a[i],a[j]);
	}
}



int main(){
	char a[]="ABC";
	Permutations(a,0,0);


	return 0;
}