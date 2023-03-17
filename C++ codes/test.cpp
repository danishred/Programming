//

#include <iostream>
using namespace std;

int main()
{
<<<<<<< HEAD
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
=======
     int Array[3][3];

     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               std::cin>>Array[i][j];
          }
          
     }
     
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               std::cout<<Array[i][j];
          }
          cout<<endl;
     }


     
    return 0;
}
>>>>>>> da096ce206387447acd1d393cac37f3bc9de3e41
