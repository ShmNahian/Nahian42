 #include<stdio.h>
 int main()
 {
     int a,b,c,n,i,count=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         scanf("%d %d %d",&a,&b,&c);
         if((a+b) == c){
            printf("+\n");
         }else{
         printf("-\n");
         }
         count++;
     }
     return 0;
 }
