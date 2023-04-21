#include <stdio.h>
int checkPrime(int, int); //Function to check prime or not 

int main()
{
    int num, check;
    scanf("%d", &num); //The number is taken from test case data
    check = checkPrime(num, num/2);
    if (check == 1)
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}


int checkPrime(int num, int num2)
{
    

}