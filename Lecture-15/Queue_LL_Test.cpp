// Queue_LL_Test
#include <iostream>
#include "Queue_LL.h"
using namespace std;

int main(){
	// queue q(10);
	queue q;

	for(int i=0;i<4;i++){
		q.push(i);
	}
	q.push(5);
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}


	return 0;
}
