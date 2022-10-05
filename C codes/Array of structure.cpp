#include<stdio.h>
//First I just created a simple struct program for one product then I converted it into this Array of structure
struct product
{
	char name[20];
	int n; //n is number of product types like ball, bat, bag etcetera
	int price;
	int quantity;
}x[10];
//---------------
int main()
{
int i;
int n;
printf("\nEnter number of product types:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{	
printf("\n\tEnter product %ds details:-\n",i+1);
printf("\nEnter product's name\n");
scanf("%s",&x[i].name);
printf("\nEnter product's price\n");
scanf("%d",&x[i].price);
printf("\nEnter product's quantity\n");
scanf("%d",&x[i].quantity);
x[i].price=x[i].quantity*x[i].price;
}
for(i=0;i<n;i++)
{
printf("\n\tProduct's %ds output are:",i+1);	
printf("\nProduct's name is: %s",x[i].name);
printf("\nProduct's quantity is: %d",x[i].quantity);
printf("\nProduct's price is: %d",x[i].price);
printf("\nProduct's total price is: %d\n",x[i].price);
}
return 0;
}



