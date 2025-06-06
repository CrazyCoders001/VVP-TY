#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"please enter a string : ";
    cin>>str;

    string output = "";
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        if(ch >= 65 && ch <= 90){
            //upperCase convert to lower
            char convertedChar = ch + 32;
            output.push_back(convertedChar);
        }
        else if(ch >=97 && ch <= 122){
            //smallCase to upperCase
            char convertedChar = ch - 32;
            output.push_back(convertedChar);
        }

    }

    cout<<"original string : "<<str<<endl;
    cout<<"toggled string : "<<output<<endl;
}
