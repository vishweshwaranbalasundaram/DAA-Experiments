#include <stdio.h>
int main() {
   int n;
   if (scanf("%d", &n) != 1) return 0;
   int arr[n];
   for (int i = 0; i < n; i++) {
       scanf("%d", &arr[i]);
   }
   int duplicate = -1;
   for (int i = 0; i < n; i++) {
       for (int j = i + 1; j < n; j++) {
           if (arr[i] == arr[j]) {
               duplicate = arr[i];
               break;
           }
       }
       if (duplicate != -1) break;
   }
   if (duplicate != -1) {
       printf("%d\n", duplicate);
   }
   return 0;
}
