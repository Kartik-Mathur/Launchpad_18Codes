// Nqueen
#include <iostream>
using namespace std;

bool isSafeToPutHere(int board[][10],int i,int j,int n){
	for(int k=0;k<n;k++){
		if(board[i][k]==1 || board[k][j]==1){
			return false;
		}
	}
	int r=i,c=j;
	while(r>=0 && c>=0){
		if(board[r][c]==1){
			return false;
		}
		r--;
		c--;
	}

	r=i;c=j;
	while(r>=0 && c<n ){
		if(board[r][c]==1){
			return false;
		}
		r--;
		c++;
	}

	return true;
}


bool NQueen(int board[][10],int i,int j,int n){
	// Base Case
	if(i==n){
		// Print the solution
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}


	// Recursive case
	for(j=0;j<n;j++){
		if(isSafeToPutHere(board,i,j,n)){
			board[i][j]=1;
			bool KyaBakiBaatBani=NQueen(board,i+1,j,n);
			if(KyaBakiBaatBani){
				return true;
			}
			board[i][j]=0;
		}
	}
	return false;
}


int main(){
	int board[10][10]={0};
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;

	NQueen(board,0,0,n);


	return 0;
}