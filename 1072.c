#include<stdio.h>
int main()
{
    int n,i,x,cIn=0,cOut=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x>=10 && x<=20)
            cIn=cIn+1;
        else
            cOut=cOut+1;
    }
    printf("%d in\n",cIn);
    printf("%d out\n",cOut);
    return 0;
}
