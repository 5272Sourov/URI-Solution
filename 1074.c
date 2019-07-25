#include<stdio.h>
int main()
{
    int n,i,x,number[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        number[i]=x;
    }
    for(i=0;i<n;i++){
    if(number[i]>0){
            if(number[i]%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else if(number[i]<0){
            if(number[i]%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else if(number[i]==0)
            printf("NULL\n");
    }

    return 0;
}
