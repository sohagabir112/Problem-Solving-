//Last non-zero digit in factorial
#include<iostream>
using namespace std;

int main(){
    int n,fact =1;
    cin>>n;
    for(int i = 1; i<=n ; i++)
    {
        fact *=i; 
    }
     cout<<"Factorial: "<<fact<<endl;
    int digit = fact%10;
    if(digit == 0){
        fact/=10;
        digit = fact % 10; 
        cout<<digit;
    }
    else{
        cout<<digit;
    }

    
    
    return 0;
}