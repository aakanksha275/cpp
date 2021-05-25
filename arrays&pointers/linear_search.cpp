#include<iostream>
using namespace std;

int linearSearch(int myarr[],int n , int f){
    int i;
    for(i=0;i<n;i++){
        if (myarr[i]==f){
            return i;
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

    int index = linearSearch(myarr, n , f);
    if (index == -1){
        cout<<"Element not found";
    }
    else{
           cout<<"Element found at index: "<<index;
    }
    return 0;
}