#include<iostream>
using namespace std;


int main(){
    cout<<"Enter n";
    int n,i,j,c=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
}