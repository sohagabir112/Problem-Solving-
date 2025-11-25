//Prime Number
#include<iostream>
using namespace std;

int main(){
    // int i, n, p=0;
    // cin>>n;
    // for(int i = 2; i <n/2 ; i++)
    // { 
    //     if (n%i == 0)
    //     {
    //         p++;
    //         break;
    //     }    
    // }
    // if ((p == 0) && (n !=1))
    // {
    //     cout<<"Prime Number"<<endl;
    // }
    // else    
    // {
    //     cout<<"Not Prime Number"<<endl;
    // }

    int n ,i;
    cin>>n;
    for(int i = 2; i*i <= n && n%i != 0; i++);
    cout<<(n>1 && i*i > n ?  "Prime" : "Not prime")<<endl;
    
    return 0;
}