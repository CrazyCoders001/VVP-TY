#include<bits/stdc++.h>
using namespace std;


//class defination
class vvp{
    public:
        int age;
        char ch;

        void printHello(string str){
            cout<<"Hello Coders from "<<str<<endl;
        }
};

int main(){

    cout<<"inside main function"<<endl<<endl;;

    vvp sy; //class object create
    sy.age = 20;
    sy.ch = 's';

    sy.printHello("Sy");

    cout<<"age = "<<sy.age<<endl;
    cout<<"char = "<<sy.ch<<endl;

    cout<<endl;


    vvp ty;
    ty.age = 21;
    ty.ch = 't';
    ty.printHello("TY");
    cout<<"age = "<<ty.age<<endl;
    cout<<"char = "<<ty.ch<<endl;


}