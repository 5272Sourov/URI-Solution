#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,sum=0,avg;
    int count=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);

    if(a>0){
        sum=sum+a;
            count=count+1;
    }
    if(b>0){
            sum=sum+b;
            count=count+1;
            }
    if(c>0){
            sum=sum+c;
            count=count+1;
    }
    if(d>0){
            sum=sum+d;
            count=count+1;
    }
    if(e>0){
            sum=sum+e;
            count=count+1;
    }
    if(f>0){
            sum=sum+f;
            count=count+1;
    }
    avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%0.1f\n",avg);
    return 0;
}

