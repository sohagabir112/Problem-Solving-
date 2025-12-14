//Prime number 
#include<iostream>
using namespace std;

bool isPrime(int n){
    bool prime = true;
    if(n<2) return false;

    for(int i =2;i<n/2;i++)
    {
        if(n%i==0){
            prime = false;
        }
    }
    return prime;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}