// Strings
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;



int main(){

	// string s;
	// // cin>>s;
	// // cout<<s<<endl;
	// getline(cin,s);
	// cout<<s<<endl;
	// string s2="Hello World";
	// if(s==s2){
	// 	cout<<"Matched ";
	// }
	// else 
	// 	cout<<"Not matched "<<endl;


	// int i;
	// for(i=0;i<4;i++){
	// 	if(s1[i]==s){
	// 		cout<<"In the array";
	// 		break;
	// 	}
	// }
	// if(i==4){
	// 	cout<<"Not in array";
	// }

	string s1[10]={"Hello", "Apple","Papaya","Guava"};

	sort(s1,s1+4);
	for(int i=0;i<4;i++){
		cout<<s1[i];
	}


	return 0;
}