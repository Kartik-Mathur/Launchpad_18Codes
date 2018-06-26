// Multiply
#include <iostream>
using namespace std;

int Multiply(int x,int y){
	if(y==0){
		return 0;
	}

	int ans=x+Multiply(x,y-1);
	return ans;
}


int main(){

	int x,y;
	cin>>x>>y;

	cout<<Multiply(x,y);

	return 0;
}