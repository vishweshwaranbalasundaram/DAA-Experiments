#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
   return (*(int *)a - *(int *)b);
}
int main() {
   int n, m;
   scanf("%d", &n);
   int g[n];
   for (int i = 0; i < n; i++)
       scanf("%d", &g[i]);
   scanf("%d", &m);
   int s[m];
   for (int i = 0; i < m; i++)
       scanf("%d", &s[i]);
   qsort(g, n, sizeof(int), compare);
   qsort(s, m, sizeof(int), compare);
   int i = 0, j = 0, count = 0;
   while (i < n && j < m) {
       if (s[j] >= g[i]) {
           count++;
i

           i++;
           j++;
       } else {
           j++;
       }
   }
   printf("%d", count);
   return 0;
}

/* Refer to the matching ORIGINAL_PDFS file for any source lines clipped by PDF text extraction. */

