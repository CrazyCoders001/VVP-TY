#include<bits/stdc++.h>
using namespace std;

int main(){

    int rollNo;
    cout<<"enter roll number :- ";
    cin>>rollNo;

    switch (rollNo)
    {
    case 1:
        cout<<"Name is Ayan"<<endl;
        cout<<"age is 23"<<endl;
        break;
    case 2: 
        cout<<"Name is sahil"<<endl;
        cout<<"age is 25"<<endl;
        break;
    case 3:
        cout<<"Name is Sohel"<<endl;
        cout<<"age is 22"<<endl;
        cout<<"Marks = 100"<<endl;
        break;
    default:
        cout<<"Invalid roll number"<<endl;
    }
}