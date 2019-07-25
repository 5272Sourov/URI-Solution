#include<stdio.h>
int Max(int A,int B){
return (A + B + abs(A - B)) / 2;
}
int main()
{
    int x,y,z,greatest;
    scanf("%d %d %d",&x,&y,&z);
    greatest=Max(x,y);
    greatest=Max(greatest,z);
    printf("%d eh o maior\n",greatest);
    return 0;
}
