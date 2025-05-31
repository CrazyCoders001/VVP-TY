#include<bits/stdc++.h>
using namespace std;

int main(){
    string inpString = "Naman";
    string reverseString = "";
    int len = inpString.length();
    for(int i=len-1; i>=0; i--)
    {
        char ch = inpString[i];
        reverseString.push_back(ch);
    }

    cout<<"Original string : "<<inpString<<endl;
    cout<<"Reversed string : "<<reverseString<<endl;

    if(inpString== reverseString)
    {
        cout<<"String is a palindrome"<<endl;
    }
    else{
        cout<<"String is  not a palindrome"<<endl;
    }
}