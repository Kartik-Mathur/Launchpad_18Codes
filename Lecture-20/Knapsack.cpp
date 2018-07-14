#include <iostream>
#include <climits>
using namespace std;

int Knapsack(int prices[],int wts[],int N,int W,int dp[][100]){
	if(N==0 || W==0){
		dp[N][W]=0;
		return 0;
	}

	if(dp[N][W]!=0){
		return dp[N][W];
	}

	int inc=0,exc=0;
	if(wts[N-1]<=W){	
		inc=prices[N-1]+Knapsack(prices,wts,N-1,W-wts[N-1],dp);
	}
	exc=Knapsack(prices,wts,N-1,W,dp);

	dp[N][W]=max(inc,exc);
	return dp[N][W];
}

int BottomUp(int prices[],int wts[],int N,int W){
	int dp[100][100]={0};

	for(int n=0;n<=N;n++){
		for(int w=0;w<=W;w++){
			if(n==0||w==0){
				dp[n][w]=0;
			}
			else{
				int inc=0,exc=0;
				if(wts[n-1]<=w){
					inc=prices[n-1]+dp[n-1][w-wts[n-1]];
				}
				exc=dp[n-1][w];
				dp[n][w]=max(inc,exc);
			}
		}
	}

	for(int n=0;n<=N;n++){
		for(int w=0;w<=W;w++){
			cout<<dp[n][w]<<" ";
		}
		cout<<endl;
	}
	return dp[N][W];
}


int main(){
	int wts[]={1,2,3,2};
	int prices[]={5,20,20,10};
	int n=4;
	int w=5;
	int dp[100][100]={0};

	cout<<BottomUp(prices,wts,n,w)<<endl;

	return 0;
}