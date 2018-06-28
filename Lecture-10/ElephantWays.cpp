#include <iostream>
using namespace std;

int ways(int i,int j){
	// base case
	if(i==0 && j==0){
		return 1;
	}

	int ans=0;
	for(int k=1;k<=i;k++){
		ans+=ways(i-k,j);
	}

	for(int k=1;k<=j;k++){
		ans+=ways(i,j-k);
	}
	return ans;

}



int main(){
	cout<<ways(2,2)<<endl;


	return 0;
}