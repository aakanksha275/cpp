#include<iostream>
using namespace std;

int main(){
    cout<<"Enter row and col";
    int row , col , i , j;
    cin>>row>>col; 
    for (i = 1 ; i <= row ; i++){
        for ( j = 1 ; j <=col ; j++){
            if (j==1 || j==col || i==1 || i==row){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}