//

#include <iostream>
using namespace std;

int fun(int x)
{
     int y;
     if (x > 100)
          y = x - 10;
     else
          y = fun(fun(x + 11));
     return y;
}

int main()
{

     int z = fun(95);
     cout << z;
     return 0;
}
