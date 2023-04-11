


#include <iostream>
#include <math.h>
using namespace std;

bool verifyPrime(int n)
 {	
  	int flag=1;
    for (int i = 2; i <= sqrt(n); i++) 
  
      if (n % i == 0) 
    {
            flag = 0;
            break;
    }
 
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) 
    {
        return true;
    }
    else 
    {
      return false;
    }
    }




int main()
{
  int T, no;
  cin>>T;
  while(T--)
  {
    cin>>no;
    if (verifyPrime(no))
      cout<<"PRIME"<<endl; 
    else 
      cout<<"NOT PRIME"<<endl; 
  }
  return 0;
}