// LargestString
#include <iostream>
using namespace std;

int length(char a[]){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}


int main(){
	int n;
	cin>>n;
	int largestlen=0;
	char largest[100];

	char temp[100];

	cin.get();
	
	for(int i=0;i<n;i++){

		cin.getline(temp,100);
		int templen=length(temp);

		if(templen>largestlen){
			// Update the largest string
			for(int j=0;j<=templen;j++){
				largest[j]=temp[j];
			}
			largestlen=templen;
		}
	}
	cout<<largest<<endl;

	cout<<endl;
	return 0;
}