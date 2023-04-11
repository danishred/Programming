/// C++ program to check if a number is Palindrome

// Time Complexity : O(log(n)) or O(Number of digits in a given number)
// Auxiliary space : O(1) or constant


#include <iostream>
using namespace std;

bool palindrome(int n)
{

    int rev_n = 0, original_num = n;

    while (n != 0)
    {
        rev_n = 10 * rev_n + (n % 10);
        n = n / 10;
    }

    // if it is true then it will return 1;
    // else if false it will return 0;
    return (rev_n == original_num);
}

int main()
{
    int n;
    cin >> n;

    if (palindrome(n))
        cout << "true";
    else
        cout << "false";
    return 0;
}
