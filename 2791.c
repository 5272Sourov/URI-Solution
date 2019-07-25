#include<stdio.h>
int main()
{
    int a[5],i,bean;


    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        if(a[i]==1){
            bean=i+1;
            }
    }
    printf("%d\n",bean);

    return 0;
}
