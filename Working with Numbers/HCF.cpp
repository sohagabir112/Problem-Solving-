//Hightest Common Factor
#include<iostream>
using namespace std;

// int main(){
//     int num1,num2,hcf=1;
//     cin>>num1>>num2;
//     for(int i=1;i<=num1 || i<=num2; i++)
//     {
//         if(num1%i ==0 && num2%i==0)
//         {
//             hcf=i;
//         }
//     }
//     cout<<num1<<" and"<<num2<<" hightest common factor is: "<<hcf;

//     return 0;
// }

int main(){
    int num1,num2,a,b;
    cin>>num1>>num2;
    a=num1;
    b=num2;
    while(num1!=num2)
    {
        if(num1>num2) num1-= num2;
        else num2 -= num1;
    }
    cout<<"HCF of "<<a<<" and "<<b<<" is: "<<num1;

    return 0;
}

// int findHCF(int num1, int num2){
//     if(num1==0 || num2==0) return num1 + num2;
//     else if(num1 == num2) return num1;
//     else if(num1>num2) return findHCF(num1-num2,num2);
//     else return findHCF(num1, num2-num1);
// }

// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     cout<<"HCF of "<<num1<<" and "<<num2<<" is: "<<findHCF(num1,num2);

//     return 0;
// }



// int findHCF(int a, int b)
// {
//     return b == 0 ? a: findHCF(b, a%b);
// }

// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     cout<<"HCF of "<<num1<<" and "<<num2<<" is: "<<findHCF(num1,num2);

//     return 0;
// }