// CheckPrime
#include <iostream>
using namespace std;

bool CheckPrime(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}

	return true;
}

void generateAllPrimes(int n){

	for(int i=2;i<=n;i++){

		if(CheckPrime(i)){
			cout<<i<<" ";
		}
	}

}


int main(){

	int n;
	cin>>n;

	generateAllPrimes(n);

	return 0;
}