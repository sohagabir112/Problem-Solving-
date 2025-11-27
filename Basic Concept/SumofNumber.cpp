//Sum of first natural number
#include<iostream>
using namespace std;

int main(){
    int n, result=0;
    cin>>n;
    // for(int i = 1 ; i <= n; i++)
    // {
    //     result +=i ;
    // }
    // cout<<result;

    int res = (n*(n+1))/2;

    cout<<res<<endl;

    return 0;
}