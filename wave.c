#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    double x;

    x =a / (double)b;

    printf("floor %d / %d = %.0lf\n",a,b,floor(x));
    printf("ceil %d / %d = %.0lf\n",a,b,ceil(x));
    printf("round %d / %d = %.0lf\n",a,b,round(x));
    return 0;
}
