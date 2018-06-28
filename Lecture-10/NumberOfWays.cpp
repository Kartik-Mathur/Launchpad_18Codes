#include <iostream>
using namespace std;

int ways(int i,int j){
	if(i==0&&j==0){
		return 1;
	}

	if(i<0 || j<0){
		return 0;
	}

	return ways(i-1,j)+ways(i,j-1);
}



int main(){
	cout<<ways(2,3)<<endl;


	return 0;
}