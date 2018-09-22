#include <iostream>
using namespace std;

int fact(int n){
	// base case
	if(n==0){
		return 1;
	}
	// recursive case

	int ans=n*fact(n-1);
	return ans;

}

int fibo(int n){
	// base case
	if(n==0||n==1){
		return n;
	}
	// recursive case
	int fn=fibo(n-1)+fibo(n-2);

	return fn;
}

bool isSorted(int *a,int n){
	// base case
	if(n==1){
		return true;
	}
	// recursive case
	bool KyaChotaSortedHai=isSorted(a+1,n-1);
	if(a[0]<=a[1]&&KyaChotaSortedHai){
		return true;
	}
	else{
		return false;
	}


}

int sumofArray(int a[],int n){
	// base case
	if(n==0){
		return 0;
	}

	// recursive case
	int ans=a[0]+sumofArray(a+1,n-1);
	return ans;
}

int sum2(int*a,int n){
	if(n==0){
		return 0;
	}

	int ans=a[n-1]+sum2(a,n-1);
	return ans;

}

int sum3(int *a,int n,int i){
	if(i==n){
		return 0;
	}

	int ans=a[i]+sum3(a,n,i+1);
	return ans;

}

void printArray(int *a,int n){
	if(n==0){
		return;
	}

	cout<<a[0]<<" "; // Increasing Order
	printArray(a+1,n-1);
	// cout<<a[0]<<" "; // Decreasing order

}

string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void IntToString(int n){
	if(n==0){
		return;
	}

	IntToString(n/10);
	int index=n%10;
	cout<<s[index]<<" ";
}

int first7(int *a,int n,int i){
	if(i==n){
		return -1;
	}
	if(a[i]==7){
		return i;
	}
	else{
		return first7(a,n,i+1);
	}
}

int last7(int *a,int n,int i){
	if(i==n){
		return -1;
	}

	if(a[i]==7){
		int index=i;
		int KyaAageKoiSevenHai=last7(a,n,i+1);
		if(KyaAageKoiSevenHai>index){
			return KyaAageKoiSevenHai;
		}
		else{
			return index;
		}
	}
	else{
		return last7(a,n,i+1);
	}
}


int main(){
	// int n;
	// cin>>n;

	// cout<<fact(n)<<endl;
	// cout<<fibo(n)<<endl;
	int a[]={0,1,7,2,3,7,4,5,7,8};
	int n=sizeof(a)/sizeof(int);
	// if(isSorted(a,n)){
	// 	cout<<"Sorted"<<endl;
	// }
	// else{
	// 	cout<<"Not Sorted"<<endl;
	// }

	// cout<<sumofArray(a,n)<<endl;
	// cout<<sum2(a,n)<<endl;
	// cout<<sum3(a,n,0)<<endl;
	// printArray(a,n);
	// n=2048;
	// IntToString(n);

	cout<<first7(a,n,0)<<endl;
	cout<<last7(a,n,0)<<endl;
	cout<<endl;

	return 0;
}