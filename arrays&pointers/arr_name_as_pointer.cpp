#include<iostream>
using namespace std;

int main(){
    int i;
    int arr[] = {10,20,30};

    for(i=0;i<3;i++){
        cout<<*(arr+i)<<endl;
    }
} 