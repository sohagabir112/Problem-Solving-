//Count the sum of numbers in a string
#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a number: ";
    cin>>str;

    int i,sum=0;
    for(i=0;i<str.length();i++)
    {
        if((str[i]>='0') && (str[i]<='9'))
        {
            sum += (str[i] - '0');
        }
    }
    cout<<sum;

    return 0;
}