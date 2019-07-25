#include<stdio.h>
int main()
{
    int x,y,x1,y1;
    scanf("%d %d",&x,&y);
    x1=x%y;
    y1=y%x;
    if(x1==0 || y1==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    return 0;
}
