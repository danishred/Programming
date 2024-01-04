#include<iostream>
using namespace std;


//write a Max() function template for 2 numbers
template <class t>
t Max(t x, t y)
{
    
    return x>y?x:y; // If a greater than > b then return ? a otherwise return : b ; we can use this in exception of if else.
                    // ? = then, : = otherwise
}


int main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}
