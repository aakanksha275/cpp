#include<iostream>
using namespace std;


int main(){
    int n,i,sum = 0;
    cout<<"Enter number of elements you want";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        sum = sum +arr[i];
        cout<<sum<<" ";
    }

}