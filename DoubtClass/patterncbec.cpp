#include <iostream>
using namespace std;

int main()
{
    int n;cin>>n;
    int space=n-1;
    for(int i=1;i<=n/2+1;i++){
        //SPACE LOOP
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space=space-2;
        //PRINTING STAR
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    space=2;
    for(int i=n/2;i>=1;i--){
        //SPACES
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space=space+2;
        //PRINT STAR
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
