//Binary  to decimal conversion 
#include<iostream>
#include<math.h>
using namespace std;

int getDecimal(long int n){
    int i=0,dec=0;
    while(n!=0)
    {
        int digit = n%10;
        dec += digit*pow(2,i);
        n/=10;
        i++;
    }
    return dec;
}

int main(){
    long int n;
    cin>>n;

    cout<<getDecimal(n);

    return 0;
}