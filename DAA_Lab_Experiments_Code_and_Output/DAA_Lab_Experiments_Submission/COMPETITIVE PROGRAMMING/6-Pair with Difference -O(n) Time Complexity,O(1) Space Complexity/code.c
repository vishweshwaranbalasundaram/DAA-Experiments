#include <stdio.h>
int main() {
   int n;
   if (scanf("%d", &n) != 1) return 0;
   int a[n];
   for (int i = 0; i < n; i++) {
       scanf("%d", &a[i]);
   }
   int k;
   scanf("%d", &k);
   int i = 0, j = 1, found = 0;
   while (i < n && j < n) {
       if (i != j && a[j] - a[i] == k) {
           found = 1;
           break;
       } else if (a[j] - a[i] < k) {
           j++;
       } else {
           i++;
       }
   }
   printf("%d\n", found);
   return 0;
}
