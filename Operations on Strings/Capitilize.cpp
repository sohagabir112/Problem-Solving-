//Capitalize the first and last character of each word of a string
#include<iostream>
using namespace std;

// int main(){
//     string str;
//     getline(cin, str);

//     int len = str.length();
//     for(int i=0;i<len;i++)
//     {
//         if(i == 0 || str[i-1] == ' ')
//         {
//             if(str[i] >= 'a' && str[i]<='z')
//             {
//                 str[i] -=32;
//             }
//         }
//         if((i<len -1 &&  str[i+1] == ' ') || i==len-1)
//         {
//             if(str[i] >= 'a' && str[i]<='z')
//             {
//                 str[i] -=32;
//             }
//         }
//     }
//     cout<<str;

//     return 0;
// }

int main(){
    string str;
    getline(cin, str);
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(i==0 || i == (len - 1))
        {
            str[i] = toupper(str[i]);
        }
        else if(str[i]==' ')
        {
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }
    cout<<str;

    return 0;
}