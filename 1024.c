#include <stdio.h>
#include <string.h>

int main()

{
    char ch[1000],ch1[1000];
    int i,j,k,l,m,n,T;
    scanf("%d",&T);
    getchar();

    while(T--) {
    gets(ch);
    l = strlen(ch);
    for(i=0;i<l;i++)
    {
        if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a'&& ch[i]<='z'))
            ch[i] += 3;
    }
    n=0;
    for(j=l-1;j>=0;j--)
    {
        ch1[n] = ch[j];
        n++;
    }
    ch1[n] = '\0';
    k = l/2;
    for(i=k;i<l;i++)
    {
        ch1[i] -= 1;

    }

    printf("%s\n",ch1);

    }

}
