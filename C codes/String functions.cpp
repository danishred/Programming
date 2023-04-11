//String handling functions
#include<stdio.h>
#include<string.h> 

int main()
{

char str1[10]="Hello"; //"" for strings and '' for character constants
char str2[10]="macet";
char str3[10]="Mr."; 
char str4[11]="Hellomacet";
int len;

strcpy(str3,str1); //copy str1 into str3
printf("\nstring copy strcpy(str3,str1): %s",str3);
strcat(str1,str2); //concatenate str1 and str 2 (2 into 1 as 2 remains the same)
printf("\nstring concatenate strcat(str1,str2): %s\n",str1);
//total length of str1 after concatenation
len=strlen(str1);
printf("strlen(str1): %d\n",len);
printf("strupr(str2): %s\n",strupr(str2));
if (strcmp(str1,str4) ==0) //choose str2 for unequal and str4 for equal, strcmp compares two strings
  printf("\n\nHello MACET are equal strings\n",str1,str2);
  else
  printf("\n\nHello MACET are different strings\n",str1,str2);
  
}
