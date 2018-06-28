#include <iostream>
#include <cmath>
using namespace std;

bool isSafeToPlace(int mat[][9],int i,int j,int n,int number){
	for(int k=0;k<n;k++){
		if(mat[i][k]==number || mat[k][j]==number){
			return false;
		}
	}

	n=sqrt(n);
	i=(i/n)*n;
	j=(j/n)*n;

	for(int k=i;k<i+n;k++){
		for(int l=j;l<j+n;l++){
			if(mat[k][l]==number){
				return false;
			}
		}
	}

	return true;

}


bool SolveSudoku(int mat[][9],int i,int j,int n){

// base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
// Other Cases
	if(j==n){
		return SolveSudoku(mat,i+1,0,n);
	}

	if(mat[i][j]!=0){
		return SolveSudoku(mat,i,j+1,n);
	}


// recursive case
	for(int number=1;number<=n;number++){
		if(isSafeToPlace(mat,i,j,n,number)){
			mat[i][j]=number;
			bool KyaBakiRakhPaye=SolveSudoku(mat,i,j+1,n);
			if(KyaBakiRakhPaye){
				return true;
			}
			mat[i][j]=0;

		}
	}
	return false;

}



int main(){

	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};


	SolveSudoku(mat,0,0,9);


	return 0;
}