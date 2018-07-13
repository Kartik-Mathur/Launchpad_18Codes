// BusyMan
#include <iostream>
#include <algorithm>
using namespace std;


class Pair{
public:
	long long int s;
	long long int e;

};

bool compare(Pair a,Pair b){
	if(a.e==b.e){
		return a.s>b.s;
	}
	else{
		return a.e<b.e;
	}
}


int main(){
	Pair a[1000];
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		for(int i=0;i<n;i++){
			cin>>a[i].s>>a[i].e;
		}
		sort(a,a+n,compare);
		int count=1;
		int compare_val=a[0].e;

		for(int i=1;i<n;i++){
			if(a[i].s>=compare_val){
				count++;
				compare_val=a[i].e;
			}
		}

		cout<<count<<endl;

	}



	return 0;
}