//

#include <iostream>
using namespace std;

int main()
{
    int a = 0, i = 0, b;
    {
        for (i = 0; i < 5; i += 0.5)
        {
            a++;
            continue;
        }
        printf("%d", a);

        return 0;
    }
}