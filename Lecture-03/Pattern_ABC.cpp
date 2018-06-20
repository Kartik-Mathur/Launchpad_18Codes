// Pattern_ABC
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int i=1;
	char ch;
	while(i<=n){
		ch='A';
		int j=1;
		while(j<=n-i+1){
			cout<<ch;
			ch++;
			j++;
		}
		j=1;
		ch--;
		while(j<=n-i+1){
			cout<<ch;
			ch--;
			j++;
		}
		cout<<endl;



		i++;
	}

	// for(i=1;i<=n;i++){

	// }



	return 0;
}