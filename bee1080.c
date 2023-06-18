#include<stdio.h>
int main()
{
  int i,n,max,pos;
  max=-1;
  pos=-1;
  for(i=1;i<=100;i++)
    {
      scanf("%d",&n);
      if(n>max)
      {
        max=n;
        pos=i;
      }

    }
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
}
