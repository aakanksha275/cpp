#include<iostream>
using namespace std;

int main(){
    int n,i;

    cout<<"Enter number of elements";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxx = INT_MIN;

    for(i=1;i<n;i++){
        if(arr[i]>maxx && arr[i]>arr[i+1]){
            maxx = arr[i];
            cout<<"Breaking day:" <<arr[i]<<endl;
        }
    }
    
}