#include<iostream>
using namespace std;

int main(){
    int n,i,j,sum;
    cout<<"Enter number of elements";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter Sum";
    cin>>sum;

    //for(i=0;i<n-1;i++){
    //    for(j=i+1;j<n;j++){
    //        if(arr[i]+arr[j]==sum){
    //            cout<<arr[i]<<" "<<arr[j];
    //        }
    //    }
    //}


    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==sum){
            cout<<arr[low]<<" "<<arr[high];
            return 0;
        }
        else if(arr[low]+arr[high]>sum){
            high--;
        }
        else{
            low++;
        }
    }
    cout<<low<<" "<<high;

}