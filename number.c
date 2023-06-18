#include<stdio.h>
int main()
{
    int i,n,x,sum=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        scanf("%d",&x);
        sum+=x;
        i++;
    }

    printf("%d",sum);


        return 0;
}
