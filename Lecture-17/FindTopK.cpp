// FindTopK
#include <iostream>
#include <queue>
#include <functional>
using namespace std;
void print(priority_queue<int,vector<int>,greater<int> >q){
	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
}


int main(){
	priority_queue<int,vector<int>,greater<int> >q; 
	int no;
	int k=3;
	int cs=0;
	while(1){
		cin>>no;
		if(no==-1){
			print(q);
		}
		else if(cs<k){
			q.push(no);
			cs++;
		}
		else{
			if(q.top()<no){
				q.pop();
				q.push(no);
			}
		}

	}


	return 0;
}