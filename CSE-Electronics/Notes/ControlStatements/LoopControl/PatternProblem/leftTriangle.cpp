#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    cout<<"please enter rows :- ";
    cin>>rows;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
