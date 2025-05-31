#include<bits/stdc++.h>
using namespace std;

int main(){

    int row;
    cout<<"please enter row : ";
    cin>>row;

    //upperPyramid
    int upperPyramidRow = row/2 + 1;
    for(int i=1; i<=upperPyramidRow; i++){
        //space logic 
        for(int j=1; j<=upperPyramidRow-i; j++){
            cout<<" ";
        }

        //star logic 
        for(int p=1; p<=2*i-1; p++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lowerPyramid part
    int lowerPyramidRow = row - upperPyramidRow;
    for(int i=lowerPyramidRow; i>=0; i--){

        //space logic
        for(int j=1; j<=(lowerPyramidRow-i+1); j++){
            cout<<" ";
        }

        //star logic
        int term = 2*i-1;
        if(row%2==0){
            term = 2*i+1;
        }
        for(int p=1; p<=term; p++){
            cout<<"*";
        }

        cout<<endl;

    }
}