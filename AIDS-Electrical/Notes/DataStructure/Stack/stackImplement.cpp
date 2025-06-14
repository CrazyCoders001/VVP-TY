#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int Stack[SIZE];
int top=-1;


//push function defination
void push(int n)
{
    //check stack overflow
    if(top+1 == SIZE){
        cout<<"Stack overflow"<<endl;\
        return;
    }

    top++;
    Stack[top] = n;
    cout<<"we have inserted value : "<<n<<" into stack"<<endl;

}

void pop(){
    if(top==-1){
        cout<<"stack underflow, nothing to delete"<<endl;
        return;
    }

    cout<<"Deleting the element "<<Stack[top]<<endl;
    Stack[top] = 0;
    top--;

}

void display(){

    if(top == -1){
        cout<<"stack is empty, nothing to show "<<endl;
        return;
    }

    cout<<"display stack : "<<endl;
    for(int i=top; i>=0; i--){
        cout<<Stack[i]<<" ";
    }
    cout<<endl;

}

int main(){
    pop();

    display();

    //function call
    push(10);
    push(20);
    push(30);
    push(60);
    push(70);

    display();
    pop();
    display();

    push(80);


    display();

}