#include<stdio.h>
int main()
{
    int i,x,y;
    scanf("%d",&x);
    if(x%2==0){
        for(i=1;i<x;i+=2){
            printf("%d\n",i);
        }
    }
    else {
        for(i=1;i<=x;i+=2){
            printf("%d\n",i);
        }
    }
    return 0;
}
