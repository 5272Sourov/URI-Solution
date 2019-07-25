#include<stdio.h>
int main()
{
    int n,i;
    double x,y,z,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf",&x,&y,&z);
        avg=(x*2+y*3+z*5)/10;
        printf("%0.1f\n",avg);
    }
    return 0;
}
