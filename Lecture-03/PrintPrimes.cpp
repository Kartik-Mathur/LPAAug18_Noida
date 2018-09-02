// PrintPrimes
#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<(2&1)<<endl;
	cin>>n;

	// int i=2;
	// while(i<=n){

	// 	int j=2;
	// 	while(j<i){
	// 		if(i%j==0){
	// 			break;
	// 		}
	// 		j++;
	// 	}
	// 	if(i==j){
	// 		cout<<i<<" ";
	// 	}

	// 	i++;
	// }

	int i,j;
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			cout<<i<<" ";
		}

	}





	return 0;
}