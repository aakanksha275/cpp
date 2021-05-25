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

    int row_st = 0 , row_end = row-1 , col_st = 0 , col_end = col-1;

    while(row_st<=row_end && col_st<=col_end){
        
        //for row start
        for(i=col_st; i<=col_end; i++){
            cout<<arr[row_st][i]<<" ";
        }
        row_st++;

        //for col end
        for(i=row_st; i<=row_end;i++){
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;

        //for row end
        for(i=col_end; i>=col_st; i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;

        //for col start
        for(i=row_end;i>=row_st;i--){
            cout<<arr[i][col_st]<<" ";
        }
        col_st++;
    }
    return 0;

}