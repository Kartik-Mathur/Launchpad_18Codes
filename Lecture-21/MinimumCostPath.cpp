#include <iostream>
using namespace std;


int Mincost(int cost[][10],int i,int j){
	if(i==0 && j==0){
		return cost[i][j];
	}
	else if(i==0 && j>0){
		return Mincost(cost,i,j-1)+cost[i][j];
	}
	else if(j==0 && i>0){
		return Mincost(cost,i-1,j)+cost[i][j];
	}
	int op1=Mincost(cost,i-1,j)+cost[i][j];
	int op2=Mincost(cost,i,j-1)+cost[i][j];

	return min(op1,op2);
}

int TopDown(int cost[][10],int i,int j,int dp[][10]){
	if(dp[i][j]!=0){
		return dp[i][j];
	}
	if(i==0 && j==0){
		dp[i][j]=cost[i][j];
		return cost[i][j];
	}
	else if(i==0 && j>0){
		dp[i][j]=TopDown(cost,i,j-1,dp)+cost[i][j];
		return dp[i][j];
	}
	else if(j==0 && i>0){
		dp[i][j]=TopDown(cost,i-1,j,dp)+cost[i][j];
		return dp[i][j];
	}
	int op1=TopDown(cost,i-1,j,dp)+cost[i][j];
	int op2=TopDown(cost,i,j-1,dp)+cost[i][j];
	dp[i][j]=min(op1,op2);
	return dp[i][j];
}

int BottomUp(int cost[][10],int m,int n){
	int dp[10][10]={0};

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){

			if(i==0 && j==0){
				dp[i][j]=cost[i][j];
			}
			else if(i==0 && j>0){
				dp[i][j]=cost[i][j]+dp[i][j-1];
			}
			else if(i>0 && j==0){
				dp[i][j]=cost[i][j]+dp[i-1][j];
			}
			else{
				dp[i][j]=min(dp[i-1][j],dp[i][j-1])+cost[i][j];
			}
		}
	}
	return dp[m][n];
}


int main(){
	int cost[][10]={
		{1,2,3,1},
		{2,5,1,3},
		{1,2,2,2},
		{1,1,1,1}
	};
	int dp[10][10]={0};
	cout<<Mincost(cost,3,3)<<endl;
	cout<<TopDown(cost,3,3,dp)<<endl;
	cout<<BottomUp(cost,3,3)<<endl;
	return 0;
}