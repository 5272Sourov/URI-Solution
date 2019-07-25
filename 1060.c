#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    int count=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);

    if(a>0)count=count+1;
    if(b>0)count=count+1;
    if(c>0)count=count+1;
    if(d>0)count=count+1;
    if(e>0)count=count+1;
    if(f>0)count=count+1;
    printf("%d valores positivos\n",count);
    return 0;
}
