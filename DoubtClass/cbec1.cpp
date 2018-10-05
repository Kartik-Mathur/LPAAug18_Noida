#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int k=i;
            while(k>0){
                cout<<j;
                k=k-1;
            }
        }
        cout<<"\t";
        for(int j=1;j<=n;j++){
            int k=n-i+1;
            while(k>0){
                cout<<j;
                k=k-1;
            }
        }
        cout<<endl;
    }



    return 0;
}
