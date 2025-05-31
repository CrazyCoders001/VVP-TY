#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cout<<"Please enter string :- ";
    cin>>str;

    string reverseStr ="";
    int len = str.length();
    for(int i=len-1; i>=0; i--){
        char ch = str[i];
        reverseStr += ch;
    }

    cout<<"original string : "<<str<<endl;
    cout<<"reverseStr string : "<<reverseStr<<endl;

if (str==reverseStr){
    cout<< "palindrome hai "<<endl;
   
}
else cout <<"not a palindrome";
}
