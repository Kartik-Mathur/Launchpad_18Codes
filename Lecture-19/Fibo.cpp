// Fibo
#include <iostream>
using namespace std;

int fibo(int n){
	if(n==0 || n==1){
		return n;
	}

	return fibo(n-1)+fibo(n-2);
}

// Top Down
int TopDownFibo(int n,int *dp){
	if(n==0 || n==1){
		dp[n]=n;
		return n;
	}

// If memoized then return it instead of calculating it
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans=TopDownFibo(n-1,dp)+TopDownFibo(n-2,dp);
	dp[n]=ans;
	return ans;
}

// Bottom Up
int FiboBottomUp(int n){
	int *dp=new int[n+1];
	// Initialization
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}

	int ans=dp[n];
	delete []dp;
	return ans;

}


int main(){
	int dp[10000];
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}

	cout<<FiboBottomUp(n)<<endl;

	return 0;
}