// Palindrome number 
#include<iostream>
using namespace std;

int main(){
    int n,rev=0,mainNum;
    cin>>n;
    mainNum = n;

    while(n){
        rev = rev*10 + n%10;
        n/= 10;
    }
    if(mainNum==rev){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}