//Lowest common multiple 
#include<iostream>
using namespace std;

// int main(){
//     int num1,num2,lcm;
//     cin>>num1>>num2;
//     for(int i = 1;i<=num1 || i<= num2;i++)
//     {
//         if(num1%i ==0 && num2%i == 0) lcm = i;
//     }
//     lcm = (num1*num2)/lcm;

//     cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;

//     return 0;
// }

// int main(){
//     int num1,num2,lcm;
//     cin>>num1>>num2;
//     int max = (num1>num2)? num1 : num2;

//     for(int i = max;i <=num1*num2; i++)
//     {
//         if(i%num1 == 0 && i%num2==0)
//         {
//             lcm =i;
//             break;
//         }
//     }
//     cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;

//     return 0;
// }

int findHCF(int num1, int num2){
    if(num1==0 || num2==0) return num1 + num2;
    else if(num1 == num2) return num1;
    else if(num1>num2) return findHCF(num1-num2,num2);
    else return findHCF(num1, num2-num1);
}

int main(){
    int num1, num2,lcm;
    cin>>num1>>num2;
    int hcf = findHCF(num1, num2);
    lcm = (num1*num2)/hcf;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;

    return 0;
}