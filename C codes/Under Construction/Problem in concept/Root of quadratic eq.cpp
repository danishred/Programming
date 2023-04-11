#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c,d,r1,r2,imp,rp;
     printf("Enter a,b,c:\n");
     scanf("%f%f%f",&a,&b,&c);
     d=b*b-4.0*a*c;
     if (d==0)
     {
     printf("roots are real and equal");
     r1=-b/2*a;
     r2=r1;
     printf("\nroot1=%f",r1);
     printf("\nroot2=%f",r2);
     }
     else if(d > 0)
     {
    printf("\nroots are real and unequal");
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    printf("\nroot1= %f",r1);
    printf("\nroot2=%f",r2);
      }
      else if(d<0)
      {
      printf("\nroots are imaginary");
      imp=sqrt(d)/2*a;
      rp=-b/2*a;
      printf("\nroot1=%f",imp);
      printf("\nroot2=%f",rp);
      }
    return 0;
    }
