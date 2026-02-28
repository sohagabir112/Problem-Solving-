/*Problem Statement :
In a classroom some of the seats are already occupied 
by students and only a few seats are available in the 
classroom. The available seats are assumed as r and n 
number of students are looking for the seat. We need 
to find in how many different permutations n number 
of students can sit on r number of chairs*/

#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1;i<= n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main(){
    int n,r;
    cin>>n>>r;
    int p = fact(n)/fact(n-r);

    cout<<p;

    return 0;
}