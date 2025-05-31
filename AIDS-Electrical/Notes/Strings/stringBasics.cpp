#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"----------------------input / output---------------"<<endl;
    string str;
    // cout<<"Please enter a string : "<<endl;
    // cin>>str;

    // cout<<"This is my string :- "<<str<<endl;

    string str1;
    cout<<"Please enter a string : "<<endl;
    getline(cin, str1);
    cout<<"This is my string with getline :- "<<str1<<endl;

    cout<<"------------------access first char/last char-----------------------"<<endl;
    str = "Hello coders";
    char firstChar = str[0];
    int len = str.length();
    char lastChar = str[len-1];

    cout<<"First character is : "<<firstChar<<endl;
    cout<<"last Character is : "<<lastChar<<endl;

    cout<<"------------------string concate-----------------------"<<endl;

    string fName = "vinay";
    string lName = "patil";

    fName.append(" ");
    lName.push_back('*');
    string fullName = fName + lName;
    cout<<"Full Name is :- "<<fullName<<endl;

    cout<<"------------------string substring-----------------------"<<endl;

    str = "leetcode";
    string subStr = str.substr(0, 6);
    cout<<"My substring is : "<<subStr<<endl;





}