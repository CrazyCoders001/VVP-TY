#include<bits/stdc++.h>
using namespace std;

int addFromFiveToZero(int n)
{
    //Base case / termination case
    if(n==0) {
        return 0;
    }
    // cout<<"another step"<<endl;
    //recursive step / recursive function call
    return n + addFromFiveToZero(n-1);
}

int main(){
    int addition = addFromFiveToZero(10);//function call
    cout<<"addition : "<<addition<<endl;
}