#include <iostream>
using namespace std;

int main(){
	int n;
	int a[10];

	cin>>n;
	cout<<"Enter Elements ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	// Insertion Sort
	int j;
	for(int i=1;i<n;i++){
			int k=a[i];
		for(j=i-1;j>=0&&k<a[j];j--){
			a[j+1]=a[j];
		}
		j++;
		a[j]=k;
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}



	return 0;
		
}