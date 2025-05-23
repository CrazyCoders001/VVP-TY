#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"---------------------AND------------------"<<endl;
    cout<<(false && false)<<endl;  //0
    cout<<(false && true)<<endl;   //0
    cout<<(true && false)<<endl;   //0
    cout<<(true && true)<<endl;    //1

    cout<<"---------------------OR------------------"<<endl;
    cout<<(false || false)<<endl;  //0
    cout<<(false || true)<<endl;   //1
    cout<<(true || false)<<endl;   //1
    cout<<(true || true)<<endl;    //1

    cout<<"---------------------NOT------------------"<<endl;
    cout<<!(false)<<endl;  //1
    cout<<!(true)<<endl;   //0
}