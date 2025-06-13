#include<bits/stdc++.h>
using namespace std;

//function defination
string fetchUpperCaseChars(string input){
    string output = "";
    for(int i=0; i<=input.length(); i++){
        char ch = input[i];
        if(ch >= 65 && ch <= 90)
        {
            output.push_back(ch);
        }
    }

return output;
}

int main(){
    string str = "HeLLo";
    string output = fetchUpperCaseChars(str); //function call
    cout<<"All uppercase letters : "<<output<<endl;
}