#include<stdio.h>
int main()
{
    int n,sq,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sq=i*i;
            printf("%d^2 = %d\n",i,sq);
        }
    }
    return 0;
}
