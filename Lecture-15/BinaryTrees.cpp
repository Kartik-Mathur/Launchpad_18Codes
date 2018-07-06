// BinaryTrees

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

node* createTree(){
	int data;
	cin>>data;

	if(data==-1){
		return NULL;
	}
	node * n=new node(data);
	n->left=createTree();
	n->right=createTree();

	return n;
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

void printPost(node* root){
	if(root==NULL){
		return;
	}

	printPost(root->left);
	printPost(root->right);
	cout<<root->data<<" ";
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

int count(node* root){
	if(root==NULL){
		return 0;
	}

	int LeftTreeKiNodesBata=count(root->left);
	int RightTreeKiNodesBata=count(root->right);
	return 1+LeftTreeKiNodesBata+RightTreeKiNodesBata;

}

int height(node* root){
	if(root==NULL){
		return 0;
	}

	int h1=height(root->left);
	int h2=height(root->right);

	return 1+max(h1,h2);

}


int diameter(node* root){
	if(root==NULL){
		return 0;
	}

	int op1=height(root->left)+height(root->right);
	int op2=diameter(root->left);
	int op3=diameter(root->right);

	return max(op1,max(op2,op3));

}


int main(){

	node* root=createTree();
	// printPre(root);
	// cout<<endl;
	// printIn(root);
	// cout<<endl;
	// printPost(root);
	// cout<<endl;
	// LevelOrder(root);
	// cout<<endl;
	cout<<count(root)<<endl;
	cout<<height(root)<<endl;
	cout<<diameter(root)<<endl;
	return 0;
}