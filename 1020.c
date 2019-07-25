#include<stdio.h>
int main()
{
    int age,years,months,days;
    scanf("%d",&age);
    years=(int)age/365;
    age=age-(years*365);
    months=(int)age/30;
    age=age-(months*30);
    days=age;
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
    return 0;
}

