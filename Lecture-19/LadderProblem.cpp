// LadderProblem
#include <iostream>
using namespace std;

// Top Down
int Ladder(int n,int *dp){
	if(n==0){
		dp[n]=1;
		return 1;
	}

	if(n<0){
		return 0;
	}
// Memoized result
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans=Ladder(n-1,dp)+Ladder(n-2,dp)+Ladder(n-3,dp);
	dp[n]=ans;
	return ans;
}

// BottomUp approach
int BottomUPLadder(int n){
	int *dp=new int[n+1];
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	int ans=dp[n];
	delete []dp;
	return ans;
}


int main(){
	int dp[10005];
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}

	cout<<BottomUPLadder(n)<<endl;



	return 0;
}