#include<stdio.h>

int main()
{

    int n,i,x,sz;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(sz=1;sz<=n;sz++)
    {
        for(x=0;x<=n-4;x++)
      {
        for(i=x; i < x+4; i++)
       {
         printf("%d ",a[i]);
       }
        printf("\n");
      }

    }
    return 0;
}
