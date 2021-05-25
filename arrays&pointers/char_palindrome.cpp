#include<iostream>
using namespace std;


int main(){

    cout<<"enter number of char";
    int n,f=1;
    cin>>n;
    char name[n+1];
    cout<<"enter name"<<endl;
    cin>>name;
    for(int i=0;i<n;i++){
        if(name[i]!=name[n-i-1]){
            f=0;
            break;
        }
    }

   if(f==1){
       cout<<"Palindrome";
   }
   else{
       cout<<"Not";
   }
}