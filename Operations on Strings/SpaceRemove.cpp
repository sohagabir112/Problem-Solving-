//Remove spaces from a string
#include<iostream>
using namespace std;

int main(){
    string str, result ="";
    cout<<"Enter a String: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++)
    {
        // char ch = str[i];
        // if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        // {
        //     result +=ch;
        // }
        if(str[i] != ' '){
            result += str[i];
        }
    }
    cout<<result;
    
    return 0;
}