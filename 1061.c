#include<stdio.h>
int main()
{
    int start_day,end_day,start_hour,start_minute,start_second,end_hour,end_minute,end_second,t;
    int day,hour,minute,second,duration[5];
    char a[4], b[2],c[2],d[2],e[2],f[4];
    scanf("%s %d",&a,&start_day);
    scanf("%d %s %d %s %d",&start_hour,&b,&start_minute,&c,&start_second);
    scanf("%s %d",&f,&end_day);
    scanf("%d %s %d %s %d",&end_hour,&d,&end_minute,&e,&end_second);

    second=60-start_second+end_second;
    minute=(60-start_minute+end_minute-1)*60;
    hour=(24-start_hour+end_hour-1)*3600;
    day=(end_day-start_day-1)*86400;
    t=day+hour+minute+second;

    duration[0]=t/86400;
    printf("%d dia(s)\n",duration[0]);

    duration[0]=t%86400;
    duration[1]=duration[0]/3600;
    printf("%d hora(s)\n",duration[1]);

    duration[1]=duration[0]%3600;
    duration[2]=duration[1]/60;
    printf("%d minuto(s)\n",duration[2]);

    duration[2]=duration[1]%60;
    printf("%d segundo(s)\n",duration[2]);


    return 0;
}
