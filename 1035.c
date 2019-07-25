#include<stdio.h>
int main()
{
    int A,B,C,D,sum1,sum2;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    sum1=A+B;
    sum2=C+D;
    if(B>C && D>A){
        if(sum2>sum1)
            printf("Valores aceitos\n");
        else
            printf("Valores nao aceitos\n");
    }
    else
        printf("Valores nao aceitos\n");
    return 0;
}
