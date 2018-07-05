// LinkedList
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}

};


node* takeInput(){
	node*head=NULL;
	int data;
	cin>>data;

	while(data!=-1){
		node* n=new node(data);
		n->next=head;
		head=n;
		cin>>data;
	}
	return head;
}

void print(node* head){

	while(head!=NULL){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;

}
node* FindMid(node* head){
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

node* merge(node *a,node* b){
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

node* mergeSort(node* head){
// base case
	if(head==NULL||head->next==NULL){
		return head;
	}
// divide
	node*mid=FindMid(head);
	node*a=head;
	node*b=mid->next;
	mid->next=NULL;

// sort
	a=mergeSort(a);
	b=mergeSort(b);
// merge
	return merge(a,b);	

}


int Length(node *head){
	node*temp=head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	return count;
}


void BubbleSort(node* &head){
	int n=Length(head);

	for(int i=0;i<n;i++){
		node* current=head;
		node* prev=NULL;
		while(current!=NULL && current->next!=NULL){
			if(current->data>current->next->data){
				if(prev==NULL){
					node*n=current->next;
					current->next=n->next;
					n->next=current;
					head=prev=n;
				}
				else{
					node*n=current->next;
					current->next=n->next;
					prev->next=n;
					n->next=current;
					prev=n;
				}
			}
			else{
				prev=current;
				current=current->next;
			}
		}

	}




}


int main(){

	node*head=takeInput();
	print(head);

	BubbleSort(head);
	print(head);


	return 0;
}