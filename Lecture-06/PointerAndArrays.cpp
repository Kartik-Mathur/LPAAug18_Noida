// PointerAndArrays
#include <iostream>
using namespace std;



int main(){
	
	int a[]={1,2,3,4,5};
	int *ptr=a;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<ptr+2<<endl;
	cout<<*(a+2)<<endl;
	cout<<a[2]<<endl;
	cout<<*(ptr+2)<<endl;

	for(int i=0;i<5;i++){
		cout<<*(a+i)<<" "; // *(a+i) = a[i]
	}
	cout<<endl;



	return 0;
}