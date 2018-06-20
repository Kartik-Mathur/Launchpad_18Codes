// SQRT

#include <iostream>
using namespace std;

int main(){

	int n,prec;
	cin>>n>>prec;

	int currentprec=0;
	float i=0;
	float inc=1;
	float ans;

	while(currentprec<=prec){

	while(i*i<=n){

		i=i+inc;

	}

	i=i-inc;
	
	inc=inc/10;
	currentprec++;
	}
	cout<<i;

	return 0;
}