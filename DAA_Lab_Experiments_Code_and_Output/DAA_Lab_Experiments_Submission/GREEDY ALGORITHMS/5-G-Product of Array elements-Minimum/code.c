#include <stdio.h>
#include <stdlib.h>
int asc(const void *a, const void *b)
{
   int x = *(const int *)a;
   int y = *(const int *)b;
   if (x > y) return 1;
   if (x < y) return -1;
   return 0;
}
int desc(const void *a, const void *b)
{
   int x = *(const int *)a;
   int y = *(const int *)b;
   if (x > y) return -1;
   if (x < y) return 1;
   return 0;
}
int main()
{
   int n;
   scanf("%d", &n);
   int a[n], b[n];
   for (int i = 0; i < n; i++)
       scanf("%d", &a[i]);
   for (int i = 0; i < n; i++)
       scanf("%d", &b[i]);
   qsort(a, n, sizeof(int), asc);
   qsort(b, n, sizeof(int), desc);
   long long sum = 0;
   for (int i = 0; i < n; i++)
       sum += (long long)a[i] * b[i];
   printf("%lld", sum);
   return 0;
}
