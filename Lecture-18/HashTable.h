#ifndef HashTable_H
#define HashTable_H
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class node{
public:
	string key;
	T value;
	node<T>*next;

	node(string k,T v){
		// this->key=key;
		// this->value=value;
		key=k;
		value=v;
	}
};


template <typename T>
class hashtable{
	node<T>** Bucket;
	int cs;
	int ts;

	int HashFn(string key){
		int ans=0;
		int p=1;

		for(int i=0;i<key.length();i++){
			ans += key[i]*p;

			p *= 37;

			p %= ts;
			ans %= ts;
		}
		return ans;
	}

	void rehash(){
		node<T> **oldBucket=Bucket;
		int oldts=ts;

		ts=2*ts;
		cs=0;
		Bucket=new node<T>*[ts];

		for(int i=0;i<ts;i++){
			Bucket[i]=NULL;
		}

		for(int i=0;i<oldts;i++){
			node<T>*temp=oldBucket[i];

			while(temp!=NULL){
				insert(temp->key,temp->value);
				temp=temp->next;
			}

			if(oldBucket[i]!=NULL){
				delete oldBucket[i];
			}
		}
		delete []oldBucket;

	}

public:
	hashtable(int ms=7){
		cs=0;
		ts=ms;
		Bucket=new node<T>*[ts];

		for(int i=0;i<ts;i++){
			Bucket[i]=NULL;
		}
	}


// Insertion
	void insert(string key,T value){
		int i=HashFn(key);

		node <T>*n=new node<T>(key,value);
		n->next=Bucket[i];
		Bucket[i]=n;
		cs++;

		float lf=cs/(ts*1.0);
		if(lf>0.7){
			rehash();
		}

	}

	void print(){

		for(int i=0;i<ts;i++){
			node<T>*temp=Bucket[i];
			cout<<"Bucket "<<i<<"->";
			while(temp!=NULL){
				cout<<temp->key<<"-> ";
				temp=temp->next;
			}
			cout<<endl;
		}
	}

	T* search(string key){
		int i=HashFn(key);
		node<T> * temp=Bucket[i];
		while(temp!=NULL){
			if(temp->key==key){
				return &(temp->value);
			}
			temp=temp->next;
		}
		return NULL;

	}

	T& operator[](string key){
		T* temp=search(key);
		if(temp==NULL){
			T garbage;
			insert(key,garbage);

			temp=search(key);
			return (*temp);

		}
		else{
			return (*temp);
		}
	}

	void erase(string key){
		// homework
	}

};


#endif