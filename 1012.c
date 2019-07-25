#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    TRIANGULO=0.5*A*C;
    CIRCULO=pi*C*C;
    TRAPEZIO=0.5*(A+B)*C;
    QUADRADO=B*B;
    RETANGULO=A*B;
    printf("TRIANGULO: %0.3f\n",TRIANGULO);
    printf("CIRCULO: %0.3f\n",CIRCULO);
    printf("TRAPEZIO: %0.3f\n",TRAPEZIO);
    printf("QUADRADO: %0.3f\n",QUADRADO);
    printf("RETANGULO: %0.3f\n",RETANGULO);
    return 0;
}
