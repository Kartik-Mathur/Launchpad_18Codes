// SelectionSort
#include <iostream>
using namespace std;

int main(){
	int n;
	int a[100];
	// int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Enter number of elements : ";
	cin>>n;
	cout<<"Enter Array Elemets : ";

	for(int i=0;i<n;i++){
		cin>>a[i];
	}


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

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}