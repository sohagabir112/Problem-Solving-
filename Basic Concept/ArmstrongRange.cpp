//Armstrong number within given range
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int l,h;
    cin>>l>>h;

    for(int num =l; num<= h; num++)
    {
        int n = num, sum= 0, digit=0;

        for(int temp = n; temp > 0; temp/=10)digit++;

        for(int temp =n; temp > 0; temp/=10){
            sum += pow(temp%10,digit);
        }
        if(sum == num){
            cout<<num<<" ";
        }
    }
    return 0;
}