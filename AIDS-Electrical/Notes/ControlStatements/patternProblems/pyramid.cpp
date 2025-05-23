#include<bits/stdc++.h>
using namespace std;

int main(){

    int row;
    cout<<"please enter rows :- ";
    cin>>row;

    for(int i=1; i<=row; i++){

        //space logic
        for(int p=1; p<=row-i; p++){
            cout<<" ";
        }

        //star logic
        for(int j=1; j<=i*2-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}