#include<stdio.h>
int main()
{
    int i,n[101],position,highest=0;

    for(i=0;i<100;i++){
            scanf("%d",&n[i]);
            }

            for(i=0;i<100;i++){

                if(n[i]>highest){
                    highest=n[i];
                    position=i+1;
                }
            }

    printf("%d\n",highest);
    printf("%d\n",position);
    return 0;
}
