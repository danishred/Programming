#include<iostream>
using namespace std;


//1. write a sum() function here to add 2 integer
int sum(int x,int y)
{
    return x+y;
}
//2. write a sum() function here to add 2 floats
float sum(float x,float y)
{
    return x+y;
}
//3. write a sum() function here to add 3 integer
int sum(int x,int y, int z)
{
    return x+y+z;
}


int main()
{
    cout<<sum(10,5)<<"\n";
    cout<<sum(12.9f,8.3f)<<"\n";
    cout<<sum(10,20,30)<<"\n";

    return 0;
}    
