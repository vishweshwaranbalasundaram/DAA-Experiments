#include <stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   long long num, candidate = 0;
   int count = 0;
   for (int i = 0; i < n; i++)
   {
       scanf("%lld", &num);
       if (count == 0)
       {
           candidate = num;
           count = 1;
       }
       else if (num == candidate)
       {
           count++;
       }
       else
       {
           count--;
}

       }
   }
   printf("%lld", candidate);
   return 0;
}

/* Refer to the matching ORIGINAL_PDFS file for any source lines clipped by PDF text extraction. */

