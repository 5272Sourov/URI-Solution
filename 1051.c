#include<stdio.h>
int main()
{
    double salary,tax,a,b,c;
    scanf("%lf",&salary);
    if(salary>=0.00 && salary<=2000.00){
        tax=0;
    }
    else if(salary>2000.00 && salary<=3000.00){
        a=salary-2000.00;
        tax=a*0.08;
    }
    else if(salary>3000.00 && salary<=4500.00){
        a=salary-3000.00;
        tax=((a*0.18)+(1000.00*0.08));
    }
    else if(salary>4500.00){
        a=salary-4500.00;
        tax=((a*0.28)+(1000.00*0.08)+(1500.00*0.18));
    }
    if(tax==0)
        printf("Isento\n");
    else
        printf("R$ %0.02f\n",tax);

    return 0;
}
