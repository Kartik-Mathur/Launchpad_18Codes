#ifndef VECTOR_H
#define VECTOR_H
template <typename T>
class vector{
	int cs;
	int ms;
	T *arr;

public:
	vector(int d=2){
		cs=0;
		ms=d;
		arr=new T[ms];
	}

	void push_back(T data){
		if(cs==ms){
			T *oldArr=arr;
			arr=new T[2*ms];
			ms=2*ms;

			for(int i=0;i<cs;i++){
				arr[i]=oldArr[i];
			}
			delete []oldArr;
		}
		arr[cs]=data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}

	T operator[](int i){
		return arr[i];
	}

};

#endif









