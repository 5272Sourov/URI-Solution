#include<stdio.h>
int main()
{
    int a,b,c,d,e,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
     scanf("%d",&c);
    scanf("%d",&d);
     scanf("%d",&e);
     if(a%2==0)count=count+1;
     if(b%2==0)count=count+1;
     if(c%2==0)count=count+1;
     if(d%2==0)count=count+1;
     if(e%2==0)count=count+1;
     printf("%d valores pares\n",count);


    return 0;
}
