#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter number of elements";
    cin>>n;
    int arr[n];

    cout<<"Enter elements of array";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    for(i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    
}