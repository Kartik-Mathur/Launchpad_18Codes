#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;	

	node(int d):data(d),next(NULL){

	}

	~node(){
		if(next!=NULL){
			delete next;
			next=NULL;
		}
		// cout<<"Deleting node : "<<data<<endl;
	}
};

class LinkedList{
	node* recursiveSearchHelper(node*start,int key){
		if(start==NULL){
			return NULL;
		}
		if(start->data==key){
			return start;
		}

		return recursiveSearchHelper(start->next,key);
	}

public:
	node* head;
	node* tail;

	LinkedList(){
		head=tail=NULL;
	}

	void insertAtFront(int data){
		if(head==NULL){
			head=tail=new node(data);
		}
		else{
			node* n=new node(data);
			n->next=head;
			head=n;
		}
	}

	void insertAtEnd(int data){
		if(head==NULL){
			head=tail=new node(data);
		}
		else{
			node* n= new node(data);
			tail->next=n;
			tail=n;
		}
	}

	void insertAtMid(int data,int pos){
		if(pos==0){
			insertAtFront(data);
		}
		else if(pos>=Length()){
			insertAtEnd(data);
		}
		else{
			node* temp=head;
			int jump=1;
			while(jump<=pos-1){
				temp=temp->next;
				jump++;
			}
			node* n=new node(data);
			n->next=temp->next;
			temp->next=n;
		}
	}

	void print(){
		node*temp=head;

		while(temp!=NULL){
			cout<<temp->data<<"-->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;

	}

	int Length(){
		node*temp=head;
		int count=0;
		while(temp!=NULL){
			count++;
			temp=temp->next;
		}
		return count;
	}

	node* search(int key){
		node* temp=head;
		while(temp!=NULL){
			if(temp->data==key){
				return temp;
			}
			temp=temp->next;
		}
		return NULL;
	}

	node*recursiveSearch(int key){
		return recursiveSearchHelper(head,key);
	}

	node* FindMid(){
		node*slow= head;
		node*fast=head->next;

		while(fast!=NULL){
			fast=fast->next;
			if(fast!=NULL){
				slow=slow->next;
				fast=fast->next;
			}
		}
		return slow;
	}

	void deleteAtFront(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}


	void deleteAtEnd(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=tail=NULL;
		}
		else{
			node*temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
			tail=temp;
		}

	}

	void deleteAtMid(int pos){
		int jump=1;
		node* temp=head;
		while(jump<=pos-1){
			temp=temp->next;
			jump++;
		}
		node* n=temp->next;
		temp->next=n->next;
		n->next=NULL;
		delete n;

	}

	~LinkedList(){
		if(head){
			delete head;
			head=tail=NULL;
		}
	}

};


node* merge(node* a,node* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

	node*c;
	if(a->data<b->data){
		c=a;
		c->next=merge(a->next,b);
	}
	else{
		c=b;
		c->next=merge(a,b->next);
	}
	return c;
}


int main(){

	LinkedList l,l1;
	l.insertAtEnd(2);
	l.insertAtEnd(4);
	l.insertAtEnd(6);
		l.print();

	l1.insertAtEnd(1);
	l1.insertAtEnd(3);
	l1.insertAtEnd(5);
	l1.print();

	l.head=merge(l.head,l1.head);
	l.print();
	delete l.tail;
	l.print();

	return 0;
}