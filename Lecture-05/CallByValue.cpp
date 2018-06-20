// CallByValue
#include <iostream>
using namespace std;
// call by value
void myswap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	cout<<"In my swap ";
	cout<<a<<" "<<b<<endl;

}	

// call by reference
void actualSwap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
	cout<<"In my swap ";
	cout<<a<<" "<<b<<endl;

}	
int main(){
	
	int a=10;
	int b=15;

	myswap(a,b);
	cout<<"In main ";
	cout<<a<<" "<<b;
	actualSwap(a,b);
	
	return 0;
}