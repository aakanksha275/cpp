#include<iostream>
using namespace std;


int main(){
    int n,j,i;
    cout<<"Enter number of elements you want";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }


}