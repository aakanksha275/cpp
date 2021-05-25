#include<iostream>
using namespace std;

void get2NonRepeatingNos(int ar[], int ar_size,int *x, int *y)
    {
        *x = 0;
        *y = 0;
        for(int i=0;i<ar_size;i++){
            if(ar[i]&1){
                *x = *x ^ ar[i];
            }
            else{
                *y = *y ^ ar[i];
            }
    }
}
 
// Driver code
int main()
    {
        int ar[] = {2, 3, 5, 4, 6, 6 , 3, 4};
        int n = sizeof(ar)/sizeof(*ar);
        int *x = new int[(sizeof(int))];
        int *y = new int[(sizeof(int))];
        get2NonRepeatingNos(ar, n, x, y);
        cout<<"X is"<<*x<<"y is"<<*y;
        return 0;
    }