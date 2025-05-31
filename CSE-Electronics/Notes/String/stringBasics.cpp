#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "Hello";

    cout<<"-----------------string length--------------------"<<endl;
    int length = str.length();
    cout<<"string length = "<<length<<endl; //

    cout<<"-----------------first/last char--------------------"<<endl;
    cout<<"first character : "<<str[0]<<endl;  //H
    cout<<"last character : "<<str[length-1]<<endl; //0

    cout<<"-----------------string concatination--------------------"<<endl;
    string fName = "Akash";
    string lName = "Kanni";
    fName.push_back(' ');
    string fullName = fName +  lName;
    cout<<"My full name is : "<<fullName<<endl;

    //.append()

    cout<<"-----------------string compare--------------------"<<endl;
    string str1 = "gfg", str2 = "gfG";
    // by using ==
    if(str1 == str2){
        cout<<"both strings are identical"<<endl;
    }
    else{
        cout<<"both are different strings"<<endl;
    }

    //.compare()


    cout<<"-----------------sub string--------------------"<<endl;
    str = "leetcode";
    /*
        l e e t c o d e
        0 1 2 3 4 5 6 7
    */
    string subStr = str.substr(2, 5);  //etco

    cout<<"sub string = "<<subStr<<endl;

}