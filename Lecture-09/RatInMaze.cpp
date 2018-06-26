// RatInMaze
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][10],int sol[][10],int i,int j,int n,int m){
	// Base Case
	if(i==n-1 && j==m-1){
		sol[i][j]=1;
		// Print the sol matrix
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<sol[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	sol[i][j]=1;
	// Check left	
	if(j<=m-1 && maze[i][j+1]!='X'){
		bool KyaLeftSeBaatBani=RatInMaze(maze,sol,i,j+1,n,m);
		if(KyaLeftSeBaatBani){
			return true;
		}
	}

	// check down
	if(i<=n-1 && maze[i+1][j]!='X'){
		bool kyaNeecheSebaatBani=RatInMaze(maze,sol,i+1,j,n,m);
		if(kyaNeecheSebaatBani){
			return true;
		}
	}
	// backtrack
	sol[i][j]=0;
	return false;
}



int main(){

	char maze[][10]={
		"000X",
		"00XX",
		"0000",
		"XX00"
	};

	int sol[10][10]={0};
	RatInMaze(maze,sol,0,0,4,4);



	return 0;
}