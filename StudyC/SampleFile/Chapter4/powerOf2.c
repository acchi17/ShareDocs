#include <stdio.h>

int main(void)
{
   int base, exponent, result, i;

   base = 2;
   exponent = 10;
   result = 1;

   for(i=0; i<exponent; i++)
   {
       result = result * base;
   }

   printf("Result: %d", result);
   return 0;
}