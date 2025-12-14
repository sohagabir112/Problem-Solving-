//Reversing a Number
#include<iostream>
using namespace std;

int main(){
    int n,rev = 0;
    cin>>n;
    while(n!=0){
        int rem = n%10;
        int digit = 
        rev = rev*10 + rem;
        n/=10;
    }
    cout<<rev;

    return 0;

}