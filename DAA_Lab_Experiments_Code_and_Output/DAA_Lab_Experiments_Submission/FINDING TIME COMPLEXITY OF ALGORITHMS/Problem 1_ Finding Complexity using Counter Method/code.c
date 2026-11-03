#include <stdio.h>
void function(int n)
{
   int i = 1;
   int s = 1;
   int count = 3;
   while (s <= n)
   {
       count++;
       i++;
       count++;
       s += i;
       count++;
   }
   printf("%d", count);
}
int main()
{
   int n;
   scanf("%d", &n);
   function(n);
   return 0;
}
