// OddOneOut
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n; // Total Numbers to be entered
	int a=0;
	int num;
	for(int i=1;i<=n;i++){
		cin>>num;
		a^=num; // a=a^num;
	}

	cout<<a;


	return 0;
}