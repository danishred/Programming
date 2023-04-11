 #include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int fact_recursive(int num)  
{
  int result;
  if (num == 0)
    return 1;     // fact() return 1 if argument is 0
  else
  {
    result = num * fact_recursive(num-1);      // Call recursively with lesser number.
    return result;
  }
}
int main() {
  int number, fact1;
  number = 5;    // Number whose factorial required
  fact1 = fact_recursive(number);        // Call the Recursive version
  cout<<"Number="<<number<<endl;
  cout<<"Recursive_Factorial="<<fact1<<endl;
}