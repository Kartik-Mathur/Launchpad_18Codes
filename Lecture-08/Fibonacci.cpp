// Fibonacci

#include <iostream>
using namespace std;

int fibo(int n){
	// base case
	if(n==0 || n==1){
		return n;
	}

	int fib=fibo(n-1)+fibo(n-2);
	// int a=fibo(n-1);
	// int b=fibo(n-2);

	return fib;


}

int main(){	

	cout<<fibo(5);
	return 0;
}


