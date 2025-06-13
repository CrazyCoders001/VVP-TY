#include<bits/stdc++.h>
using namespace std;

// function defination
int doSum(int num1, int num2 = 40){
    int sum = num1 + num2;
    return sum;
}

int main(){

    int num1=10;
    int num2=45;

    //function call
    int sum = doSum(num1, num2);

    cout<<"sum = "<<sum<<endl;
}