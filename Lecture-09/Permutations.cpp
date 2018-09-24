// Permutations
#include <iostream>
using namespace std;

void Permutations(char *a,int i,int j){
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}

	for(j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutations(a,i+1,j+1);
		swap(a[i],a[j]);
	}

}


int main(){
	char a[]="abc";

	Permutations(a,0,0);
	cout<<endl;
	return 0;
}