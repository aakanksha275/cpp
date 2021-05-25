#include<iostream>
using namespace std;

void getbit(int n){
    if ((n&1)==0){
        cout<<"even";
    }
    else{
        cout<<"Odd";
    }

}

int main(){
    getbit(8);
}