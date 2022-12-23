#include <stdio.h>
int main()
{
   int *ptr, gk;

   gk = 112;
   printf("Address of c: %p\n", &gk);
   printf("Value of c: %d\n\n", gk);  

   ptr = &gk;
   printf("Address of pointer pc: %p\n", ptr);
   printf("Content of pointer pc: %d\n\n", *ptr); 

   gk = 501;
   printf("Address of pointer pc: %p\n", ptr);
   printf("Content of pointer pc: %d\n\n", *ptr);

   *ptr = 4006;
   printf("Address of c: %p\n", &gk);
   printf("Value of c: %d\n\n", gk); 

   return 0;
}

/*output:
Address of gk: 0x7ffef8c879cc
Value of gk: 112
Address of pointer ptr: 0x7ffef8c87ad0
Value of pointer ptr: 1
Address of pointer ptr: 0x7ffef8c879cc
Value of pointer ptr: 501
Address of gk: 0x7ffef8c879cc
Value of gk: 4006 */
