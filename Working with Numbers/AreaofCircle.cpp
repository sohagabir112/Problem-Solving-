// Area of a circle
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int r;
    cout<<"Enter radius: ";
    cin>>r;
    float area = M_PI * pow(r,2);
    cout<<"Area is: "<<area;

    return 0;
}