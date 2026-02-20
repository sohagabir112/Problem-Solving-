//Calculate the number of digit in an integer
#include<iostream>
using namespace std;

int main(){
    int n,digit=0,rem;
    cin>>n;
    while(n!=0)
    {
        n/=10;
        digit++;
    }
    cout<<digit;

    return 0;
}