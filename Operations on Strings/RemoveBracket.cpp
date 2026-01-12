//Remove brackets from an algebraic expression
#include<iostream>
using namespace std;

int main(){
    string str, result="";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        if(ch != '(' && ch != ')' && ch != '{' && ch !='}' && ch != '[' &&  ch != ']')
        {
            result += ch;
        } 
    }
    cout<<result;

    return 0;
}