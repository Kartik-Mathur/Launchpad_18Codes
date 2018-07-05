// Stack_Vectors
#include <vector>
using namespace std;

template <typename T>
class stack{
	vector <T> v;
public:
	void push(T data){
		v.push_back(data);
	}

	void pop(){
		v.pop_back();
	}

	T top(){
		return v[v.size()-1];
	}

	int size(){
		return v.size();
	}

	bool isEmpty(){
		return v.size()==0;
	}


};