#include<iostream>
using namespace std;

int HexToDec(string n){
  int sum = 0;
  int x = 1;
  int s = n.size();
  for(int i=s-1;i>=0;i--){
      if(n[i] >= '0' && n[i]<= '9'){
          sum = sum + x*(n[i]-'0');
      }
      else if (n[i] >='A' && n[i]<='F'){
           sum = sum + x*(n[i]-'A' + 10);
      }
      x =x * 16;
  }
    return sum;
}


int main(){
    string n;
    cin>>n;
    cout<< HexToDec(n);
}