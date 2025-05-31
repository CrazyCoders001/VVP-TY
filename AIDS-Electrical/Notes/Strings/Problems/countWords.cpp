#include<bits/stdc++.h>
using namespace std;

int main(){
    string inpString;
    cout<<"Please enter string input : -"<<endl;
    // cin>>inpString;
    getline(cin, inpString);

    cout<<endl<<" here is my string :- "<<inpString<<endl;

    int spaceCount = 0;
    for(int i=0; i<inpString.length(); i++){
        char ch = inpString[i];
        if(ch==' '){
            spaceCount++;
        }
    }

    int wordCount = spaceCount+1;
    cout<<"word count = "<<wordCount<<endl;
}