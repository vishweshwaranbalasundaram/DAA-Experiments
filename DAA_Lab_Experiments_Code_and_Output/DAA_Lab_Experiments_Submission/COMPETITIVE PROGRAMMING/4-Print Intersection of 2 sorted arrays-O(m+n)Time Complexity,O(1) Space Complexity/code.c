#include <stdio.h>
int main() {
   int t;
   if (scanf("%d", &t) != 1) return 0;
   while (t--) {
       int n1, n2;
       scanf("%d", &n1);
       int a[n1];
       for (int i = 0; i < n1; i++) {
           scanf("%d", &a[i]);
       }
scanf("%d", &n2);

       scanf("%d", &n2);
       int b[n2];
       for (int i = 0; i < n2; i++) {
           scanf("%d", &b[i]);
       }
       int i = 0, j = 0, first = 1;
       while (i < n1 && j < n2) {
           if (a[i] < b[j]) {
               i++;
           } else if (b[j] < a[i]) {
               j++;
           } else {
               if (!first) printf(" ");
               printf("%d", a[i]);
               first = 0;
               i++;
               j++;
           }
       }
       printf("\n");
   }
   return 0;
}

/* Refer to the matching ORIGINAL_PDFS file for any source lines clipped by PDF text extraction. */

