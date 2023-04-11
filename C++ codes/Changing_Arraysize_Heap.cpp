// We can change during runtime here in heap but same is not possible in stack
#include <iostream>
using namespace std;

int main()
{
    int *p=new int [20];

    delete []p; //Avoids memory leak
    p=new int[40];
    return 0;
}
