// Count_set_bits (op works for negative numbers)

#include <iostream>
#include "supplement.h"
using namespace std;


// Most efficient 
    int table[256];
	
	// recursive function to count set bits 
	void initialize() { 

      // To initially generate the table algorithmically:
      table[0] = 0;
      for (int i = 0; i < 256; i++)
      {
          table[i] = (i & 1) + table[i / 2];
      }
	} 
	
	int countSetBits(int n)
	{
	    return table[n & 0xff] + 
        table[(n >> 8) & 0xff] + 
        table[(n >> 16) & 0xff] + 
        table[n >> 24]; 
	}
// Time Complexity:Θ(1)
// Auxiliary Space:Θ(1) 


// Takes set bits time
void csb_op(int n)
{
    int res = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        res++;
    }
    cout << res << endl;
}
// Time Complexity:Θ(d) | d is number of bits from last bit to msb
// Auxiliary Space:O(1)


// Naive method
void csb_naive(int n)
{
    int res = 0;
    while (n != 0)
    {
        // if (n % 2 != 0)
        //     res++;
        res = res + (n & 1);
        n = n / 2;
    }
    cout << res << endl;
}
// Time Complexity:Θ(logn)
// Auxiliary Space:Θ(1) 


int main()
{
    int n;
    cin >> n;
    initialize();
    cout<<countSetBits(n)<<endl;
    csb_naive(n);
    csb_op(n);
}

