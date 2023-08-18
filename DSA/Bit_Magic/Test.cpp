// Find longest consecutive 1s

#include <iostream>
using namespace std;

// Mine
void max_cons_1(int N)
{
    int cur_cnt = 0, max_cnt = 0;
    for (int i = 0; i < 32; i++)
    {
        if (N & 1)
        {
            cur_cnt++;
        }
        if ((N & 1) == 0)
        {
            cur_cnt = 0;
        }
        if (max_cnt <= cur_cnt)
        {
            max_cnt = cur_cnt;
        }
        N = N >> 1;
    }
    cout << endl
         << max_cnt << endl;
}
// Time Complexity:O(1) 
// Auxiliary Space:O(1) 


int main()
{
    int N;
    cin >> N;
    max_cons_1(N);
    return 0;
}
