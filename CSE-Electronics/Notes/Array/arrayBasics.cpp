#include<bits/stdc++.h>
using namespace std;

int main(){
    //ARRAY INPUT 
    int len = 5;

    //array declaration
    int arr[len];

    //array initialization
    for(int i=0; i<len; i++){
        int value;
        cout<<"please enter array element :- ";
        cin>>value;

        arr[i]=value;
    }

    cout<<endl<<"Display array : "<<endl;
    //output array
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }

    int index;
    cout<<"please enter index : ";
    cin>>index;  //3

    int value = arr[index];
    cout<<"value at index "<<index<<" is = "<<value<<endl;


    int sizeOfArray = sizeof(arr);
    int sizeOfData = sizeof(int);
    int length = sizeOfArray / sizeOfData;
    cout<<"size of Array : "<<sizeOfArray<<endl;
    cout<<"size of Data : "<<sizeOfData<<endl;
    cout<<"length = : "<<length<<endl;

}