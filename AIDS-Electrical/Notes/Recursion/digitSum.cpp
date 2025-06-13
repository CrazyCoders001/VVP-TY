#include<bits/stdc++.h>
using namespace std;

//function defination
int numberDigitSum(int n){
    //base case
    if(n/10 == 0){
        return n;
    }

    int lastDigit = n % 10;
    return lastDigit + numberDigitSum(n/10); //recursive call
}

int main(){
    int input = 1876;
    int digitSum = numberDigitSum(input);  //function call
    cout<<"digit sum : "<<digitSum<<endl;
}