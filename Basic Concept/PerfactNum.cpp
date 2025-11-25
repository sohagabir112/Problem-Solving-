//A perfect number is a number in which the sum of the proper 
//positive divisors of the number is equal to the number itself
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;

    for(int i= 1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(n==sum) cout<<"Perfect Number";
    else cout<<"Not Perfect Number";

    return 0;
}
