#include<bits/stdc++.h>
using namespace std;

int main(){

    int size = 5;
    int nums[size];
    int opArray[size];
    int opIndex = 0;

    int k;

    cout<<"Please take array input : "<<endl;
    for(int i=0; i<size; i++){
        cout<<"please enter the element : ";
        cin>>nums[i];
    }

    cout<<"please enter k : ";
    cin>>k;

    int len = sizeof(nums)/sizeof(int);

    int startIndex = len - k;

    for(int i=startIndex; i<len; i++){
        opArray[opIndex++] = nums[i];
    }

    for(int i=0; i<startIndex; i++){
        opArray[opIndex++] = nums[i];
    }

    cout<<"print array"<<endl;
    for(int i=0; i<len; i++){
        cout<<opArray[i]<<" ";
    }

}