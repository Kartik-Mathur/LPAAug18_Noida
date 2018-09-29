// Class
#include <iostream>
using namespace std;

// ------- BLUE PRINT ----------

class car{
private:
	int seats;
public:
	char name[20];
	int price;
	int model_no;

	car(){
		cout<<"I am in Constructor! "<<endl;
	}

	// parametrized constructor
	car(char *n,int p,int s){
		cout<<"IN parametrized constructor"<<endl;
		strcpy(name,n);
		price=p;
		seats=s;
		model_no=1111;		
	}


	void print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<"$"<<endl;
		cout<<"Seats : "<<seats<<endl;
		cout<<"Model : "<<model_no<<endl<<endl;

	}

	void setValues(char *n,int p,int s,int m){
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

};

// -----------------------------

int main(){

	car A;

	A.price=100;
	A.model_no=200;
	// A.name[0]='B';
	// A.name[1]='M';
	// A.name[2]='W';
	strcpy(A.name,"BMW");

	car B;
	B.setValues("AUDI",200,5,500);
	A.setSeats(-8);
	car C("Suzuki",300,7);

	A.print();
	B.print();
	C.print();

	return 0;
}