// Stack_Using_Queues
#include <iostream>
#include <queue>
using namespace std;

class stack{
	queue <int> q1;
	queue <int> q2;
public:

	void push(int data){
		if(!q1.empty()&&q2.empty()){
			q1.push(data);
		}
		else if(q1.empty()&&!q2.empty()){
			q2.push(data);
		}
		else{
			q1.push(data);
		}
	}

	void pop(){
		if(!q1.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
		else{
				while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
	}

	int top(){
		if(!q1.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
				q1.pop();
			}
			int data=q1.front();
			q1.pop();
			q2.push(data);
			return data;
		}
		else{
				while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();
			}
			int data=q2.front();
			q2.pop();
			q1.push(data);
			return data;
		}	
	}

	bool empty(){
		return (q1.empty() && q2.empty());
	}

};

