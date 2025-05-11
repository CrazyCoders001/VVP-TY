#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"-------------------------Logical And-------------------"<<endl;
    cout<<"when both operands are true "<<(true&&true)<<endl;
    cout<<"when first operands is true second is false "<<(true&&false)<<endl;
    cout<<"when firs operands is false and second is true "<<(false&&true)<<endl;
    cout<<"when both operands are False "<<(false&&false)<<endl;

    cout<<"-------------------------Logical OR-------------------"<<endl;
    cout<<"when both operands are true "<<(true||true)<<endl;  //1
    cout<<"when first operands is true second is false "<<(true||false)<<endl;  //1
    cout<<"when firs operands is false and second is true "<<(false||true)<<endl;  //1
    cout<<"when both operands are False "<<(false||false)<<endl;  //0


    cout<<"-------------------------Logical NOT-------------------"<<endl;
    cout<<"when input is true output will be "<<(!true)<<endl;  //0
    cout<<"when input is False output will be "<<(!false)<<endl;  //1
    return 0;
}