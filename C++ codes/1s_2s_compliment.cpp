/*Binary Number is expressed in base 2. It uses only two digits ‘0’ and ‘1’. Each digit in a binary number is a bit.

Sample binary Number − 0100010111

1’s Complement
One's complement of a binary number is obtained by reversing the digits of the binary number i.e. transforming 1 with 0 and 0 with 1.

Example
1’s Complement of 101100 = 010011
2’s Complement
Two’s complement of a binary number is obtained by adding one to the one’s complement of a binary number i.e. 1’s complement + 1.

Example
2’s complement of 101101 is 010011.*/

#include <iostream>
#include<string.h>
using namespace std;

int main() {
   char binary[10] = "01001000";
   cout<<"binary number is \n"<<binary;

   //one's complement....
   int length = strlen(binary);
   for(int i=0;i<length;i++) 
   {
      if(binary[i] == '0') {
         binary[i]= '1';
      } else
         binary[i] = '0';
   }
   cout<<" \n\nOne's Compliment is \n"<<binary<<endl;

   // cout<<binary[length-1]; //because last one in null
   for(int i = length-1; i>=0; i--) {
      // cout<<binary[i];
      if(binary[i] == '0') {
         binary[i] = '1';
         //cout<<binary[i];
         break; //to get out of the loop without iterating further
      } else {
         binary[i] = '0';
      }
   }
   cout<<"\nTwo's complement is\n"<<binary;
   return 0;
}