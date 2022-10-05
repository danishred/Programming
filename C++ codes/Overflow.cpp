/*Overflow: when the value is more than the capacity then it will take the value from the beginning. Like in case of 
characters, its range is "-128 to 127" and if we try to exceed this range from either side it will cycle the value like
 -128 -1=127 or 127+1=-128.*/

#include<iostream>
using namespace std;

int main()
    {
        char x=127;
        x++;
        cout<<(int)x;
    return 0;
    }


