//Count the number of vowels
#include<iostream>
using namespace std;

int main(){
    string c;
    cin>>c;
    int count = 0;
    for(int i=0;c[i] != '\0';i++){
    if(c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] =='O'|| c[i] =='U'||
        c[i] == 'a' || c[i] == 'e'|| c[i] =='i' || c[i] =='o' || c[i] == 'u'){
            count++;
        }
    }
    cout<<"Total vowel is: "<<count;
    
    return 0;
}
