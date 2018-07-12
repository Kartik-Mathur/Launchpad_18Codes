// HashTable
#include <iostream>
#include "HashTable.h"
using namespace std;

int main(){
	hashtable <int>h;
	h.insert("Mango",100);
	h.insert("Apple",120);
	h.insert("Banana",20);
	h.insert("Chiku",10);
	// h.insert("PineApple",10);
	h["PineApple"]=20; // insertion
	h["PineApple"]=200; // Updation
	cout<<h["PineApple"]<<endl; // search

	h.print();
	return 0;
}
