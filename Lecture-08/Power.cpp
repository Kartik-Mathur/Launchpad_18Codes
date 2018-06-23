// Power
#include <iostream>
using namespace std;

int power(int x,int y){
	// Base Case
	if(y==0){
		return 1;
	}

	// RecursiveCase

	int ans=x*power(x,y-1);
	return ans;
}


int main(){

	cout<<power(5,3);


	return 0;
}