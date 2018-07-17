// ElephantWays
#include <iostream>
using namespace std;

int ElephantWays(int m,int n){
	int dp[100][100]={0};
	dp[0][0]=1;

	int val=1;
	// Initializing zeroth column
	for(int i=1;i<=m;i++){
		dp[i][0]=val;
		val= val*2;
	}
	// Initializing zeroth row
	val=1;
	for(int j=1;j<=n;j++){
		dp[0][j]=val;
		val=val*2;
	}

	// Fill the rest of the dp array
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int sum=0;
			for(int k=0;k<i;k++){
					sum +=dp[k][j];
			}
			for(int l=0;l<j;l++){
				sum += dp[i][l];
			}
			dp[i][j]=sum;
		}
	}

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}


int main(){

	int i,j;
	cin>>i>>j;
	cout<<ElephantWays(i,j);


	return 0;
}