//
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "235";
    char s2[20] = "54.78";

    long int x = strtol(s1, NULL, 10); // here 10 is for decimal system
    float y = strtof(s2, NULL);

    cout << x << "\n"
         << y << "\n"
         << x + 10 << "\n"
         << y - 5;

    return 0;
}