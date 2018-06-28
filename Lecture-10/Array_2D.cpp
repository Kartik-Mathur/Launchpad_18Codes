#include <iostream>
using namespace std;

int main(){
	int rows,cols;
	cin>>rows>>cols;

	int **arr=new int*[rows];

	for(int i=0;i<rows;i++){
		arr[i]=new int[cols];
	}
	int val=1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			arr[i][j]=val;
			val++;
		}
	}


	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}