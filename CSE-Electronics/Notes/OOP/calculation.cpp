#include<bits/stdc++.h>
using namespace std;

class Calculation{
    public:
        void sum(int num1, int num2){
            cout<<"int sum = "<<num1+num2<<endl;
        }

        void sum(float num1, float num2){
            cout<<"float sum = "<<num1+num2<<endl;
        }
};

int main(){
    // i want to add two numbers and display output
    // sum = num1 + num2

    int num1 = 10;
    int num2 = 20;
    float n1 = 10.2;
    float n2 = 5.3;

    Calculation obj1;
    obj1.sum(num1, num2); //30 //user passing these numbers

    obj1.sum(n2, n1);  // 15.5


}


/*
public    :- the variables and functions are accessible everywhere
protected :- the variables and functions are accessible only in that class in which it is defined and the child classes
private   :- the variables and functions are accessible only in that class 
*/


// function overloading :- use two functions with same name but different list of parameters


// please enter inputsss 