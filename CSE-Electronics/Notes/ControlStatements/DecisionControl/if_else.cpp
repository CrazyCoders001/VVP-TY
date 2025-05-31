#include<bits/stdc++.h>
using namespace std;

int main(){
   int age;
   cout<<"please enter your age :-";
   cin>>age;

   if(age>=18){   //true = line 9, false = line 13
    cout<<"Grant Permanent license"<<endl;
   } 
   else if(age>=16){
    cout<<"Grant Learning license"<<endl;
   }
   else{
    cout<<"Not Eligible to get license"<<endl;
   }
}