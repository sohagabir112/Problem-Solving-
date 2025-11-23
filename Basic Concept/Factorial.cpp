//Factorial of a number
#include<iostream>
using namespace std;

// int main(){
//     int n ,fact= 1;
//     cin>>n;
//     if(n<0) cout<<"Not possible";
//     else{
//         for(int i =1; i<=n ;i++)
//         {
//          fact *= i;
//         }
//     }
//     cout<<n<<" Factorial is:"<<fact;
    
//     return 0;
// }

int getFact(int n){
    if(n==0 ) return 1;

    return n * getFact(n-1);
}

int main(){
    int n;
    cin>>n;
    
    cout<<"Factorial is: "<<getFact(n);
    return 0;
}