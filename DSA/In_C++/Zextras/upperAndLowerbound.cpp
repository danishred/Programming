//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={1,4,6,9,9,11,13};
    int n = sizeof(a)/sizeof(int);
    int ind = lower_bound(a,a+n,4)-a;
    int inde = upper_bound(a,a+n,9)-a;
    cout<<ind<<endl; // 1 
    cout<<inde<<endl; // 2
    return 0;
}
