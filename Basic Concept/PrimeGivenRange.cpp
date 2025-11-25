// Prime number within a given range
#include<iostream>
using namespace std;

int main(){
    int l , h;
    cin>>l>>h;
    for(int n = l ; n <= h ; n++)
    {
        if(n<2) continue;
        bool prime = true;
        for(int  i = 2; i*i<=n ; i++)
        {
            if(n%i == 0){
                prime = false;
                break;
            }
        }
        if(prime) cout<<n<<" ";
    }
    
    return 0; 
}
