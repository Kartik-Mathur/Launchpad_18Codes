// Recursion
#include <iostream>
using namespace std;

int factorial(int n){
// Base case
	if(n==0){
		return 1;
	}

	// Recursive call
	int ans=n*factorial(n-1);

	return ans;

}


int main(){	

	cout<<factorial(5);

	return 0;
}


