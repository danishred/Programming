//
#include <iostream>
using namespace std;

int main()
{
    int a, a1[4], b, b1[4], c, c1[4], d1[4], m = 0;

    cin >> a >> b >> c;

    for (int i = 0; i <= 3; i++)
    {
        a1[i] = a % 10;
        a = a / 10;
        b1[i] = b % 10;
        b = b / 10;
        c1[i] = c % 10;
        c = c / 10;
        d1[i] = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        d1[i] = a1[i] + b1[i] + c1[i] + m;
        m = d1[i] / 10;
        d1[i] = d1[i] % 10;
    }
    for (int i = 3; i >= 0; i--)

        if (d1[i] != 0)
        {
            for (i ; i >= 0; i--)
            cout<<d1[i];
            break;
        }

    //OR---------------
}
 /*   int addDigitByDigit(int a,int b,int c){
 int sum = 0, carry = 0, placeValue = 1;
    
    while (a || b || c)
    {
        int x = (a % 10) + (b % 10) + (c % 10) + carry;
        
        carry = x / 10;
        x = x % 10;
        
        sum += x * placeValue;
        placeValue = placeValue * 10;
        
        a = a / 10;
        b = b / 10;
        c = c / 10;
    }
    
    if (carry)
        sum += carry * placeValue;
    
    return sum;
 }*/

    

