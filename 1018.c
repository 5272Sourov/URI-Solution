#include<stdio.h>
int main()
{
    int Money,x100,x50,x20,x10,x5,x2,x1;
    scanf("%d",&Money);
    int amount=Money;
    x100=(int)amount/100;
    amount=amount-(x100*100);
    x50=(int)amount/50;
    amount=amount-(x50*50);
    x20=(int)amount/20;
    amount=amount-(x20*20);
    x10=(int)amount/10;
    amount=amount-(x10*10);
    x5=(int)amount/5;
    amount=amount-(x5*5);
    x2=(int)amount/2;
    amount=amount-(x2*2);
    x1=(int)amount/1;
    printf("%d\n",Money);
    printf("%d nota(s) de R$ 100,00\n",x100);
    printf("%d nota(s) de R$ 50,00\n",x50);
    printf("%d nota(s) de R$ 20,00\n",x20);
    printf("%d nota(s) de R$ 10,00\n",x10);
    printf("%d nota(s) de R$ 5,00\n",x5);
    printf("%d nota(s) de R$ 2,00\n",x2);
    printf("%d nota(s) de R$ 1,00\n",x1);
    return 0;
}
