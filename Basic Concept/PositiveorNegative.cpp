//Positive or Negative number
#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a>0){
        cout<<"Its a Positive Number"<<endl;
    }
    else if (a==0)
    {
        cout<<"Its a Neutral Number"<<endl;
    }
    
    else{
        cout<<"Its a Negative Number"<<endl;
    }

    return 0;
}