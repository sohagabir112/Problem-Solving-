//HCF of a Number using Recursion in C++
#include<iostream>
using namespace std;

// int findHCF(int num1, int num2){
//     if(num1 == 0|| num2 == 0) return num1+num2;
//     else if(num1 == num2) return num1;
//     else if(num1>num2) return findHCF(num1-num2,num2);
//     else return findHCF(num1,num2-num1);
// }

int findHCF(int num1,int num2){
    return num2 == 0 ? num1 : findHCF(num2, num1%num2);
}

int main(){
    int num1,num2;
    cin>>num1>>num2;

    cout<<"HCF is :"<<findHCF(num1,num2);

    return 0;
}

