#include<stdio.h>
#include<string.h>
int main()
{
  int f=0,i,j,a;
  char str[10];
  scanf("%s",&str);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    for(j=i+1;j<=a;j++)
    {
      if(str[i]==str[j])
      {
        f++;
      }
    }
  }
  if(f==0)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
