#include<stdio.h>
int main()
{
    int X;
    double Y,Km_Per_litre;
    scanf("%d",&X);
    scanf("%lf",&Y);
    Km_Per_litre=X/Y;
    printf("%0.3f km/l\n",Km_Per_litre);
    return 0;
}
