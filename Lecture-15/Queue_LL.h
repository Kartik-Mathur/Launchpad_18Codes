// CircularQueue_LL
#include <iostream>
using namespace std;
class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){}
};

class queue{
	node* f;
	node* r;
	int count;
public:
	queue(){
		f=r=NULL;
		count=0;
	}

	void push(int d){
		if(f==NULL){
			f=r=new node(d);
			count++;
		}
		else{
			node* n=new node(d);
			r->next=n;
			r=n;
			count++;
		}
	}

	void pop(){
		node* temp=f;
		f=f->next;
		delete temp;
		count--;
	}

	bool empty(){
		return count==0;
	}

	int front(){
		return f->data;
	}

	int size(){
		return count;
	}


};