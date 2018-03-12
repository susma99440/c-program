#include<stdio.h>
#include<string.h>
void main()
{
  int i,b,a;
  char str[10];
  scanf("%s",str);
  a=strlen(str);
  b='*';
  str[a/2]=b;
  
  for(i=0;i<a;i++)
  {
    printf("%c",str[i]);
  }
}
