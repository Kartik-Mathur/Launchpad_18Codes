// Functions
#include <iostream>
using namespace std;
// Forward Declaration
void printHello(int); 

int sum(int a,int b){

	int ans=a+b;

	return ans;
}


void sum1(int a,int b){

	cout<<(a+b)<<endl;

	return;
}

int main(){
	int n;
	cin>>n;

	printHello(n); // Function Invoke karna

	int a=10;
	int b=15;

	int c=sum(a,b);
	cout<<c;



	return 0;
}


void printHello(int a){
	
	cout<<"Hello"<<a<<endl;

}