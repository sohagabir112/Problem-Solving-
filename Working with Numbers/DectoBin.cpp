//Decimal to Binary Conversion
#include<iostream>
#include<math.h>
using namespace std;

// int main(){
//     int n,i=1,rem;
//     cin>>n;
//     long long binary = 0;
//     while(n!=0)
//     {
//         rem = n%2;
//         n/=2;
//         binary += rem*i;
//         i*=10;
//     }
//     cout<<binary;

//     return 0;

// }

void convertBinary(int n){
    int binaryArr[32];
    int i = 0;
    while(n>0)
    {
        binaryArr[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<binaryArr[j];
    } 
        
}

int main(){
    int n;
    cin>>n;
    convertBinary(n);
    return 0;
}