// Factorial
#include <iostream>
using namespace std;

int Factorial(int n){
	int ans=1;

	for(int i=1;i<=n;i++){
		ans=ans*i;
	}

	return ans;
}

int nCr(int n,int r){

	int ans=Factorial(n)/(Factorial(n-r)*Factorial(r));

	return ans;
}

int main(){

	int n,r;
	cin>>n>>r;

	cout<<Factorial(n)<<endl; // INVOKE
	cout<<nCr(n,r)<<endl;

	return 0;
}