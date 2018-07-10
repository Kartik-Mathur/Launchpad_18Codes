// Minhead
#include <vector>
#include <iostream>
using namespace std;


class Minheap{
	vector <int >v;

	void heapify(int index){
		int left=2*index;
		int right=left+1;

		int min_index=index;
		if(left<v.size() && v[left]<v[min_index]){
			min_index=left;
		}
		if(right<v.size() && v[right]<v[min_index]){
			min_index=right;
		}

		if(min_index!=index){
			swap(v[min_index],v[index]);
			heapify(min_index);
		}


	}

public:

	Minheap(){
		v.push_back(-1);
	}

	void push(int data){
		v.push_back(data);

		int index=v.size()-1;
		int parent=index/2;

		while(index > 1 && v[parent]>v[index]){
			swap(v[parent],v[index]);
			index=parent;
			parent=parent/2;
		}
	}

	void pop(){
		int last=v.size()-1;
		swap(v[1],v[last]);
		v.pop_back();
		heapify(1);

	}


	int top(){
		return v[1];
	}

	bool empty(){
		return v.size()==1;
	}


};