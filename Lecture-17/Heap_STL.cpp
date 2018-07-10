// Heap_STL
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

class Person{
	string name;
	int money;
public:

	Person(string name,int money){
		this->name=name;
		this->money=money;
	}

	int getMoney(){
		return money;
	}

	friend ostream & operator<<(ostream & os,Person P);
};

class mycompare{
public:
	bool operator()(Person a,Person b){
		return a.getMoney()<b.getMoney();
	}

};

ostream & operator<<(ostream & os,Person P){
	os<<P.name<<endl;
	os<<P.money<<endl<<endl;

	return os;
}

int main(){
	// priority_queue<int> q;

	// int a[]={8,9,5,6,7,4,3,0,1,2};

	// int n=sizeof(a)/sizeof(int);

	// for(int i=0;i<n;i++){
	// 	q.push(a[i]);
	// }

	// while(!q.empty()){
	// 	cout<<q.top()<<" ";
	// 	q.pop();
	// }

	// priority_queue <int,vector <int>,mycompare> q; // using a class
	priority_queue <Person,vector <Person>,mycompare> q;

	Person P1("Kartik",100);
	Person P2("Sanjeev",150);
	Person P3("Shubham",50);
	Person P4("ANkita",200);

	q.push(P1);
	q.push(P2);
	q.push(P3);
	q.push(P4);

	while(!q.empty()){
		cout<<q.top();
		q.pop();
	}


	return 0;
}