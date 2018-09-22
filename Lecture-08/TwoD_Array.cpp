#include <iostream>
using namespace std;

int main(){	

	char a[100][2]={
		"Hi",
		"He"
	};

	int n;
	cout<<"Enter Number of strings to enter ";
	cin>>n;
	cin.ignore();
	// cout<<b[0]<<endl; // A B
	// cout<<b[1]<<endl;// C D
	// cout<<b[2]<<endl;// E F
	for(int i=0;i<n;i++){
		cin.getline(a[i],100);
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
// 	int arr[][3]={
// 		{1,2,3},
// 		{4,5,6},
// 		{7,8,9}
// 	};

// cout <<arr << endl;
// cout << arr+1 << endl;
// cout << *(arr+1) << endl;
// cout <<arr[0] << endl;
// cout  <<*(arr[0]) << endl;
// cout << &arr[0][0] << endl;
// cout << arr[0] + 1 << endl;
// cout << (&arr[0][0]) + 1 << endl;
// cout << arr+1 << endl;
// cout << &arr[1][0] << endl;



	return 0;
}