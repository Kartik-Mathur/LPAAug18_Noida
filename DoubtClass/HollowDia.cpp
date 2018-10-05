#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
    int spaces=1,stars=(n-1)/2;
    for(int i=1;i<=n/2;i++){
        int j=1;
        while(j<=stars){
            cout<<"*";
            j++;

        }
        j=1;
        while(j<=spaces){
            cout<<" ";
            j++;
        }
        spaces+=2;
        j=1;
        while(j<=stars){
            cout<<"*";
            j++;

        }
        stars-=1;
        cout<<endl;
    }
    stars+=2;
    spaces-=4;
 for(int i=1;i<=n/2-1;i++){
        int j=1;
        while(j<=stars){
            cout<<"*";
            j++;

        }
        j=1;
        while(j<=spaces){
            cout<<" ";
            j++;
        }
        spaces-=2;
        j=1;
        while(j<=stars){
            cout<<"*";
            j++;

        }
        stars+=1;
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        cout<<"*";
    }

    return 0;
}
