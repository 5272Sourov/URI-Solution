#include <stdio.h>
#include <string.h>
int main()

{
    char str[1000],str1[1000];
    int i,j,k,l,m,n,o,p;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str);
         l = strlen(str);
         for(j=0;j<l;j++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a'&& str[i]<='z'))
            str[i] = str[i] + 3;
    }
    p=l-1;
    for(j=0;j<l;j++)
    {
        str1[j] = str[p];
        p--;
    }
    str1[j] = '\0';
    for(j=l/2;j<l;j++)
    {
        str1[j] =  str1[j] - 1;

    }

    printf("%s\n",str1);
    }
    return 0;
    }


