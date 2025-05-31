#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];

    for(int i=0; i<5; i++){
        cout<<endl<<"enter array element : ";
        cin>>arr[i];
    }

    int target;
    cout<<"Please enter target value :";
    cin>>target;

    int index = -1;
    for(int i=0; i<5; i++){
        if(arr[i]==target){  
            index = i;
            break;
        }
    }

    cout<<"output index = "<<index<<endl;
}