//Strong Numbers is a number in which the sum of the factorial 
//of individual digits of the numbers is equal to the number itself
#include<iostream>
using namespace std;

// int fact(int n){
//     int fact =1;
//     for(int i=1; i<=n; i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }

// int detectStrong(int n){
//     int digit,sum=0;
//     int temp =n;

//     while(temp!=0)
//     {
//         digit = temp % 10;
//         sum += fact(digit);
//         temp/=10;
//     }
//     return sum == n;
// }

// int main(){
//     int n,sum=0;
//     cin>>n;
//     if(detectStrong(n)) 
//         cout<<n<<" is Strong number";
//     else
//         cout<<n<<" is not Strong number";

//     return 0;
// }
int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);
}

int detectStrong(int n){
    int digit, sum=0;
    int temp = n;

    while(temp!=0)
    {
        digit = temp%10;
        sum += fact(digit);
        temp/=10; 
    }
    return sum == n;
}
int main(){
    int n;
    cin>>n;

    if(detectStrong(n)) cout<<n<<" is Strong number";
    else cout<<n<<" is not Strong number";

    return 0;

}