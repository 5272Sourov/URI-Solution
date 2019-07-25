#include<stdio.h>
int main()
{
    double Money,amount;
    int x100,x50,x20,x10,x5,x2,c1,c50, c25, c10, c05,c01;
    scanf("%lf",&Money);
    amount=Money;
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

    amount=amount*100;

    c1=(int)amount/100;
    amount=amount-(c1*100);

    c50=(int)amount/50;
    amount=amount-(c50*50);
    c25=(int)amount/25;
    amount=amount-(c25*25);
    c10=(int)amount/10;
    amount=amount-(c10*10);
    c05=(int)amount/5;
    amount=amount-(c05*5);
    c01=(int)amount/1;

     printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",x100);
    printf("%d nota(s) de R$ 50.00\n",x50);
    printf("%d nota(s) de R$ 20.00\n",x20);
    printf("%d nota(s) de R$ 10.00\n",x10);
    printf("%d nota(s) de R$ 5.00\n",x5);
    printf("%d nota(s) de R$ 2.00\n",x2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",c1);
     printf("%d moeda(s) de R$ 0.50\n",c50);
      printf("%d moeda(s) de R$ 0.25\n",c25);
       printf("%d moeda(s) de R$ 0.10\n",c10);
        printf("%d moeda(s) de R$ 0.05\n",c05);
         printf("%d moeda(s) de R$ 0.01\n",c01);
    return 0;
}
