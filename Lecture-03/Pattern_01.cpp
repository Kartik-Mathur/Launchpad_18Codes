// Pattern_01
#include <iostream>
using namespace std;

int main(){

	int n;
	int i,j,val;

	cin>>n;
	// for(i=1;i<=n;i++){

	// 	for(j=1;j<=i;j++){
	// 		if((i+j)%2==0){
	// 			cout<<1;
	// 		}
	// 		else{
	// 			cout<<0;
	// 		}
	// 	}
	// 	cout<<endl;
	// }

	for(i=1;i<=n;i++){
		if(i%2==0){
			val=0;
		}
		else{
			val=1;
		}

	for(j=1;j<=i;j++){
		cout<<val;
		val=1-val;
	}
		cout<<endl;
	}

	return 0;
}



/* FOR N=7
*******
*** ***
**   **
*     *
**   **
*** ***
*******

for n=9
*   *****
*   *
*   *
*   *
*********
    *   * 
    *   *
    *   *
*****   *



*/