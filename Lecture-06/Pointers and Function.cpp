// Pointers and Function
#include <iostream>
using namespace std;

void update(int x){
	x=x+1;
	cout<<"In Update : "<<x<<endl; // 11

	return;
}

void ActualUpdate(int *x){
	(*x)++;
	cout<<"In ActualUpdate : "<<*x<<endl;
	return;
}


int main(){
	int x=10;
	cout<<"In Main : ";
	cout<<x<<endl; // 10

	update(x);

	cout<<"After Update : ";
	cout<<x<<endl; // 10

	ActualUpdate(&x);
	cout<<"After Actual Update : ";
	cout<<x<<endl;
	return 0;
}