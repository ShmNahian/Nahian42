#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    scanf("%d %c %d",&a,&ch,&b);
    switch(ch)
    {
        case '>':
        if(a>b)
        {
            printf("Right");
        }else
        {
            printf("Wrong");
        }
        break;
        case '<':
            if(a<b)
            {
                printf("Right");
            }else{
            printf("Wrong");
            }
            break;
        case '=':
            if(a==b)
            {
               printf("Right");
            }else{
            printf("Wrong");
            }
            break;
    }
    return 0;
}
