#include<iostream>
using namespace std;

int main(){
    int n,i,J;

    cout<<"Enter number of elements";
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = 2;
    int pd = arr[1]-arr[0];
    int curr = 2;

    for(int j=2;j<n;j++){
        if(pd == arr[j] -arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] -arr[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
    }
    cout<<ans;

}