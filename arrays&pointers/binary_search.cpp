#include<iostream>
using namespace std;

int binarySearch(int myarr[] , int n , int f){
    int low = 0;
    int high = n;
    
    while(low<=high){
        int mid = (high + low)/2;

        if(myarr[mid] == f){
            return mid;
        }
        else if (myarr[mid] > f){
            high = mid-1;
        }
        else{
            low = mid+1;
        }   
    }
    return -1;

}

int main(){
    int n,f,i;
    cout<<"Enter number of elements";
    cin>>n;
    int myarr[n];
    for(i=0;i<n;i++){
        cin>>myarr[i];
    }

    cout<<"Enter number to find";
    cin>>f;

    int index = binarySearch(myarr,n,f);
    cout<<index;

}