#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int rev = 0, remainder;
   int count = 0;
   count += 2;
   while (n != 0)
   {
       count++;
       remainder = n % 10;
       count++;
       rev = rev * 10 + remainder;
       count++;
       n /= 10;
       count++;
   }
   count++;
   printf("%d", count);
   return 0;
}
