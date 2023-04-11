 //  
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20]="Hello";
    char s2[20]="hello";
    //here first is smaller than second, uses dictionary sorting.
    //gives the difference between the first two differing char from LHS.
    cout<<strcmp(s1,s2);
    return 0;
}
