#include <iostream>
#include <climits>
using namespace std;

int MinCoins(int coins[],int amt,int n){
	// base case
	if(amt==0){
		return 0;
	}
	// if(dp[amt]!=-1){
	// 	return dp[amt];
	// }
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		if(amt-coins[i]>=0){
			int smallerans=MinCoins(coins,amt-coins[i],n);
			if(smallerans!=INT_MAX){
				ans=min(ans,smallerans+1);
			}
		}
	}
	// dp[amt]=ans;
	return ans;
}


int BottomUp(int coins[],int n,int amount){
	int *dp=new int[amount+1];
	for(int i=0;i<=amount;i++){
		dp[i]=INT_MAX;
	}
	// Initialization
	dp[0]=0;

	for(int rupay=1;rupay<=amount;rupay++){

		for(int i=0;i<n;i++){
			if(rupay-coins[i]>=0){
				int smallerans=dp[rupay-coins[i]];
				dp[rupay]=min(dp[rupay],smallerans+1);
			}
		}
	}

	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[amount];

}

int main(){
	int coins[]={1,2,5,10};
	int n=4;
	int amount;
	cin>>amount;

	cout<<BottomUp(coins,n,amount)<<endl;


	return 0;
}