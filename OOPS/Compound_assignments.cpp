#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int v,u,a,s;
    cout<<"Enter value of v, u, a \n";
    cin>>v>>u>>a;
    s=(v*v-u*u)/(2*a);
    cout<<"The speed is: "<<s<<"m/s";
    return 0; 
}