#include<bits/stdc++.h>
using namespace std;

#define SIZE 100
char Stack[SIZE];
int top=-1;
bool isValidParenthesis = true;

void push(char ch){
    top++;
    cout<<"Inserted '(' at index "<<top<<endl;
    Stack[top] = ch;
}

void pop(){
    if(top==-1){
        cout<<"No corresponding openeing bracket avaible to delete"<<endl;
        isValidParenthesis = false;
        return;
    }

    cout<<"Deleting a opening bracket"<<Stack[top]<<endl;
    Stack[top] = '0';
    top--;
}

int main(){
    string str = "()))";
    

    for(int i=0; i<str.length(); i++){
        char ch = str[i];

        if(ch == '('){
            push(ch);
        }
        else if(ch == ')'){
            pop();
        }
    }

    if(top==-1 && isValidParenthesis){
        isValidParenthesis = true;
    }

    if(isValidParenthesis==false){
        cout<<"The given string : "<<str<<" is not a valid Parenthesis"<<endl;
    }
    else{
        cout<<"The given string : "<<str<<" is valid Parenthesis"<<endl;
    }
}