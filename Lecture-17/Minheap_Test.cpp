// Minheap_Test
#include <iostream>
#include "Minhead.h"
using namespace std;

int main(){
	Minheap h;

	h.push(5);
	h.push(1);
	h.push(6);
	h.push(9);
	h.push(0);
	h.push(8);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}


	return 0;
}