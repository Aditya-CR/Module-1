//INPUT: 95 90.99 A
//OUTPUT: 90.000000 65

#include<stdio.h>
int main() 
              // correct the code
   int i;
   float x;
   char ch;
   printf("Enter an integer value, floating point value and a character");
   scanf("%d%f %",&i,&x,&ch);   // correct the code
   i = x                         // correct the code
   x = i ;
   i = ch ;
   printf("%f %d", x, i);
   return 0;
              // correct the code
