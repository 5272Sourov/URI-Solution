
#include<stdio.h>
int main()
{
    int i,x,y,count=6;
    scanf("%d",&x);
    if(x%2==0){
            x=x+1;
        for(i=0;i<count;i++){
            printf("%d\n",x);
            x+=2;
        }
    }
    else {
        for(i=0;i<count;i++){
            printf("%d\n",x);
            x+=2;

        }
    }
    return 0;
}
