#include<iostream>
using namespace std;


int main(){
    cout<<"Enter n";
    int n,i,j,k;
    cin>>n;
    for (i=1;i<=n;i++){

        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }

        }

        cout<<endl;
    }
}