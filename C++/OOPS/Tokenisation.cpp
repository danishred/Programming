// Hard time understanding this one
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "x=10;a=20;z=35";
    char *token = strtok(s1, ";"); // In first call we pass a string

    while (token != NULL)
    {
        cout << token << "\n" //address , We are actually printing address here
             << *token << "\n";
        token = strtok(NULL, ";");
        /*from second call we pass NULL, it will
        use same string given in first call*/
    }

    return 0;
}