#include<iostream>
using namespace std;

int main(){
    int n,i,m = INT_MAX;
    cout<<"Enter number of elements";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=1;i<n;i++){
        if(arr[i] <0){
            arr[i] = 0;
        }
    }

    for(i=1;i<n;i++){
        if(arr[i]<m){
            m = arr[i];
        }
    }

    i=0;
    while(i<n){
        if(arr[i] == m){
            m++;
            i=0;
        }
        else{
            i++;
        }
    }
    cout<<m;
}

