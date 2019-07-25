#include<stdio.h>
int main()
{
    int n,h;
    double amount,salary;
    scanf("%d",&n);
    scanf("%d",&h);
    scanf("%lf",&amount);
    salary=h*amount;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %0.2f\n",salary);

    return 0;
}
