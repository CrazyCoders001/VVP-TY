#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cout<<"please enter string s : ";
    cin>>s;

    cout<<"please enter string t : ";
    cin>>t;

    sort(s.begin(), s.end());  //s wala sort ho gaya
    sort(t.begin(), t.end());  //t wala sort ho gaya

    cout<<"after sorting : "<<endl<<s<<endl<<t<<endl;

    if(s==t){
        cout<<"both the strings are anagram"<<endl;
    }
    else{
        cout<<"Not an Anagram"<<endl;
    }


}

