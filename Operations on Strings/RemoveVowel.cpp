//Remove Vowels from a String
#include<iostream>
using namespace std;

int main(){
    string c;
    cin>>c;
    int len = c.size();
    for(int i=0;i<len;i++){
    if(c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] =='O'|| c[i] =='U'||
        c[i] == 'a' || c[i] == 'e'|| c[i] =='i' || c[i] =='o' || c[i] == 'u')
        {
            for(int j=i;j<len;j++)
            {
                c[j] = c[j+1];
            }
        i--;
        len--;
        }
    }
    
    cout<<"After removing vowel: "<<c;
    
    return 0;
}
