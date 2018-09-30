// Class
#include <iostream>
using namespace std;

// ------- BLUE PRINT ----------
class car{
private:
	int seats;
public:
	// const int tyres; // Initialisation is required for const
	static int count;
	char *name;
	int price;
	int model_no;

	car(){
		name=NULL;
		cout<<"I am in Constructor! "<<endl;
		count++;
	}

	// parametrized constructor
	car(char *n,int p,int s,int m){
		cout<<"IN parametrized constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model_no=1111;		
		count++;
	}
	// parameterized constructor
	car(int p,int s,int m):price(p),seats(s),model_no(m){
		count++;
	}


	void print()const{
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<"$"<<endl;
		cout<<"Seats : "<<seats<<endl;
		cout<<"Model : "<<model_no<<endl<<endl;

	}

	void setValues(char *n,int p,int s,int m){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(n)+1];
		strcpy(name,n);
		price=p;
		seats=s;
		model_no=m;
	}

	void setSeats(int s){
		if(s>=2 && s<=12){
			seats=s;
		}
		else{
			seats=4;
		}
	}

	int getSeats(){
		return seats;
	}

	car(car &X){
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		seats=X.seats;
		model_no=X.model_no;
		count++;

	}

	void setName(char *n){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}
 
  // Operator Overloading
	void operator=(car &X){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price=X.price;
		model_no=X.model_no;
		seats=X.seats;
	}

	void operator+=(car &X){
		price=price+X.price;
		seats=seats+X.seats;
		model_no+=X.model_no;

		int l1=strlen(name);
		int l2=strlen(X.name);

		char *newName=new char[l1+l2+1];
		strcpy(newName,name);
		int i;
		for(i=0;i<=l2;i++){
			newName[i+l1]=X.name[i];
		}
		delete []name;
		name=newName;
	}

	car* operator+(car &X){
		car *newCar=new car;
		(*newCar).price=price+X.price;
		(*newCar).seats=seats+X.seats;
		(*newCar).model_no=model_no+X.model_no;

		int l1=strlen(name);
		int l2=strlen(X.name);
		(*newCar).name=new char[l1+l2+1];
		strcpy((*newCar).name,name);

		for(int i=0;i<=l2;i++){
			(*newCar).name[l1+i]=X.name[i];
		}
		return newCar;
	}

	~car(){
		cout<<"I am in destructor "<<name<<endl;
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
	}

};

int car::count=0;
// -----------------------------

int main(){

	car A;
	// cout<<A.count<<endl;
	A.price=100;
	A.model_no=200;
	// A.name[0]='B';
	// A.name[1]='M';
	// A.name[2]='W';
	A.setName("BMW");	

	car B;
	B.setValues("AUDI",200,5,500);
	A.setSeats(-8);

	car C("Suzuki",300,7,200);

	car D=C; // Copy Constructor
	car E(D); // Copy constructor

	E.name[0]='T';
	car F;
	F=D; // Assignment 
	A+=B;
	car *G;
	car H(30,8,909);
	H.setName("NISSAN");
	G=A+D;
	D.name[0]='H';
	cout<<A.count<<endl;
	A.print();
	B.print();
	C.print();
	D.print();
	E.print();
	F.print();
	(*G).print();
	H.print();
	delete G;
	return 0;
}