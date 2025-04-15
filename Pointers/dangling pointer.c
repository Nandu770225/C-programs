#include<stdio.h>
int main()
{
   int *ptr;
   {
      int a = 10;
      ptr = &a;
   }
   // 'a' is now out of scope
   // ptr is a dangling pointer now
   printf("%d", ptr);

   return 0;
}