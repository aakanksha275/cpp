#include<iostream>
using namespace std;

int main(){

    int row,col,i,j;
    cout<<"Enter number of row and col";
    cin>>row>>col;

    int arr[row][col];

    cout<<"Enter Elements";
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Elements are";
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}