//

#include <iostream>
using namespace std;

int main()
{
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
