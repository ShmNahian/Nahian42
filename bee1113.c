#include<stdio.h>
int main()
{
    int i,x,y;
    while(1)
    {
      scanf("%d %d",&x, &y);

      if(x<y){
        printf("Crescente\n");
      }
      if(x>y){
           printf("Decrescente\n");
      }
      if(x==y)
      {
          break;
      }
    }
    return 0;
}
