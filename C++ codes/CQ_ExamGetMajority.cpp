//
#include <iostream>
using namespace std;

int getMajorityElement(int array[], int size)
{
  int count, num;
  for (int i = 0; i < size; i++)
  {
    count=0;
    num = array[i];
    for (int i = 0; i < size; i++)
    {
      if (num == array[i])
        count++;
      if (count > size / 2)
        return array[i];
    }
  }
  return -1;
}

int main()
{
  int i, size;
  cin >> size;
  int array[size];
  for (i = 0; i < size; i++)
  cin >> array[i];
  cout << getMajorityElement(array, size);
  return 0;
}