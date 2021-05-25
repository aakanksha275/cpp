#include<iostream>
#include<cmath>

using namespace std;


int OctToDec(int n){
    int i=0,r,sum = 0;
    while(n>0){
        r = n%10;
        sum =sum+ r*pow(8,i);
        n=n/10;
        i=i+1;
    }
    return sum;
}


int main(){
    int n;
    cin>>n;
    int ans = OctToDec(n);
    cout<<ans;
}