#include<iostream>
using namespace std;

int main(){
    int n,i,j,f = 0;

    cout<<"Enter number of elements";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<i<<" ";
                f = 1;
            }
        if(f==1){
            break;
        }
        }
    }
}