//Abundant number is an number in which the sum of the proper divisors of the number is greater than the number itself.
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum>n){
        cout<<"Abundant Number"<<endl;
        //cout<<"The Abundance is: "<<(sum-n);
    }
    else{
        cout<<"Not Abundant Number";
    }

    return 0;
}