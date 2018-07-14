// Wines
#include <iostream>
using namespace std;

int wines(int *a,int i,int j,int days,int dp[][100]){
	if(i>j){
		dp[i][j]=0;
		return 0;
	}

	if(dp[i][j]!=0){
		return dp[i][j];
	}

	int op1=a[i]*days+wines(a,i+1,j,days+1,dp);
	int op2=a[j]*days+wines(a,i,j-1,days+1,dp);

	return (dp[i][j]=max(op1,op2));

}


int BottomUp(int *a,int n){

	int days=n+1;
	int dp[100][100]={0};

	for(int i=0;i<=n;i++){
		dp[i][i]=a[i]*days;
	}
	days--;
	
	for(int k=2;k<=n+1;k++){
		int i=0;
		int end=n-k+1;
		while(i<=end){
			int j=i+k-1;
			int op1=a[i]*days+dp[i+1][j];
			int op2=a[j]*days+dp[i][j-1];
			dp[i][j]=max(op1,op2);
			i++;
		}
		days--;
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return dp[0][n];

}


int main(){
	int dp[100][100]={0};
	int a[]={2,3,5,1,4};
	int n=5;
	cout<<wines(a,0,n-1,1,dp)<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}