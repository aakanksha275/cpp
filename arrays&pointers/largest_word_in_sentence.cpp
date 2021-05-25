#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter length";
    cin>>n;
    cin.ignore();

    char arr[n+10];
    cin.getline(arr,n);

    int i=0;
    int curr = 0,maxx = INT_MIN;
    int st,maxst=0;

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curr > maxx){
                maxx = curr;
                maxst = st;
                
            }
            curr=0;
            st = i+1;
        }
        else{
                curr++;
            }

        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxx<<endl;
    for(int i =0;i<maxx;i++){
        cout<<arr[i+maxst];
    }
}