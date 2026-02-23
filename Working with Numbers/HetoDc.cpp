//Hexadecimal to decimal conversion
#include<iostream>
#include<math.h>
using namespace std;

int getHexadecimal(string n){
    int len = n.size();
    int dec =0, index =0;

    for(int i =len-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            int digit = int(n[i]) - 48;
            dec += digit*pow(16,index);
            index++;
        }

        else if(n[i]>= 'A' && n[i]<= 'F')
        {
            int digit = int(n[i]) - 55;
            dec += digit*pow(16,index);
            index++;
        }
    }
    return dec;
}

int main(){
    string n;
    cin>>n;

    cout<<getHexadecimal(n);

    return 0;
}