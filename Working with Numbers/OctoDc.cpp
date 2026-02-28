//Octal to decimal conversion
#include<iostream>
#include<math.h>
using namespace std;
int getOctal(int n){
    int i=0,dec=0;
    while(n!=0)
    {
        int digit = n%10;
        dec += digit* pow(8,i);
        n/=10;
        i++;
    }
    return dec;
}

int main(){
    int n;
    cin>>n;

    cout<<getOctal(n);

    return 0;
}