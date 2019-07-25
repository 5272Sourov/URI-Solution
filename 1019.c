#include<stdio.h>
int main()
{
    int time,hours,minutes,seconds;
    scanf("%d",&time);
    hours=(int)time/3600;
    time=time-(hours*3600);
    minutes=(int)time/60;
    time=time-(minutes*60);
    seconds=time;
    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}
