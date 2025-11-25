//Find the nth term fibonacci series
#include<iostream>
using namespace std;

// int main(){
//     int n, a= 0 ,b=1;
//     cin>>n;
//     int nextTerm;

//     for(int i = 2 ; i<n; i++)
//     {
//         nextTerm = a+b;
//         a=b;
//         b=nextTerm;
//     }
//     cout<<nextTerm;

//     return 0;
// }

int fib(int n){
    if(n<=1) return n;

    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}