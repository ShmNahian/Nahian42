#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int s = n/1000;
 if(s%2==0){
    printf("EVEN");
  }
  else
  {
     printf("ODD");
  }
  return 0;

}
