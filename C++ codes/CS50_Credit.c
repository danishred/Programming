#include <stdio.h>

int main(void)
{
    long long int Number;
    scanf("%lli",&Number);
    long long int secondsum = 0;
    long long int lastsum = 0;
    int count=0;
    long long int NumPreserved=Number;

    while (Number)
    {
        lastsum = lastsum + Number % 10;
        Number = Number / 10;
        count++;

        if (Number % 10 < 5)
        {
            secondsum = secondsum + (Number % 10) * 2;
        }
        else
        {
            secondsum = secondsum + ((Number % 10) * 2) % 10 + ((Number % 10) * 2) / 10;
        }

        Number = Number / 10;
        if(Number>0)
        {
        count++;
        }
    }

    if ((lastsum + secondsum) % 10 == 0)
    {
        if (count == 13 || count == 15 || count == 16)
        {
            while(NumPreserved/100>0)
            {
                NumPreserved=NumPreserved/10;
            }    
            if (NumPreserved == 34 || NumPreserved == 37)
            {
                printf("AMEX\n");
            }
            else if (NumPreserved > 50 && NumPreserved < 56)
            {
                printf("MASTERCARD\n");
            }
            else if (NumPreserved/10 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}