#include <stdio.h>
int main()
{
   int n, x;
   scanf("%d", &n);
   int arr[n];
   for (int i = 0; i < n; i++)
       scanf("%d", &arr[i]);
   scanf("%d", &x);
   int low = 0, high = n - 1;
   int floor = -1;
   while (low <= high)
   {
       int mid = low + (high - low) / 2;
       if (arr[mid] == x)
       {
           floor = arr[mid];
           break;
       }
       else if (arr[mid] < x)
       {
           floor = arr[mid];
           low = mid + 1;
       }
       else
       {
           high = mid - 1;
       }
   }
   printf("%d", floor);
   return 0;
}
