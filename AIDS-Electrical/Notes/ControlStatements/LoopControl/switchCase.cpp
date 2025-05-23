#include<bits/stdc++.h>
using namespace std;

int main(){
    int roll_number;
    cout<<"please enter roll number :- "<<endl;
    cin>>roll_number;

    switch(roll_number)
    {
        case 1:
            cout<<"name is Akash"<<endl;
            cout<<"age is 22"<<endl;
            break;
        case 2:
            cout<<"name is rahul"<<endl;
            cout<<"age is 25";
            break;
        case 3:
            cout<<"name is Ankita"<<endl;
            cout<<"age is 21";
            break;
        default:
            cout<<"hit default Exiting"<<endl;
    }
}