#include<bits/stdc++.h>
using namespace std;

int main(){
    string year, branch;
    cout<<"Please enter year and branch :-";
    cin>>year;
    cin>>branch;

    if(year == "TY"){
        //code 
        if(branch=="CSE")
        {
            cout<<"welcome to TY B.tech CSE"<<endl;
        }
        if(branch=="Electronics")
        {
            cout<<"welcome to TY B.tech Electronics"<<endl;
        }
    }
    else{
        cout<<"Student is not from TY"<<endl;
    }
}