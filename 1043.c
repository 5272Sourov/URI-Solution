#include<stdio.h>
int  main()
{
    double a,b,c,area,perimeter;
    scanf("%lf %lf %lf",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        perimeter=(a+b+c);
        printf("Perimetro = %0.1f\n",perimeter);
    }
    else {
        area=((a+b)/2)*c;
        printf("Area = %0.1f\n",area);
    }
    return 0;
}
