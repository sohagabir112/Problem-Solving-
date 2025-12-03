// LCM of two numbers
#include<iostream>
using namespace std;

// int getHCF(int num1,int num2){
//     return num2 == 0 ? num1 : getHCF(num2,num1%num2); 
// }

int getHCF(int num1, int num2){
    if(num1 == 0|| num2==0) return num1 + num2;
    else if(num1 == num2) return num1;
    else if(num1>num2) return getHCF(num1 - num2,num2);
    else return getHCF(num1,num2-num1);
}

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int hcf = getHCF(num1,num2);
    int lcm = (num1*num2)/hcf;

    cout<<"LCM is: "<<lcm;

    return 0;
}