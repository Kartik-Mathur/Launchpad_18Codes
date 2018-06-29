// Pairs
#include <iostream>
using namespace std;

class Pair{
public:
	int x,y;

	Pair(int a,int b):x(a),y(b){

	}

	bool operator<(Pair &B){

		if(x<B.x && y<B.y){
			return true;
		}
		else{
			return false;
		}

	}


};


int main(){

	Pair p1(4,3);
	Pair p2(5,6);

	if(p1<p2){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}




	return 0;
}