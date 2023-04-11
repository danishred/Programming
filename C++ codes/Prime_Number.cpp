#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n = 23;
    
    if (isPrime(n))
        cout << "Given number is prime";
    else
        cout << "Given number is not prime"; 

    return 0;
}