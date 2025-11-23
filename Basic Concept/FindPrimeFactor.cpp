// Finding Prime Factors of a number
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
    }
    return 0;
}