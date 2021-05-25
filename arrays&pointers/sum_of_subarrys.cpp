#include<iostream>
using namespace std;

int main(){
    int n,i,j,sum=0;
    cout<<"Enter number of elements";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(i==j){
                sum = arr[i];
            }
            else{
                sum = sum + arr[j];
            }
            cout<<sum<<" ";
        }
        sum = 0;
    }
}