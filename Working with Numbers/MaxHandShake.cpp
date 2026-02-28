/*For the number of handshakes to be maximum, 
every person should hand-shake with every other
 person in the room
*/
#include<iostream>
using namespace std;

int main(){
    int n,sk;
    cin>>n;
    sk = ((n-1)*n)/2;
    cout<<sk;

    return 0;
}