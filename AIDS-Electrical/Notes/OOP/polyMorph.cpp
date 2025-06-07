#include<bits/stdc++.h>
using namespace std;

class calculator{
public:
    void sum(int num1, int num2){
        cout<<"inside int"<<endl;
        int sum = num1 + num2;
        cout<<"sum = "<<sum<<endl;
    }

    inline void sum(float num1, float num2){
        cout<<"inside float"<<endl;
        cout<<"sum = "<<num1+num2<<endl;
    }

};

int main(){

    calculator obj;
    float num1 = 10.2;
    float num2 = 30.2;
    obj.sum(10, 20);

    

}