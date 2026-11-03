#include <stdio.h>
int main() {
   int V, count = 0;
   int notes[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
   scanf("%d", &V);
   for (int i = 0; i < 9; i++) {
       count += V / notes[i];
       V = V % notes[i];
   }
   printf("%d", count);
   return 0;
}
