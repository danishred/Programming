//Union implementation where only one variable is used at a time
#include<stdio.h>
#include<string.h>
union Data
{
    long int i;
    float f;
    char str[50];
};
int main()
{
    union Data data;
    data.i=15; //dot operator to access the union members
    printf("data.i: %ld\n",data.i);
    data.f=220.5;
    printf("data.f:%f\n",data.f);

    strcpy(data.str,"C Programming");
    printf("data.str:%s\n",data.str);
    return 0;
}
