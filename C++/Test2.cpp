#include <iostream>
#include <vector>

using namespace std;

vector<int> reverseSubarray(vector<int> arr, int k)
{

  if (k == 1)
    return arr;

  for (int i = 0; i < arr.size(); i += k)
  {
    int l = i;
    int p = arr.size() - 1;
    // to handle case when k is not multiple of n
    int r = min(l + k - 1, p);

    // reverse the sub-array [l, r]
    while (l < r)
    {
      int temp = arr[l];
      arr[l] = arr[r];
      arr[r] = temp;

      l++;
      r--;
    }
  }
  return arr;
}

int min(int x, int y)
{
  return x < y ? x : y;
}

/*void reverse(vector<int> arr, int l, int r)
{
  while (l < r)
  {
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    l++;
    r--;
  }
}*/

int main()
{
  int i, n, k;
  cin >> n;
  vector<int> arr(n);
  for (i = 0; i < n; i++)
    cin >> arr[i];
  cin >> k;
  vector<int> res;
  res = reverseSubarray(arr, k);
  for (i = 0; i < res.size(); i++)
    cout << res[i] << " ";
  return 0;
}