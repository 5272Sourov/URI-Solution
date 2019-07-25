#include<stdio.h>
int main()
{
    int time,speed;
    double fuel;
    scanf("%d",&time);
    scanf("%d",&speed);
    fuel=(time*speed)/12;
    printf("%0.3f\n",fuel);

    return 0;
}

