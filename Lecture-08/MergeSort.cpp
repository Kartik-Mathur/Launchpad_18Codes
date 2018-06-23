// MergeSort
#include <iostream>
using namespace std;

void merge(int *a,int *x,int *y,int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e){
		if(x[i]>y[j]){
			a[k]=y[j];
			k++;
			j++;
		}
		else{
			a[k]=x[i];
			k++;
			i++;
		}
	}

	while(i<=mid){
		a[k]=x[i];
		k++;
		i++;
	}
	while(j<=e){
		a[k]=y[j];
		k++;
		j++;
	}
}



void MergeSort(int a[],int s,int e){
	// Base Case
	if(s>=e){
		return;
	}

	// Divide
	int x[100];
	int y[100];
	int mid=(s+e)/2;

	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}
	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}

	// Sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);
	
	// Merge
	merge(a,x,y,s,e);

}


int main(){
	int a[]={5,4,2,1,8,7};
	int n=sizeof(a)/sizeof(int);

	MergeSort(a,0,n-1);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}