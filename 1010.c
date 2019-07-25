#include<stdio.h>
int main()
{
    int a,b,c,d;
    double p,q,sum1,sum2,sum;
    scanf("%d %d %lf",&a,&b,&p);
    scanf("%d %d %lf",&c,&d,&q);
    sum1=b*p;
    sum2=d*q;
    sum=sum1+sum2;
    printf("VALOR A PAGAR: R$ %0.2f\n",sum);

    return 0;
}
