// Stack_Vectors_test
#include <iostream>
#include "Stack_Vectors.h"
#include <cstring>
using namespace std;

class Book{
public:
	int price;
	char name[100];

	Book(char *n,int p){
		strcpy(name,n);
		price=p;
	}

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	}

};


void print(stack <int> s){
	while(!s.isEmpty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}

int main(){
	stack <Book>s;
	Book b1("C++",150);
	Book b2("Java",200);
	
	s.push(b1);
	s.push(b2);

	while(!s.isEmpty()){
		s.top().print();
		s.pop();
	}

	return 0;
}