#include<stdio.h>
int main()
{
    double N1, N2, N3, N4,N5,Avg;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    Avg=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %0.1f\n",Avg);
    if(Avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Avg<5.0){
        printf("Aluno reprovado.\n");
    }
    else if(Avg>=5 && Avg<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %0.1f\n",N5);
        Avg=(Avg+N5)/2;
        if(Avg>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1f\n",Avg);
        }
        else if(Avg<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1f\n",Avg);
        }
    }
    return 0;
}
