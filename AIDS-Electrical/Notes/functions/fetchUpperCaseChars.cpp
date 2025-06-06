#include<bits/stdc++.h>
using namespace std;

string fetchUpperCase(string inpString){
    string opString = "";
    // string opString ="al";
    for(int i=0; i<inpString.length(); i++){
        char ch = inpString[i];

        if(ch >= 65 && ch <= 90){
            opString.push_back(ch);
        }
        
    }
return opString;
}
string fetchLowerCase(string inpString){
    string opString = "";
    for(int i=0; i<inpString.length(); i++){
        char ch = inpString[i];

        if(ch >= 97 && ch <= 122){
            opString.push_back(ch);
        }
        
    }
return opString;
}

int main(){
    string str = fetchUpperCase("HeLLoAA67OP");
    string str1= fetchLowerCase("heLLOworld");
    cout<<"UpperCase chars = "<<str<<endl;
    cout<<"LowerCase chars ="<<str1<<endl;
}