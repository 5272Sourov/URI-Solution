#include<stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&x,&y);
        if(x<y){
                if((y-x)==2 && x%2!=0 && y%2!=0){
                    printf("0\n");
                }
                else {
                int sum=0;
            for(i=x+1;i<y;++i){
                if(i%2!=0){
                    sum=sum+i;
                }

            }
        printf("%d\n",sum);
        }
        }
        else if(x>y) {
                if((x-y)==2 && x%2!=0 && y%2!=0){
                    printf("0\n");
                }
        else {
                int sum=0;
            for(i=y+1;i<x;++i){

                if(i%2!=0){
                    sum=sum+i;
                }
            }
         printf("%d\n",sum);
            }
            }
        else if(x==y){
            int sum=0;
            printf("%d\n",sum);
        }

    }
    return 0;
}
