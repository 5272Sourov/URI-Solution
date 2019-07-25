#include<stdio.h>
int main()
{
    int a,b,duration;
    scanf("%d %d",&a,&b);
    if(a>=b){
        b=b+24;
        duration=b-a;
    }
    else  {
        duration=b-a;
    }
    printf("O JOGO DUROU %d HORA(S)\n",duration);
    return 0;
}
