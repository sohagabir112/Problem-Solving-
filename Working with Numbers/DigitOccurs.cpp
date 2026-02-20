//Finding Number of times x digit occurs in a given input
#include<iostream>
using namespace std;

// int main(){
//     int num,digit,count=0;
//     cout<<"Enter number and digit by sequence: ";
//     cin>>num>>digit;
//     while(num!=0){
//         int rem = num%10;
//         if(rem == digit) 
//         {
//             count++;
//         }
//         num/=10;
//     }
//     cout<<count;

//     return 0;
// }

int countDigitOccur(int num, int digit){
    if(num<=0) return 0;
    int rem = num%10;
    if(rem == digit)
    {
        return 1 + countDigitOccur(num/10,digit);
    }
    return countDigitOccur(num/10,digit);
}

int main(){
    int num,digit;
    cin>>num>>digit;
    cout<<countDigitOccur(num,digit);
}