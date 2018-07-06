// CircularQueue
#include <iostream>
using namespace std;

class queue{
	int f;
	int r;
	int *arr;
	int cs;
	int ts;
public:
	queue(int ms=4){
		f=0;
		ts=ms;
		r=ts-1;
		cs=0;
		arr=new int[ms];
	}

	void push(int data){
		if(!full()){
			r=(r+1)%ts;
			arr[r]=data;
			cs++;
		}
		else{
			cout<<"Queue OverFlow!";
		}
	}

	void pop(){
		if(!empty()){
			f=(f+1)%ts;
			cs--;
		}
		else{
			cout<<"Queue UnderFLow"<<endl;
		}
	}

	bool empty(){
		return cs==0;
	}

	bool full(){
		return cs==ts;
	}

	int front(){
		return arr[f];
	}

	int size(){
		return cs;
	}
};