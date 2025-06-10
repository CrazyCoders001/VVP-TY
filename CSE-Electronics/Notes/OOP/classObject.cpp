#include<bits/stdc++.h>
using namespace std;


//class is user defined data type
class MyClass{
    public:
        int var;   // 4
        char ch;   // 1 
        double db; // 8 

        void sayHello(){   // kuch to size
            cout<<"Hello Coders within class"<<endl;  //2
        }

};

int main(){

    cout<<"Inside main function before class"<<endl;  //1

    MyClass obj;   //obj nam ka object create ho gaya
    obj.sayHello();

    cout<<"Inside main function after class"<<endl;  //3

    cout<<"Size of the class : - "<<sizeof(MyClass)<<endl;
}