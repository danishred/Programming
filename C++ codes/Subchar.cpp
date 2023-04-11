//
#include <iostream>
#include<cstring>    
using namespace std;


int main()
{
    char s1[20]="Programming";

    cout<<strchr(s1,'r')<<endl;//Taken first character from left hand side
    cout<<strrchr(s1,'r');//Taken first character from right hand side
       
    return 0;
}
