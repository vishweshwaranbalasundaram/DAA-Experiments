#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
   int x = *(const int *)a;
   int y = *(const int *)b;
   if (x > y) return 1;
   if (x < y) return -1;
   return 0;
}
int main()
{
   int n;
   scanf("%d", &n);
   long long arr[n];
   for (int i = 0; i < n; i++)
   {
       scanf("%lld", &arr[i]);
   }
   // Sort in ascending order
   for (int i = 0; i < n - 1; i++)
   {
       for (int j = i + 1; j < n; j++)
       {
           if (arr[i] > arr[j])
           {
               long long temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
   long long sum = 0;
   for (int i = 0; i < n; i++)
   {
       sum += arr[i] * i;

   }
   printf("%lld", sum);
   return 0;
}

/* Refer to the matching ORIGINAL_PDFS file for any source lines clipped by PDF text extraction. */

