// Decimal to Hexadecimal conversion
#include<iostream>
using namespace std;

int main(){
    int n,i=0,rem;
    cin>>n;
    string hex;
    while(n!=0)
    {
        rem = n%16;
        if(rem<10)
        {
            hex[i] = rem +48;
            i++;
        }
        else 
        {
            hex[i] = rem +55;
            i++;
        }
        n/=16;
    }
    for(int j = i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
    return 0;
}