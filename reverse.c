#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<=4;i++)
    {
        printf("\nEnter The %d element :",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
