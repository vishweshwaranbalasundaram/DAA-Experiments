#include <stdio.h>
int main() {
   int n;
   scanf("%d", &n);
   long long dp[n][n];
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           long long x;
           scanf("%lld", &x);
           if (i == 0 && j == 0) {
               dp[i][j] = x;
           }
           else if (i == 0) {
               dp[i][j] = dp[i][j - 1] + x;
           }
           else if (j == 0) {
               dp[i][j] = dp[i - 1][j] + x;
           }
           else {
               dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]
                           ? dp[i - 1][j]
                           : dp[i][j - 1]) + x;
           }
       }
   }
   printf("%lld", dp[n - 1][n - 1]);
   return 0;
}
