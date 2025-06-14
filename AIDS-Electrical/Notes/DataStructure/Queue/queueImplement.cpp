#include<bits/stdc++.h>
using namespace std;
#define SIZE 5
int Queue[SIZE];
int start =-1, End = -1;

void Enqueue(int num){
    if(End == SIZE-1){
        cout<<"Queue is full, cant add element "<<num<<endl;
        return;
    }

    if(start == -1 && End==-1){
        start++;
        End++;
        cout<<"Added Value"<<num<<" into queue at index "<<End<<endl;
        Queue[End] = num;
    }
    else{
        End++;
        cout<<"Added Value "<<num<<" into queue at index "<<End<<endl;
        Queue[End] = num;
    }


}

void Dequeue(){
    if(start==-1){
        cout<<"Queue is empty, nothing to delete"<<endl;
        return;
    }
    if(start==End){
        cout<<"only one element present "<<Queue[start]<<"deleted this"<<endl;
        start = -1;
        End = -1;
    }
    else{
        cout<<"Deleting "<<Queue[start]<<endl;
        Queue[start] = 0;
        start++;
    }

}

void Display(){
    if(start == -1 && End == -1){
        cout<<"Nothing to Display, Queue is empty"<<endl;
    }
    cout<<"Display Queue :- "<<endl;
    for(int i=start; i<=End; i++){
        cout<<Queue[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    Dequeue();  //queue underflow

    Enqueue(10);
    Enqueue(12);
    Enqueue(13);
    Enqueue(16);
    Enqueue(20);
    Enqueue(45);  //queue overflow

    Display();  // 10 12 13 16 20

    Dequeue();

    Dequeue();
    
    Display(); // 13 16 20


}


