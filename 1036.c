#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,R1,R2;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    double D=(b*b-4*a*c);
    if(a!=0 && D>0){
        R1=(-b+sqrt(D))/(2*a);
        R2=(-b-sqrt(D))/(2*a);
        printf("R1 = %0.5f\n",R1);
        printf("R2 = %0.5f\n",R2);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
