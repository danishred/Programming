#include <iostream>
#include <cstdio>
#include <cmath>
// Include headers as needed

using namespace std;

void rotate(int n, int arr[], int rot)

{
    if (rot>=n)
    {
        rot=rot%n;
    }
    
    for (int i = rot; i < n; i++)
    {

        cout<<arr[i];
      	if(i<n-1)
        {
          cout<<" ";
        }
          
    }

    for (int i = 0; i < rot; i++)
    {
      cout<<" "<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int n, T, rot;
    cin>>T;
    while (T--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin>>rot;
        rotate(n, arr, rot);
    }

    return 0;
}