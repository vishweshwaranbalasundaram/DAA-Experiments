#include <stdio.h>
void Factor(int num)
{
   int count = 0;
   for (int i = 1; i <= num; ++i)
   {
       count++;
       if (num % i == 0)
       {
           count++;
       }
       count++;
   }
   count++;
   printf("%d", count);
}
int main()
{
   int n;
   scanf("%d", &n);
   Factor(n);
   return 0;
}
