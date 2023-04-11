#include <stdio.h>
#include<stdlib.h>
 
int main()
{
  FILE ptr;
char name[20];
int age, salary;
/* open for writing */
  ptr=fopen ("emp.txt","w");
 if (ptr==NULL)
 {
  printf("The file doesn't exist \n");
  }
  printf("Enter the name \n");
  scanf("%s",&name);
fprintf(ptr, "Name = %s\n",name);
  printf("Enter the age \n");
  scanf("%d",&age);
fprintf(ptr, "Age = %a\n",age);
  printf("Enter the salary\n");
  scanf("%d",&salary);
fprintf(ptr, "Salary = %a\n",salary);
fclose(ptr);
return 0;
}
