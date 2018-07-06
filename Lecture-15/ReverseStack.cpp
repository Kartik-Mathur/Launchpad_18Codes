// ReverseStack
#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack <int> &s,int topElement){
	if(s.empty()){
		s.push(topElement);
		return;
	}

	int top=s.top();
	s.pop();
	pushBottom(s,topElement);
	s.push(top);
}

void ReverseStack(stack <int> &s){
	if(s.empty()){
		return;
	}

	int topElement=s.top();
	s.pop();
	ReverseStack(s);
	pushBottom(s,topElement);

}

int main(){
	stack <int >s;

	for(int i=0;i<6;i++){
		s.push(i);
	}

	ReverseStack(s);

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}



	return 0;
}