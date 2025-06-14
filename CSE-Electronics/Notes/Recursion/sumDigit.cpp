#include<bits/stdc++.h>
using namespace std;

//function defination
int doDigitSum(int n){
    //base case
    if(n/10==0){
        return n;
    }

    int lastDigit = n % 10;
    return lastDigit + doDigitSum(n/10);
}



int main(){
    int input = 5896;
    int sum = doDigitSum(input); //function call
    cout<<"digit sum = "<<sum<<endl;
}
