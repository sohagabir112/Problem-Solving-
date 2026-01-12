//Find non-repeating characters in a string
#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int freq[26]={0};
    for(int i=0;i<str.length();i++)
    {
        freq[str[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i] == 1)
        {
            cout<<char(i+97)<<" ";
        }
    }

    return 0;
}