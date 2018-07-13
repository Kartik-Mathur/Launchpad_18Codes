// MinWays

#include <iostream>
#include <climits>
using namespace std;

int MinWays(int n){
	if(n==1){
		return 0;
	}

	int a=INT_MAX,b=INT_MAX,c=INT_MAX;
	if(n%3==0){
		a=1+MinWays(n/3);
	}
	if(n%2==0){
		b=1+MinWays(n/2);
	}
	c=1+MinWays(n-1);

	return min(a,min(b,c));
}

// TOp Down Approach
int MinWaysTopDown(int n,int *dp){
	if(n==1){
		dp[n]=0;
		return 0;
	}

	// Using the meomized result
	if(dp[n]!=-1){
		return dp[n];
	}


	int a=INT_MAX,b=INT_MAX,c=INT_MAX;
	if(n%3==0){
		a=1+MinWaysTopDown(n/3,dp);
	}
	if(n%2==0){
		b=1+MinWaysTopDown(n/2,dp);
	}
	c=1+MinWaysTopDown(n-1,dp);

	dp[n]=min(a,min(b,c));

	return dp[n];


}

// BottomUp
int MinstepsBottomUP(int n){
	// HomeWork
}



//-------------------------------------------------------------------------------------------
//----------------------------------------- For K steps -------------------------------------
//-------------------------------------------------------------------------------------------

// Top Down approach
int stepsTopDown(int n,int k,int *dp){
	if(n==0){
		dp[n]=1;
		return dp[n]; 
	}

	if(n<0){
		return 0;
	}
// check that if the value is already memoized or not
	if(dp[n]!=-1){
		return dp[n];
	}
	int ans=0;
	for(int i=1;i<=k;i++){
		ans += stepsTopDown(n-i,k,dp);
	}
	dp[n]=ans;
	return dp[n];
}

int stepsBottomUp(int n,int k){
	int *dp=new int[n+1];
	dp[0]=1;

	for(int step=1;step<=n;step++){
		dp[step]=0;
		for(int j=1;j<=k;j++){
			if(step-j>=0){
				dp[step] += dp[step-j];
		 	}
		}
	}
	return dp[n];
}

// Doing it in O(n)?
int stepsfast(int n,int k){
	int *dp=new int[n+1];
	dp[0]=1;
	dp[1]=1;
	for(int step=2;step<=n;step++){
		dp[step]=0;
		if(step-k-1>=0){
			dp[step]=2*dp[step-1]-dp[step-k-1];
		}
		else{
			dp[step]=2*dp[step-1];
		}
	}
	int ans=dp[n];
	delete []dp;
	return ans;
}



//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------


int main(){
	int dp[10005];
	int n;
	cin>>n;

	for(int i=0;i<=n;i++){
		dp[i]=-1;
	}

	cout<<MinWaysTopDown(n,dp)<<endl;

	return 0;
}