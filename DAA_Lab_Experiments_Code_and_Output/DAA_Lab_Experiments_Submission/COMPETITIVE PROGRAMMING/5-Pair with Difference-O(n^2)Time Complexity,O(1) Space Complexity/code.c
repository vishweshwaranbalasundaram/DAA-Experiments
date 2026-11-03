#include <stdio.h>
int main() {
   int n, k;
   if (scanf("%d", &n) != 1) return 0;
   int a[n];
   for (int i = 0; i < n; i++) {
       scanf("%d", &a[i]);
   }
   scanf("%d", &k);
   int found = 0;
   for (int i = 0; i < n; i++) {
       for (int j = i + 1; j < n; j++) {
           if (a[j] - a[i] == k || a[i] - a[j] == k) {
               found = 1;
               break;
           }
       }
       if (found) break;
   }
   printf("%d\n", found);
   return 0;
}
