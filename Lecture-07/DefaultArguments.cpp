// DefaultArguments
#include <iostream>
using namespace std;

int sum(int a=0,int b=0,int c=0){

	return (a+b+c);
}


int main(){

	int a=5,b=10,c=15;

	cout<<sum(a,b,c)<<endl;
	cout<<sum(a,b)<<endl;
	cout<<sum(a)<<endl;
	cout<<sum()<<endl;
	return 0;
}