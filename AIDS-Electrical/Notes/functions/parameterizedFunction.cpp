#include<bits/stdc++.h>
using namespace std;


// default parameter
int addNumbers(int num1=10, int num2 = 50){
    int sum = num1 + num2;

    return sum;
}

int main(){
    // i want to write a function to add two numbers
    
    //parameterized function
    int sum = addNumbers();  //function call
    cout<<"sum = "<<sum<<endl;
}