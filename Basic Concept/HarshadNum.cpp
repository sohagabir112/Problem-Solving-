//A Harshad number is a positive integer that is divisible by 
//the sum of the digits of the integer. It is also called the Niven number
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int og =n;
    int digit;
    while(n!=0){
       digit = n%10;
       sum+=digit;
       n/=10; 
    }
    if(og%digit==0){
        cout<<"Harshad Number";
    }
    else{
        cout<<"Not Harshad Number";
    }
    return 0;
}