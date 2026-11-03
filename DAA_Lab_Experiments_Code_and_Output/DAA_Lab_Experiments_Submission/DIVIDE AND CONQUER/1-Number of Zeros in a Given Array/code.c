#include <stdio.h>
int countZero(int a[], int l, int r) {
   if (l > r)
       return 0;
   if (a[r] == 1)
       return 0;
   if (a[l] == 0)
       return r - l + 1;
   int mid = (l + r) / 2;
   return countZero(a, l, mid) + countZero(a, mid + 1, r);
}
int main() {
   int n;
   scanf("%d", &n);
   int a[n];
   for (int i = 0; i < n; i++)
       scanf("%d", &a[i]);
   printf("%d", countZero(a, 0, n - 1));
   return 0;
}
