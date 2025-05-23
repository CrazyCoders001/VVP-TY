#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"----------------------Contuinue--------------"<<endl;
    for(int i=1; i<=5; i++)
    {
        cout<<"for i = "<<i<<endl;
        //op1
        cout<<"Hello ";
        if(i==2)
        {
           continue;
        }

        // op2
        cout<<"Coders"<<endl;
    }


    cout<<"----------------------Break--------------"<<endl;
    for(int i=1; i<=5; i++)
    {
        cout<<"for i = "<<i<<endl;
        //op1
        cout<<"Hello ";
        if(i==2)
        {
           break;
        }

        // op2
        cout<<"Coders"<<endl;
    }
}