#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout<<"Please enter size of an array : ";
    cin>>size;
    int largest_element = INT_MIN;
    cout<<"INT MIN value : "<<largest_element<<endl;
    int arr[size];
    cout<<"please enter values in array"<<endl;
    // array input 
    for(int i=0; i<size; i++){
        int value;
        cout<<"enter value :- ";
        cin>>value;
        
        arr[i] = value;

        if(arr[i] > largest_element){
            largest_element = arr[i];
        }
    }

    cout<<"largest element : "<<largest_element<<endl;

    //Sum
    //max
    //min
    //avg
    

   
}