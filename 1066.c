#include<stdio.h>
int main()
{
    int a,b,c,d,e,cEven=0,cOdd=0,cNegative=0,cPositive=0;
    scanf("%d",&a);
    scanf("%d",&b);
     scanf("%d",&c);
    scanf("%d",&d);
     scanf("%d",&e);
     if(a>0){
        cPositive+=1;
        if(a%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(a<0){
        cNegative+=1;
        if(a%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(a==0)cEven+=1;
if(b>0){
        cPositive+=1;
        if(b%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(b<0){
        cNegative+=1;
        if(b%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(b==0)cEven+=1;
     if(c>0){
        cPositive+=1;
        if(c%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(c<0){
        cNegative+=1;
        if(c%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(c==0)cEven+=1;
     if(d>0){
        cPositive+=1;
        if(d%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(d<0){
        cNegative+=1;
        if(d%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(d==0)cEven+=1;
     if(e>0){
        cPositive+=1;
        if(e%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(e<0) {
        cNegative+=1;
        if(e%2==0)
            cEven+=1;
            else
                cOdd+=1;
     }
     else if(e==0)cEven+=1;
     printf("%d valor(es) par(es)\n",cEven);
     printf("%d valor(es) impar(es)\n",cOdd);
     printf("%d valor(es) positivo(s)\n",cPositive);
     printf("%d valor(es) negativo(s)\n",cNegative);

    return 0;
}

