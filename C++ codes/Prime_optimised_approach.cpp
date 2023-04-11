/*Optimised Approach
 
The idea is the same as the previous approach, but checking all the numbers till  sqrt(n) instead of n/2 will also do the job.

Example:

Suppose, n = 100

Now if we factorise n we’ll get the following:

(1 × 100), (2 × 50), (4 × 25), (5 × 20), (10 × 10), (20 × 5), (25 × 4), (50 × 2), (100 × 1)

Observe one thing, that after (10 × 10) all the pairs of factors are just repeating. For example (4 × 25) and (25 × 4) consist of the same numbers.

In this example 10 = sqrt(100), and this observation gives us an idea that for prime check we only need to check the divisibility with the numbers ranging from 2 to sqrt(n), because after sqrt(n) the pair of factors will be repeating.

Time Complexity: O( sqrt(n))

Space Complexity: O(1)*/

#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 100;
    
    if (isPrime(n))
        cout << "Given number is prime";
    else
        cout << "Given number is not prime"; 

    return 0;
}