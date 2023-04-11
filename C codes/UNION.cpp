//Union: collection of variables of different data type at the same memory location to save on space
//We can define a union with many members, but at a given point of time only one member can contain a value. 
//That is we can initialize one variable at a time and after getting done with its value we can move to other
#include<stdio.h>
#include<string.h>
union Data
{
    int i;
    float f;
    char str[30];
};
int main()
{
    union Data data;
    data.i=10; //dot operator to access the union members
	printf("data.i:%d\n",data.i);
    data.f=220.5;
    printf("data.f:%f\n",data.f);
    
    strcpy(data.str,"C Programming");
    printf("data.str:%s\n",data.str);
    printf("Memopry size occupied by union ie data is: %d\n",sizeof(data)); //The size of a union is sufficient to contain the largest of its data members
    return 0;
}
