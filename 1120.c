#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
  char D, Number[200];
  int n, i, j;
  scanf("%c", &D);
  scanf("%s", Number);
  while (D != '0')
  {
    n = strlen(Number);
    for (i = 0; i < n; i++)
	{
      if (Number[i] == D)
	  {
        for (j = i; j < n; j++)
          Number[j] = Number[j+1];
        Number[n-1] = 0;
        n--;
        i--;
      }
    }

    for (i = 0; i < n-1; i++)
	{
      if (Number[i] == '0')
	  {
        for (j = i; j < n; j++)
          Number[j] = Number[j+1];
        Number[n-1] = 0;
        n--;
        i--;
      }
	  else
        break;
    }

    if (n == 0)
	{
      Number[0] = '0';
      Number[1] = '\0';
    }
    printf("%s\n", Number);

    scanf(" %c", &D);
    scanf("%s", Number);
  }
  return 0;
}
