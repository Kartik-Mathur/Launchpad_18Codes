#include <iostream>
#include <ctime>
using namespace std;

void BubbleSort(int *a,int n){

		for(int i=1;i<=n-2;i++){
			for(int j=0;j<=n-2-i;j++){
				if(a[j]>a[j+1]){ // a[j]=*(a+j)
					swap(a[j],a[j+1]);
				}
			}
		}
}


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
	int x[100000];
	int y[100000];
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
	
	int a[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		a[i]=n-i;
	}
	clock_t t1,t2;
	t1=clock();
	MergeSort(a,0,n-1);
	t1=clock()-t1;
	
	t2=clock();
	BubbleSort(a,n);
	t2=clock()-t2;
	
	cout<<"Merge Sort took : "<<t1<<" mili."<<endl;
	cout<<"Bubble Sort took : "<<t2<<" mili";
	

	return 0;
}