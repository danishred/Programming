#include<stdio.h>
#include<string.h>
int main()
{
 struct gospel
 {
 	 int num;
 	 char mess1[50];
 	 char mess2[50];
 }m;
 m.num=1;
 strcpy(m.mess1,"If all that you have is hammer\n"); //for some reason whole sentence is printed using %s
 strcpy(m.mess2,"Everything looks like a nail");
 printf("%d \n %s %s\n",m.num,m.mess1,m.mess2);
 return 0; 
 }
