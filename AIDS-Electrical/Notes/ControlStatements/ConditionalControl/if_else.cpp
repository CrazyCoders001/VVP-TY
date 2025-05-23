#include<bits/stdc++.h>
using namespace std;

int main(){

    // int age;
    // cout<<"please enter your age :- "<<endl;
    // cin>>age;

    // if(age >= 18){   //true
    //     cout<<"grant permanent license"<<endl;
    // }else if(age >= 16){
    //     cout<<"grant temporary license"<<endl;
    // }
    // else{  //false
    //     cout<<"Not eligible for license"<<endl;
    // }

    cout<<"-----------------welcome msg--------------------"<<endl;
    string year, branch;
    cout<<"please enter year and branch :- ";
    cin>>year;
    cin>>branch;

    if(year=="TY"){
        if(branch=="AIDS"){
            cout<<"welcome to AIDS"<<endl;
        }
        if(branch=="Electrical"){
            cout<<"welcome to Electrical"<<endl;
        }
    }
    else{
        cout<<"not from ty"<<endl;
    }


    cout<<"end ka part"<<endl;
}