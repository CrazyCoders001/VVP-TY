#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"please enter the string : "<<endl;
    cin>>str;

    int sum =0;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        //convert char to int
        int value = ch - '0';

        sum += value;
    }

    cout<<"Sum of all digits is : "<<sum<<endl;
}