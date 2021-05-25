#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter number of elements";
    cin>>n;
    int myarr[n];
    for(i=0;i<5;i++){
        cin>>myarr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(i=0;i<5;i++){
        if (myarr[i] > max){
            max = myarr[i];
        }
        if (myarr[i] < min){
            min = myarr[i];
        }
    }
    cout<<"Maximun is "<<max<<endl;
    cout<<"Minimum is "<<min;
    return 0;

}
