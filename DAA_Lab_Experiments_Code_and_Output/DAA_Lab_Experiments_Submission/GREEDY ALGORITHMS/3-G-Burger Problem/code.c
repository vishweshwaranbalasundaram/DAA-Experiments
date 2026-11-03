#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cmp(const void *a, const void *b) {
   return (*(int*)b - *(int*)a);
}
int main(){
   int n,cnt=0;
   scanf("%d",&n);
   int d[n];
   for(int i=0;i<n;i++){
       scanf("%d",&d[i]);
   }
   qsort(d,n,sizeof(int),cmp);
   for(int i=0;i<n;i++){
       cnt += pow(n,i) * d[i];
   }
   printf("%d",cnt);
return 0;

   return 0;
}
Test

/* Refer to the matching ORIGINAL_PDFS file for any source lines clipped by PDF text extraction. */

