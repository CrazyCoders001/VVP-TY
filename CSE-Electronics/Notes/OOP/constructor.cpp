#include<bits/stdc++.h>
using namespace std;


class MyClass{
    public:
        int classNum1;
        int classNum2;
        MyClass(int n1, int n2, string str){
            classNum1 = n1;
            classNum2 = n2;
            cout<<"created an object called "<<str<<endl;
        }
};
int main(){

    MyClass obj1(12, 20, "objectOne");

    cout<<"obj1 ke values :- "<<obj1.classNum1<<" "<<obj1.classNum2<<endl; //12 20

    MyClass obj2(14, 6, "objectTwo");

    cout<<"obj2 ke values :- "<<obj2.classNum1<<" "<<obj2.classNum2<<endl; //14 6

}