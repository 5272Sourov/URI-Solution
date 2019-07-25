#include<stdio.h>
int main()
{
    int a,x,b,y,dh,dm;
    scanf("%d %d %d %d",&a,&x,&b,&y);
    dh=b-a;
    if(dh<0){
        dh=dh+24;
    }
    dm=y-x;
    if(dm<0){
        dm=dm+60;
        dh=dh-1;
    }
    if(a==b && x==y){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
    return 0;
}

