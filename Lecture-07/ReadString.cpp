#include <iostream>
using namespace std;


void readLine(char *b,char delimit='\n'){
	char ch=cin.get();
	int i=0;
	while(ch!=delimit){
		b[i]=ch;
		i++;
		ch=cin.get();
	}
	b[i]='\0';
}

int length(char b[]){
		int i;
		for(i=0;b[i]!='\0';i++){
			// cout<<b[i];
		}
		return i;
}



int main(){
	int n;
	char b[100];
	cin>>n;
	// readLine(b,'$');
	// cout<<b<<endl;
	cin.get();
	cin.getline(b,100); // cin.getline(char , max_size, delimiter);
	cout<<n<<endl;
	cout<<b<<endl;
	cout<<length(b)<<endl;




	return 0;
}