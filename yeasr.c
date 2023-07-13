#include<stdio.h>
int main()
{
    int  n;
    int a,b,c;
    scanf("%d",&n);
    printf("%d years\n",n/365);
     a = n%365;
    printf("%d months\n",a/30);
    b=a%30;
    printf("%d days\n",b);
    return 0;

}
