// Classes
#include <iostream>
#include <cstring>
using namespace std;

// ------------------- BLUE PRINT---------------------------
class car{
private:
	int seats;
public:
	char *name;
	int price;
	int model;

	car (){
		name=NULL;
		// cout<<"I am in constructor!"<<endl;
	}

	car(char *n,int p,int s,int m){
		price=p;
		seats=s;
		model=m;
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

	car (car &X){
		price=X.price;
		seats=X.seats;
		model=X.model;
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<"$"<<endl;
		cout<<"Model : "<<model<<endl;
		cout<<"Seats : "<<seats<<endl<<endl;		
	}

	void SetSeats(int s){
		seats=s;
	}

	int getSeats(){
		return seats;
	}

	void SetName(char *n){
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

	void SetValues(char *n,int p,int s,int m){
		price=p;
		model=m;
		seats=s;
		name=new char[strlen(n)+1];
		strcpy(name,n);

	}

};

// ---------------------------------------------------------

int main(){

	car A; // object
	A.price=100;
	A.model=200;
	// A.seats=4;
	A.SetSeats(5);
	// strcpy(A.name,"Audi");
	A.SetName("Audi");
	cout<<A.getSeats()<<endl;
	// cout<<"Name  : "<<A.name<<endl;
	// cout<<"Price : "<<A.price<<"$"<<endl;
	// cout<<"Model : "<<A.model<<endl;
	// cout<<"Seats : "<<A.seats<<endl;

	car B;
	B.SetValues("BMW",200,7,2001);

	car C("Toyota",121,2,300);

	car D=A; 
	car E(A);

	A.name[0]='G';
	A.price=5000;

	A.print();
	B.print();
	C.print();
	D.print();
	E.print();

	return 0;
}