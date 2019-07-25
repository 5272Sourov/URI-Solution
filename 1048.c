#include<stdio.h>
int main()
{
    double salary,Nsal,Rrate,Mearned;
    scanf("%lf",&salary);
    if(salary>=0 && salary<=400.00){
            Rrate=0.15;
            Mearned=salary*Rrate;
        Nsal=salary+Mearned;
        printf("Novo salario: %0.2f\n",Nsal);
        printf("Reajuste ganho: %0.2f\n",Mearned);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>400.00 && salary<=800.00){
        Rrate=0.12;
            Mearned=salary*Rrate;
        Nsal=salary+Mearned;
        printf("Novo salario: %0.2f\n",Nsal);
        printf("Reajuste ganho: %0.2f\n",Mearned);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>800.00 && salary<=1200.00){
        Rrate=0.10;
            Mearned=salary*Rrate;
        Nsal=salary+Mearned;
        printf("Novo salario: %0.2f\n",Nsal);
        printf("Reajuste ganho: %0.2f\n",Mearned);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>1200.00 && salary<=2000.00){
        Rrate=0.07;
            Mearned=salary*Rrate;
        Nsal=salary+Mearned;
        printf("Novo salario: %0.2f\n",Nsal);
        printf("Reajuste ganho: %0.2f\n",Mearned);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000.00){
        Rrate=0.04;
            Mearned=salary*Rrate;
        Nsal=salary+Mearned;
        printf("Novo salario: %0.2f\n",Nsal);
        printf("Reajuste ganho: %0.2f\n",Mearned);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
