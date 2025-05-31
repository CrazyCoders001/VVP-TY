#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter your 5 elements: "<<endl;

    for(int i=0; i<5;i++){
        cout<<"Enter your "<<i+1<<" th element ";
        cin>>arr[i];
    }

    int sum=1;
    for(int i=0; i<5;i++){
        if(arr[i] % 2 == 0)
            sum*=arr[i];

        //sum = sum + arr[i]
    }

    cout<<"The product of all even  integers from the array is: "<<sum<<endl;
}