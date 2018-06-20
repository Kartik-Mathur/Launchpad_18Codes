// OptimisedBubbleSort

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
            int count=0;
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
			    count++;
				swap(a[j],a[j+1]);
			}
		}

    if(count==0){
        break;
    }
	}




	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}
