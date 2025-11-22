//Armstrong Number
#include<iostream>
using namespace std;

int main(){
    int n,og, sum=0;
    cin>>n;
    og=n;
    while(n){
        int digit = n%10;
        sum += digit*digit*digit;
        n/=10;
    }
    if(og==sum){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not Armstrong Number"<<endl;
    }
    return 0;
}