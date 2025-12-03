//Program to calculate length of the string using recursion
#include<iostream>
using namespace std;

// int getLength(char* str){
//     if(*str == '\0') return 0;
//     else return 1 + getLength(str + 1);  
// }

int getLength(char* str){
    int count = 0;
    while(*str != '\0')
    {
        count ++;
        str++;
    }
    return count;
}

int main(){
    // string str;
    // cin>>str;
    // int len = str.length();
    // cout<<len;

    char str[10];
    cin>>str;
    cout<<getLength(str);

    return 0;
}