#include<iostream>
using namespace std;


int main(){
    cout<<"Enter n";
    int n,i,j,k;
    cin>>n;
    for ( i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

}