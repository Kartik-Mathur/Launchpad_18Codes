// SpiralPrint
#include <iostream>
using namespace std;

void SpiralPrint(int a[][100],int rows,int cols){
	int sr=0,sc=0;
	int er=rows-1;
	int ec=cols-1;


	while(sr<=er && sc<=ec){
		// print the starting row
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		// Print the end col
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;


		if(sr<er){
			// print end row
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}
			er--;
		}

		if(sc<ec){
			// print starting col
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" ";
			}
			sc++;
		}


	}

}


int main(){

	int rows,cols;
	int a[100][100];
	cin>>rows>>cols;
	int value=1;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			a[i][j]=value;
			value++;
		}
	}
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	SpiralPrint(a,rows,cols);

	return 0;
}