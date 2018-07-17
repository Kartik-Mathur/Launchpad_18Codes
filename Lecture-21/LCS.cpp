// LCS

#include <iostream>
#include <cstring>
using namespace std;

int LCS(char *a,char *b){
	int dp[100][100]={0};
	int m=strlen(a);
	int n=strlen(b);

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i-1]==b[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	int index=dp[m][n];
	char *ans=new char[index];
	ans[index]='\0';
	index--;

	int i=m;
	int j=n;

	while(i>0 && j>0){
		if(a[i-1]==b[j-1]){
			ans[index]=a[i-1];
			index--;
			i--;
			j--;
		}
		else if(dp[i-1][j]>dp[i][j-1]){
			i--;
		}
		else{
			j--;
		}
	}
	cout<<ans<<endl;
	return dp[m][n];
}


int main(){

	char a[]="Prorgmnig";
	char b[]="Programming";
	cout<<LCS(a,b)<<endl;

	return 0;
}