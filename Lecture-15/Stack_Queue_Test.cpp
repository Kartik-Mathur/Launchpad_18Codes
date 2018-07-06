// Stack_Queue_Test
#include <iostream>
#include "Stack_Using_Queues.h"
using namespace std;

int main(){
	stack s;

	for(int i=0;i<10;i++){
		s.push(i);
	}

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


}