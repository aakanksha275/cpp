#include<iostream>
using namespace std;


int main(){
    int n,i,j;
    cout<<"Enter number of elements you want";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}