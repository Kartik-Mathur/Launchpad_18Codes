#include <iostream>
#include <queue>
using namespace std;


class node{
public:
	int data;
	node* left;
	node* right;
	node(int d):data(d),left(NULL),right(NULL){}
};

node* InsertInBst(node* root,int data){
// base case
	if(root==NULL){
		root=new node(data);
		return root;
	}

// conditions
	if(root->data<data){
		root->right=InsertInBst(root->right,data);
	}
	else{
		root->left=InsertInBst(root->left,data);
	}

	return root;
}

node* takeInput(){
	int data;
	cin>>data;
	node* root=NULL;
	while(data!=-1){
		root=InsertInBst(root,data);
		cin>>data;
	}
	return root;
}


void LevelOrder(node* root){
	queue <node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}


class LinkedList{
public:
	node* head;
	node* tail;
};

LinkedList BstToLL(node* root){
	LinkedList l;
	if(root==NULL){
		l.head=l.tail=NULL;
		return l;
	}

// case I
	if(root->left!=NULL && root->right==NULL){
		LinkedList left=BstToLL(root->left);
		left.tail->right=root;
		l.head=left.head;
		l.tail=root;
		return l;
	}
	else if(root->left==NULL && root->right!=NULL){
		LinkedList right=BstToLL(root->right);
		root->right=right.head;
		l.head=root;
		l.tail=right.tail;
		return l;
	}
	else if(root->left==NULL && root->right==NULL){
		l.head=l.tail=root;
		return l;
	}
	else{
		LinkedList left=BstToLL(root->left);
		LinkedList right=BstToLL(root->right);

		left.tail->right=root;
		root->right=right.head;
		l.head=left.head;
		l.tail=right.tail;
		return l;
	}

}

void print(LinkedList l){
	node* temp=l.head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->right;
	}

}



int main(){

	node *root=takeInput();

	LevelOrder(root);

	LinkedList l=BstToLL(root);
	print(l);

	return 0;
}