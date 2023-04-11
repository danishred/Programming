#include<stdio.h>

int main()
{
int s1,s2,s3,s4,s5,sum;         //variable begins with a letter
float avg;

printf("\n enter subject 1 marks :\t");
scanf("%d",&s1);
printf("\n enter subject 2 marks :\t");
scanf("%d",&s2);
printf("\n enter subject 3 marks :\t");
scanf("%d",&s3);
printf("\n enter subject 4 marks :\t");
scanf("%d",&s4);
printf("\n enter subject 5 marks :\t");
scanf("%d",&s5);
sum=s1+s2+s3+s4+s5;
printf("\n The summation of marks of all the subjects is: %d",sum);
avg=sum/5;
printf("\n The average of 5 subject is: %2f",avg);

return 0;
}
