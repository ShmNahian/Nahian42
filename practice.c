#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    j=n;

   for(i=1;i<=n;i++)
    {
       printf("%d %d\n",i,j);
        j--;
    }
    return 0;
}
