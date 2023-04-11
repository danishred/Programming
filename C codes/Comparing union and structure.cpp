//Comparing Union and Structure || Union: 1) saves memory, 2) largest size variable is occupied, 3) only one variable at a time can be accessed
#include<stdio.h> 

struct test1 
{
 int x,y;
};
//---------------
union test 
{
 int x,y; 
};
//----------------
int main()
{ struct test1 t1={1,2};  //we can initialize all at once
union test t;//we cannot initialise all at once
t.x=3;
printf("After fixing x value, the coordinate of t will be %d %d \n\n",t.x,t.y); /*Both value of y and x is 3, so how we will make use of Union? 
isi tarah work karta hai shayad*/
t.y=4;
printf("After fixing y value, the coordinate of t will be %d %d \n\n",t.x,t.y);
printf("The coordinates of t1 are %d %d",t1.x,t1.y);
return 0;
}
