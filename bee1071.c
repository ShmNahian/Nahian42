#include<stdio.h>
int main()
{
  int x,y,n,i,sum=0,temp;
  scanf("%d %d",&x,&y);
  if(x>y)
  {
      temp =x;
      x=y;
      y=temp;

  }
  if(x%2==0)
    {
        x=x+1;
        n=x;
    }else
        n=x+2;
        for(i=n;i<y;i+=2){
            sum+=i;
        }
    printf("%d\n",sum);
    return 0;
}
