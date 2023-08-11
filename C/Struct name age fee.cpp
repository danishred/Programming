	#include<stdio.h>

struct abc
{
	 int age;
	 char name[10];
	 long long fee;
};
int main()
  {
  struct abc a[5];
  int i;
  for(i=0;i<2;i++)
  {
  	printf("\nEnter your name\n");
  	scanf("%s",&a[i].name);
  	printf("Enter your age\n");
  	scanf("%d",&a[i].age);
  	printf("Enter your fee\n");
  	scanf("%lld",&a[i].fee);
  }
  for(i=0;i<2;i++)
  {
  	printf("\n%s",a[i].name);
	printf("\n%d",a[i].age);
	printf("\n%lld\n",a[i].fee);
  }
  return 0;
  }
  
