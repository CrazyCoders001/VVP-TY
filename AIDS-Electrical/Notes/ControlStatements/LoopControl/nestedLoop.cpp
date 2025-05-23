#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;

    int helloCount=0;
    for(int i=1; i<=n; i++){
        cout<<"for i = "<<i<<endl;
        for(int j=1; j<=n; j++)
        {
            cout<<"for j = "<<j<<endl;
            cout<<"Hello"<<endl;
            helloCount++;
        }
        cout<<"-----------------------------------------"<<endl;
    }

    cout<<"hello count"<<helloCount<<endl;
}