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

class Pair{
public:
	int height;
	int diameter;
};

Pair FastDiameter(node* root){
	Pair p;
	if(root==NULL){
		p.height=p.diameter=0;
		return p;
	}

	Pair left=FastDiameter(root->left);
	Pair right=FastDiameter(root->right);


	p.height=max(left.height,right.height)+1;

	int op1=left.height+right.height;
	int op2=left.diameter;
	int op3=right.diameter;

	p.diameter=max(op1,max(op2,op3));

	return p;
}

node* BuildLevelwise(){
	int data;
	cout<<"Enter Root Node : ";
	cin>>data;
	if(data==-1){
		return NULL;
	}
	node* root=new node(data);
	queue <node*> q;

	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		int c1,c2;
		cout<<"Enter children of "<<temp->data<<" : ";
		cin>>c1>>c2;
		if(c1!=-1){
			temp->left=new node(c1);
			q.push(temp->left);
		}
		if(c2!=-1){
			temp->right=new node(c2);
			q.push(temp->right);
		}

	}
	return root;

}

void mirror(node* root){
	// base case
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}
int index=0;

node* MakeTree(int *pre,int* in,int s,int e){
// base case
	if(s>e){
		return NULL;
	}

// Create a root node using pre order
	node* root=NULL;
	int data=pre[index];
	root=new node(data);
	index++;

// search for the root node in inorder
	int k=-1;
	for(int j=s;j<=e;j++){
		if(in[j]==data){
			k=j;
			break;
		}
	}

// Build Left and right subtree
	root->left=MakeTree(pre,in,s,k-1);
	root->right=MakeTree(pre,in,k+1,e);

	return root;
}


int main(){

	// node* root=createTree();
	// LevelOrder(root);
	// cout<<endl;
	// mirror(root);
	// LevelOrder(root);
	int pre[]={8,10,1,6,4,7,3,14,13};
	int in[]={1,10,4,6,7,8,3,13,14};

	node* root=MakeTree(pre,in,0,8);
	LevelOrder(root);


	return 0;
}