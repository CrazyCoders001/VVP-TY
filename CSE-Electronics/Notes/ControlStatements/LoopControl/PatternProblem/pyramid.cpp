#include<bits/stdc++.h>
using namespace std;

int main(){

    int row;
    cout<<"please enter row : ";
    cin>>row;

    for(int i=1; i<=row; i++){
        //space logic
        for(int j=1; j<=row-i; j++){
            cout<<" ";
        }

        //star logic
        for(int p=1; p<=2*i-1; p++){
            cout<<"*";
        }

        cout<<endl;


        
    }
}