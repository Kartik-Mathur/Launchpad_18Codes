// Inbuilt_Sort
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool compare(int a,int b){
	cout<<"Compairing "<<a<<" and "<<b<<endl;
	return a<b;
}

bool myCompare(string a,string b){
	if(a.length()==b.length()){
		return a<b;
	}
	else{
		a>b;
	}
}


int main(){
// 	int x
// 	[]={1,2,4,5,9,6,0,1,5,7};
	
// 	// sort(a,a+10,compare);

// 	// for(int i=0;i<10;i++){
// 	// 	cout<<a[i]<<" ";
// 	// }
// // One way to declare a string
// 	string s("Hello World!");
// 	cout<<s<<endl;

// // Another Way
// 	string s2="Hello Coding!";
// 	cout<<s2<<endl;

// // Third Way
// 	char a[]="How are you ?";
// 	string s3(a);
// 	cout<<s3<<endl;

// 	char b[]="We are Studying Strings";

// 	char c[100];

// 	char d[]="We are Studying Strings";

// // Copying string b to string c
// 	strcpy(c,b);
// 	cout<<c<<endl;

//  if(strcmp(b,a)==0){
//  	cout<<"Matched!"<<endl;
//  }
//  else{
//  	cout<<"Not "<<endl;
//  }

	string s[]={"Appleee","Bananaaaa","Pineapple","Coding","Blocks"};
	sort(s,s+5,myCompare);
	for(int i=0;i<5;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}