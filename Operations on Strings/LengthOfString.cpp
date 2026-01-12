//Length of the string without using strlen() function
#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count = 0;
    for(int i=0;str[i] !='\0';i++){
        count++;
    }
    cout<<count;

    return 0;
}