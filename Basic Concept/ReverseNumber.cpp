// Reverse Number
#include<iostream>
using namespace std;

int main(){
    int n,rev=0;
    cin>>n;
    while(n){
        rev = rev*10 + n%10;
        n/=10;
    }
    cout<<"Reverse number: "<<rev;

    return 0;
}