#include <stdio.h>
int main()
{
  int i,a,fact = 1;
  printf("Enter a number\n");
  scanf("%d", &a);
  for (i = 1; i <= a; i++)
    fact=fact*i;
  printf("result=%d",fact);
  return 0;
  }
