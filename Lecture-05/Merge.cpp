// Merge
#include <iostream>
using namespace std;

void merge(int a[],int b[],int i,int j,int k){
	while(i>=0 && j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			i--;
			k--;
		}
		else{
			a[k]=b[j];
			j--;
			k--;
		}
	}

	while(i>=0){
		a[k]=a[i];
		k--;
		i--;
	}

	while(j>=0){
		a[k]=b[j];
		k--;
		j--;
	}


	return;
}


int main(){
	int m,n;
	int a[100],b[100];
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}

	merge(a,b,m-1,n-1,m+n-1);

	for(int i=0;i<m+n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}