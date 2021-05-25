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

    int counter = 1;
    while(counter<n){
        for(j=0;j<n-counter;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
        }
        counter++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}