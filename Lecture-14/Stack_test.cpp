// Stack_test
#include <iostream>
#include "Stack.h"
using namespace std;

void print(stack s){
	while(!s.isEmpty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}

int main(){
	stack s;

	for(int i=0;i<10;i++){
		s.push(i);
	}
	print(s);


	return 0;
}