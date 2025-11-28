//Find the Factorial of a number using recursion 
#include<iostream>
using namespace std;

int getFact(int n){
    if(n == 0 || n==1) return 1;
    else{
        return n* getFact(n-1);
    }
}

int main(){
    int n;
    cin>>n;

    cout<<getFact(n);

    return 0;
}