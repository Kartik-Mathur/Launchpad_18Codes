// LargestElement
#include <iostream>
using namespace std;

int main(){
	int n;
	int a[10];
	// int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Enter number of elements(max=10) : ";
	cin>>n;
	cout<<"Enter Array Elemets : ";

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int largest=a[0];

	for(int i=0;i<n;i++){
		if(largest<a[i]){
			largest=a[i];
		}
	}

	cout<<largest<<endl;



	return 0;
}