#include<bits/stdc++.h>
using namespace std;

int doSum(int n){
    //base condition
    cout<<"call"<<endl;
    if(n==0){
        return 0;
    }

    //recursive function call
    return n + doSum(n-1);
}

int main(){
    int n = 10;
    int sum = doSum(n); //function call
    cout<<"Sum = "<<sum<<endl;
}

