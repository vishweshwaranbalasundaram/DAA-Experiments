#include <stdio.h>
void quick(int a[], int l, int h)
{
   if (l >= h) return;
   int i=l, j=h, p=a[l], t;
   while(i<j)
   {
       while(a[i]<=p && i<h) i++;
       while(a[j]>p) j--;
       if(i<j)
       {
           t=a[i]; a[i]=a[j]; a[j]=t;
       }
   }
   t=a[l]; a[l]=a[j]; a[j]=t;
   quick(a,l,j-1);
   quick(a,j+1,h);
}
int main()
{
   int n,a[100],i;
   scanf("%d",&n);
   for(i=0;i<n;i++) scanf("%d",&a[i]);
   quick(a,0,n-1);
   for(i=0;i<n;i++) printf("%d ",a[i]);
}
