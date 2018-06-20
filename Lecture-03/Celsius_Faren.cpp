// Celsius_Faren
#include <iostream>
using namespace std;

int main(){


	int init,finalv,step;

	cin>>init>>finalv>>step;

	int f,c;

	f=init;

	while(f<=finalv){
		c=5*(f-32)/9;

		cout<<f<<" "<<c<<endl;// endl='\n'

		f=f+step;
	}



	return 0;
}