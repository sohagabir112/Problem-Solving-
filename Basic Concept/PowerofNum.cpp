// Power oF a number
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,p;
    cout<<"Base and power: "<<endl;
    cin>>n>>p;

    int result = 1;
    for(int i=1;i<=p;i++){
        result *= n;
    }

    cout<<result;
    //cout<<"Value: "<<pow(n,p);

    return 0;
}