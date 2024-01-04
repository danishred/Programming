//
/*#include <iostream>
using namespace std;

int main()
{
    int n, max, zmax, c, d;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (zmax < arr[i] && arr[i]< max)
        {
            zmax=arr[i];
        }
    }
    

    cout <<zmax;
    return 0;
}*/
 

#include <bits/stdc++.h>
 
using namespace std;
 
void find2ndMax(int arr[], int n)
{
   int max = INT_MIN, secondMax = INT_MIN, m=0;
   for (int i = 0; i < n; i++)
   {
       if (arr[i] > max)
       {
           secondMax = max;
           max = arr[i];  
       }
       else if (arr[i] > secondMax && arr[i] != max)
           secondMax = arr[i];
   }
  
   if (secondMax != INT_MIN)
       cout << secondMax;
   else
       cout << m;
}
 
int main() {
   int n; 
  cin>>n;
   int arr[n];
  for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   find2ndMax(arr, n);
  
   return 0;
}

