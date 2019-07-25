#include<stdio.h>
int main()
{
    int t,n,m,i,j,count=0;
    long long int p;
    scanf("%d",&t);
    while(t--){
            count=0;
        scanf("%d %d",&n,&m);
        p=n;
        for(i=1;i<m;i++){
            p =p*n;
        }
        while(p!=0){
            p=p/10;
            count++;
        }
        printf("%d\n",count);


    }
    return 0;
}
