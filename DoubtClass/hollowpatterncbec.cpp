#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"* ";
    }
    cout<<endl;
    int space=2;
    for(int i=1;i<=n/2;i++){
        for(int j=n/2;j>=i;j--){
            if(j==i){
                cout<<"*";
            }
            else{
                cout<<"* ";
            }
        }
        for(int j=1;j<=2*space-1;j++){
            cout<<" ";
        }
        space=space+2;
        for(int j=n/2;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    space=space-4;
    for(int i=n/2;i>1;i--){
        for(int j=n/2;j>=i-1;j--){
            cout<<"* ";
        }
        for(int j=1;j<2*space-1;j++){
            cout<<" ";
        }
        space=space-2;
          for(int j=n/2;j>=i-1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"* ";
    }



    return 0;
}
