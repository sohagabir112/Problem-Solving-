//Binary to Octal conversion
#include<iostream>
#include<math.h>
using namespace std;
void convertOctal(long long bin){
    int octalDigit = 0,count =1, i=0, pos= 0;
    int octalArr[32]={0};
    while (bin!=0)
    {
        int digit = bin%10;
        octalDigit += digit *pow(2,i);
        i++;
        bin/=10;

        octalArr[pos] = octalDigit;

        if(count%3 == 0)
        {
            octalDigit=0;
            i=0;
            pos++;
        }
        count++;
    }
    for(int j=pos;j>=0;j--)
    {
        cout<<octalArr[j];
    }
}

int main(){
    long long binary;
    cin>>binary;
    convertOctal(binary);
     return 0;
}