// OOPS

#include <iostream>
#include <cstring>
using namespace std;

class car{
private:
	int seats;
public:
	// const int tyres; // should be initialised everywhere
	static int count; 
	int price;
	int model;
	char *name;
	
	car():name(NULL){
		// name=NULL;
		count++;
	}

	// car(int p,int s,int m):price(p),model(m),seats(s){
	// 	count++;
	// }

	car(char *n,int p,int m,int s){
		count++;
		price=p;
		model=m;
		seats=s;
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

	car (car &X){
		count++;
		price=X.price;
		model=X.model;
		seats=X.seats;
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}

	void SetValues(char *n,int p,int m,int s){
		price=p;
		model=m;
		seats=s;
		if(name!=NULL){
			delete [] name;
			name=NULL;
		}
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}

	void SetSeats(int s){
		seats=s;
	}

	int getSeats(){
		return seats;
	}

	void operator=(car &X){
		price=X.price;
		seats=X.seats;
		model=X.model;
		if(name!=NULL){
			delete [] name;
		}
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
	}

	void operator+=(car &X){
		price+=X.price;
		seats+=X.seats;
		model=7777;
		int l1=strlen(name);
		int l2=strlen(X.name);
		char *newName=new char[l1+l2+1];
		strcpy(newName,name);
		for(int i=0;i<=l2;i++){
			newName[i+l1]=X.name[i];
		}
		delete []name;
		name=newName;
	}

	car *operator+(car &X){
		car* c=new car;
		count++;
		(*c).price=price+X.price;
		// c->price=price+X.price;
		(*c).seats=seats+X.seats;
		(*c).model=6666;
		
		int l1=strlen(name);
		int l2=strlen(X.name);
		char *newName=new char[l1+l2+1];
		strcpy(newName,name);
		for(int i=0;i<=l2;i++){
			newName[i+l1]=X.name[i];
		}
		(*c).name=newName;	
		return c;
	}

	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Seats : "<<seats<<endl;
		cout<<"Model : "<<model<<endl<<endl;
	}	

	~car (){
		count--;
		cout<<"I am in destructor!"<<endl;
	}

};

int car::count=0;


ostream & operator<<(ostream &OS,car &X){
	X.print();
	return OS;
}


int main(){

	car A("Audi",12,200,4);
	// A.SetValues("Audi",12,200,4);

	car B;
	B.SetValues("BMW",50,150,5);
	car C(A);
	car D=A;
	A.name[0]='G';
	car E;
	E=A;
	E+=B;
	car *F;
	F=E+C;


	// A.print();
	// B.print();
	// C.print();
	// D.print();
	// E.print();
	E.name[0]='R';
	cout<<A<<B<<C<<D<<E;
	cout<<"Car count is "<<car::count<<endl;
	(*F).print();

	delete F;
	(*F).print();

	cout<<"Car count is "<<car::count<<endl;
	return 0;	
}