// Arrays
#include <iostream>
using namespace std;

int sum(int a[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=a[i];
	}

	return ans;
}


void SelectionSort(int a[],int n){

	for(int i=0;i<=n-2;i++){
		int smallest=i;
		for(int j=i+1;j<n;j++){
			if(a[smallest]>a[j]){
				smallest=j;
			}
		}
		int temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;

	}

	return;
}


int main(){

	int a[10];
	int n;

	cout<<"ENter size ";
	cin>>n;
	cout<<"Enter Elements";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	// cout<<sum(a,n);

	SelectionSort(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}



	return 0;
}