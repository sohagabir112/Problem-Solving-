//Leap Year or Not
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if((n%4==0) && (n%100!=0))
    {
        cout<<"Leap Year"<<endl;
    }
    else
    {
        cout<<"Not Leap Year"<<endl;
    }
    return 0;
}