// BinarySearchTree
#include <iostream>
#include<queue>
#include <climits>
#include <cmath>
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

void printPre(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	printPre(root->left);
	printPre(root->right);

}


void printIn(node* root){
	if(root==NULL){
		return;
	}

	printIn(root->left);
	cout<<root->data<<" ";
	printIn(root->right);

}

bool isBst(node* root,int min=INT_MIN,int max=INT_MAX){
	if(root==NULL){
		return true;
	}

	if(root->data>=min && root->data<=max && isBst(root->left,min,root->data) && isBst(root->right,root->data,max)){
		return true;
	}
	else{
		return false;
	}

}

class Pair{
	public:
		int height;
		bool balance;
};

Pair isBalanced(node* root){
	Pair p;
	if(root==NULL){
		p.height=0;
		p.balance=true;
		return p;
	}

	Pair left=isBalanced(root->left);
	Pair right=isBalanced(root->right);

	if(left.balance && right.balance && abs(left.height-right.height)<=1){
		p.balance=true;
	}
	else{
		p.balance=false;
	}

	p.height=1+max(left.height,right.height);

	return p;

}


node* ArrayToBst(int a[],int s,int e){
	if(s>e){
		return NULL;
	}

	int mid=(s+e)/2;
	node* root=new node(a[mid]);

	root->left=ArrayToBst(a,s,mid-1);
	root->right=ArrayToBst(a,mid+1,e);

	return root;
}


int main(){

	// node* root=takeInput();
	//  // LevelOrder(root);
	//  // // cout<<endl;
	//  // // printIn(root);
	//  // // cout<<endl;
	//  // // printPre(root);
	//  // if(isBst(root)){
	//  // 	cout<<"BST";
	//  // }
	//  // else{
	//  // 	cout<<"Not a BST";
	//  // }
	// Pair p=isBalanced(root);
	// cout<<p.balance<<" "<<p.height<<endl;
	int a[]={1,2,3,4,8,9,10,11};
	node* root=ArrayToBst(a,0,7);
	LevelOrder(root);
	return 0;
}