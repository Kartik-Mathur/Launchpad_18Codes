// ReverseNumber
#include <iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int i;
	for(i=n;i>0;i/=10){
		cout<<i%10;
	}

	return 0;
}