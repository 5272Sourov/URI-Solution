#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<=10000;i++){
        if(i%n==0){
            i=i+2;
            printf("%d\n",i);
        }
    }
    return 0;
}
