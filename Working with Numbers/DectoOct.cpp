//Decimal to Octal conversion
#include<iostream>
using namespace std;

// int main(){
//     int n,i=1,rem,oct=0;
//     cin>>n;
//     while(n!=0)
//     {
//         rem = n%8;
//         n/=8;
//         oct += rem*i;
//         i*=10;
//     }
//     cout<<oct;

//     return 0;
// }

void convertOctal(int n){
    int octalArr[30];
    int i=0;
    while(n>0)
    {
        octalArr[i] = n%8;
        n/=8;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<octalArr[j];
    }
}

int main(){
    int n;
    cin>>n;
    convertOctal(n);
    return 0;
}