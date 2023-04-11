#include<stdio.h>
struct student //naming struct
{   //These are the different data types of this struct
	char name[20]; 
	long long mobile_no;
	char address[100];
	int marks;
};//N can be declared here also, before semicolon 
int main()
{
struct student N; //N is the variable like name of student
printf("\nEnter student name:");
scanf("%s",&N.name); // . operator is used for pointing this variable to the specific data type
printf("\nEnter student mobile number:");
scanf("%lli",&N.mobile_no);
printf("\nEnter student address:");
scanf("%s",&N.address);
printf("\nEnter student marks:");
scanf("\n%d",&N.marks);

printf("\nStudent name is %s",N.name);
printf("\nStudent mobile no is %lli",N.mobile_no);
printf("\nStudent address is %s",N.address);
printf("\nStudent marks is %d",N.marks);
return 0;
}
