#include <stdio.h>

int main()
{
  char unit;
  float cels, fahr;
  printf("If orginal unit is Fahrenheit enter f\nif Celsius enter c\n");
  scanf("%c",&unit);
 
 if(unit=='c')
 {
  printf("\nEnter the Celsius temperature: ");
  scanf("%f", &cels);
  
  fahr= (1.8)*cels + 32;
  printf("\n%f deg celsius is %f deg fahrenheit", cels, fahr);
}  
  else// if(unit=='f')
{
  printf("\nEnter the Fahrenheit temperature: ");
  scanf("%f", &fahr);
  
  cels= (fahr - 32)/1.8;
  printf("\n%f deg fahrenheit is %f deg celcius", fahr, cels);
  return 0;
  
}
}
