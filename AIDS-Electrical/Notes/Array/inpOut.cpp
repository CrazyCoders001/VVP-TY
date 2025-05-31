#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout<<"Please enter size of an array : ";
    cin>>size;

    int sum=0;
    cout<<"sum value : "<<sum<<endl;
    int arr[size];
    cout<<"please enter values in array"<<endl;
    // array input 
    for(int i=0; i<size; i++){
        int value;
        cout<<"enter value :- ";
        cin>>value;
        sum +=value;
        arr[i] = value;
    }
    cout<<"The sum of the array values : "<<sum<<endl;

    // output array
    cout<<endl<<"Display array data :- "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    // int len = arr.size();
    int len = sizeof(arr)/sizeof(int);
    cout<<"The size of array : "<<sizeof(int)*size<<endl;
    cout<<"length of array : "<<len<<endl;
    // cout<<"The last elemet : "<<arr[]<<endl;

    cout<<endl<<"The first element : "<<arr[0]<<endl;
    cout<<"The last elemet : "<<arr[len-1]<<endl;



   
}