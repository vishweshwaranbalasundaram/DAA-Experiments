#include <stdio.h>
void func(int n)
{
   int count = 0;
   count++;
   if (n == 1)
   {
   }
   else
   {
       for (int i = 1; i <= n; i++)
       {
           count++;
           count++;
           for (int j = 1; j <= n; j++)
           {
               count++;
               count++;
               break;
           }
count++;

           count++;
       }
       count++;
   }
   printf("%d", count);
}
int main()
{
   int n;
   scanf("%d", &n);
   func(n);
   return 0;
}
