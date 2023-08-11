#include<stdio.h>
union student 
{
	char name[50];
	int roll;
	int marks;
};
//---------------
    int main()
{ 
    union student s[20];
    int i,n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    printf("\n\t\tEnter information of students:\n");
      
	for (i=0;i<n;i++)
{
	s[i].roll=i+1;
	printf("\n\tFor roll number %d\n",s[i].roll);
	printf("\nEnter name:\n");
	scanf("%s",&s[i].name);
	printf("Enter marks:\n");
	scanf("%d",&s[i].marks);
}

    printf("\nDisplaying information of students:\n\n");
    for(i=0;i<n;i++)
    {
    printf("\ninformation for roll number %d:",i+1);
    printf("\nName :%d",s[i].name);
    printf("\nMarks :%d",s[i].marks);
    }
    return 0;
}


