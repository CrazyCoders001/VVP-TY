#include<bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout<<"Please enter size of an array : ";
    cin>>size;

    int arr[size];
    cout<<"please enter values in array"<<endl;
    // array input 
    for(int i=0; i<size; i++){
        int value;
        cout<<"enter value :- ";
        cin>>value;
        arr[i] = value;
    }

    int target;
    cout<<"please enter target : ";
    cin>>target;

    int firstIndex, secondIndex;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            int value1 = arr[i];
            int value2 = arr[j];
            int sum = value1 + value2;

            if(sum==target){
                firstIndex=i;
                secondIndex=j;
                
            }
        }
        
    }

    cout<<firstIndex<<" "<<secondIndex<<endl;


}