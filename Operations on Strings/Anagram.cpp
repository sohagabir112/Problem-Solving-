//Checking if two strings are Anagram or Not
#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int f1[26] ={0},f2[26] ={0},flag=0;
    for(int i=0;i<str1.length();i++)
    {
        f1[str1[i]-'a']++;
    }
    for(int i=0;i<str2.length();i++)
    {
        f2[str2[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(f1[i]!=f2[i]){
            flag = 1;
        }
    }
    if(flag == 0) cout<<"Anagram";
    else cout<<"Not Anagram";

    return 0;
}
