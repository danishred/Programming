	#include<stdio.h>
struct Studentdata 
{
	 char *stu_name;
	 int stu_id;
	 int stu_age;
};

int main()
{
	  //student is variable of structure Studentdata
	  struct Studentdata student;
	  //assigning values of each struct member 
	  student.stu_name="Noori";
	  student.stu_id=12345;
	  student.stu_age=20;
	  
	  //output the values of struct members
	  printf("\nStudent Name is: %s",student.stu_name);
	  printf("\nStudent Id is: %d",student.stu_id);
	  printf("\nStudent age is: %d",student.stu_age);
	  return 0;	
}
