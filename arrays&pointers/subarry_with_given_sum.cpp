#include<iostream>
using namespace std;

int main(){
    int n,i,j,sum=0,s;
    cout<<"Enter number of elements";
    cin>>n;
    
    cout<<"Enter Sum of array";
    cin>>s;
    
    int arr[n];
    cout<<"Enter elements of array";

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            {
                sum = sum + arr[j];
                if (sum == s){
                cout<<i<<" "<<j;
                return 0;
                }
            }
        }
        sum = 0;
    }
}