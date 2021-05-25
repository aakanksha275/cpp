#include<iostream>
using namespace std;

int main(){
    int row,col;
    int *p;
    cin>>row>>col;
    int arr[row][col];
    cout<<"Enter Values"<<endl;
    for(p=&arr[0][0];p<&arr[row][col];p++){
        cin>>*p;
    }
    cout<<"Displaying Values"<<endl;
    for(p=&arr[0][0];p<&arr[row][col];p++){
        cout<<*p<<endl;
    }
}