// digit
#include<stdio.h>
int main()
{
    int num,temp,r,sum = 0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r;
        temp = temp/10;
    }
    printf("%d\n",sum);
}
// Palindrome Number
#include<stdio.h>
int main()
{
    int num,temp,r,sum = 0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum *10 + r;
        temp = temp/10;
    }
    if(num==sum)
       printf("Palindrome");
    else
        printf("Not Palindrome");
}
//Armstrong Number
#include<stdio.h>
int main()
{
    int num,temp,r,sum = 0;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r *r*r;
        temp = temp/10;
    }
    if(num==sum)
       printf("Armstrong");
    else
        printf("Not Armstrong");
}
//Armstrong
#include<stdio.h>
int main()
{
    int initialnum,finalnum,temp,r,sum = 0,i;
    scanf("%d %d",&initialnum,&finalnum);
    for(i=initialnum;i<=finalnum;i++)
    {
    temp = i;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp/10;
    }
    if(sum==i){
       printf("%d",i);
    }
    sum = 0;
    }

}
// counting number of a digit in an integer
#include<stdio.h>
int main()
{
    int num,count =0;
    printf("Enter any number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        num = num/10;
        ++count;
    }

    printf("Total number of digits: %d\n",count);
}
// Strong numeber(example :145 =1!+4!+5!= 145)
#include<stdio.h>
int main()
{
    int num,temp,rem,fact,count =0,i;
    printf("Enter any number: ");
    scanf("%d",&num);
    temp = num;

    while(temp!=0)
    {
        rem = temp %10;
        fact = 1;
        for(i=1,i<=rem;i++){
            fact =fact *i;
        }
        sum = sum + fact ;
        temp = temp /10;
    }
    if (sum==num)
        printf("%d is a strong number",num);
    else
        printf("%d is not a storng number",num);

    getch();
}





