//
#include <iostream>
using namespace std;


    int main()
{
    // What is a pointer? ----> Data type which holds the address of variables of other data types
    int a=3;
    int *b = &a;  // doing this will store the address in b and value of a in *b

    // & ---> (Address of) Operator
    cout<<"Value of a "<<a<<endl;
    cout<<"The address of a or &a is "<<&a<<endl;
    cout<<"The address of a or b is "<<b<<endl;
    cout<<"Value of a or *b is"<<*b<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl; 
    cout<<"The value stored in b is "<<*c<<endl; 
    cout<<"The value stored at address that is stored in b is "<<**c<<" or "<<*b<<" or "<<a<<endl; 
    cout<<"Address of C is "<<&c;
    



    return 0;
}

    
