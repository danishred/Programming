//
#include <iostream>
using namespace std;

int reverse_num(int n, int ans)
{

    if(n==0)
    {
        return ans;
    }
    ans=ans*10+n%10;
    n/=10;
    return reverse_num(n,ans);

}

int main()
{
    int n, ans, rev;
    cin >> n;
    rev = reverse_num(n,0);
    cout << rev;
    return 0;
}
