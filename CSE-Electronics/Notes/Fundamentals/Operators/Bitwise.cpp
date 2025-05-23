#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"------------------Bitwise AND---------------------"<<endl;
    int inp1 = 5, inp2=3;

    cout<<"5&3 :- "<<(inp1&inp2)<<endl;  //1

    cout<<"------------------Bitwise OR---------------------"<<endl;

    cout<<"5|3 :- "<<(inp1|inp2)<<endl;  //7

    cout<<"------------------Bitwise NOT---------------------"<<endl;

    cout<<"~5 :- "<<~(inp1)<<endl;  //-6

    cout<<"------------------Right Shift---------------------"<<endl;
    int inputValue = 5;
    int shiftParam = 2;
    cout<<"5>>2 :- "<<(inputValue>>shiftParam)<<endl; //1

    cout<<"------------------Left Shift---------------------"<<endl;
    inputValue = 5;
    shiftParam = 1;
    cout<<"5<<1 :- "<<(inputValue<<shiftParam)<<endl;  //10

    cout<<"------------------examples---------------------"<<endl;
    cout<<"10>>2 :- "<<(10>>2)<<endl;  //2
    cout<<"6<<1 :- "<<(6<<1)<<endl;  //12


    cout<<"------------------increment/decrement---------------------"<<endl;

    int num1 = 5, num2 = 2;

    cout<<num1 + num2++<<endl;  //7
    cout<<"num1="<<num1<<" num2="<<num2<<endl; //5 3

    num1 = 5, num2 = 2;
    cout<<num1 + --num2<<endl;  //6
    cout<<"num1="<<num1<<" num2="<<num2<<endl; //5 1
}