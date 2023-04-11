#include<stdio.h>

int main()
{
int i=5;

printf("Preincrement\n");
while(++i <10)    //First 'i' becomes 6 fromm 5 then checked for condition <10 and then program moves to next line and prints.
printf("\n%d",i);

printf("\n\nPost increment\n");
i=5;              //Again initializing as it has become equal to 9 from the loop above
while(i++ <10)    //First condition <10 is checked for i=5 and when program moves to the other line 'i' gets updated to 6 which then gets printed
printf("\n%d",i); //Here when i=9 the program will check the condtion <10 and pass it to the next line of code during which it gets updated and prints as i=10. That is why we get to see i=10 even after the condition is i<10 in the output screen//
return 0;
}
