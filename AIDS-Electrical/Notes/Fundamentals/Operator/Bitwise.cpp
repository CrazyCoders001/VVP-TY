#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"---------------------------Bit AND----------------------------"<<endl;
    int num1 =2 , num2 = 5;
    int result = num1 & num2;
    cout<<"2&5 : "<<result<<endl;

    cout<<"---------------------------Bit OR----------------------------"<<endl;
    num1 =3 , num2 = 5;
    result = num1 | num2;
    cout<<"3|5 : "<<result<<endl; //7


    cout<<"---------------------------Bit NOT----------------------------"<<endl;
    num1 = 5;
    result= ~(num1);
    cout<<"~5 : "<<result<<endl;

     cout<<"---------------------------Left shift----------------------------"<<endl;
     int shift = 2;
     num1 = 7;
     result = num1 << shift;
     cout<<"7<<2 :" <<result<<endl;

     cout<<"---------------------------Right shift----------------------------"<<endl;
     shift = 2;
     num1 = 7;
     result = num1 >> shift;
     cout<<"7>>2 :" <<result<<endl;

      cout<<"---------------------------++/-- shift----------------------------"<<endl;
      num1 = 5;
      num1++;
      cout<<"++ : "<<num1<<endl; //6

      num1 = 5;
      num1--;
      cout<<"-- : "<<num1<<endl; //4

      int val1 = 3, val2 = 4;
      int sum = val1 + ++val2;
      cout<<"sum : "<<sum<<endl;  //8

      cout<<"val2 : "<<val2<<endl;  //5











}