#include<stdio.h>
#include<string.h>
int  main()
{
 char str[50];
 int i,a,c=0;
  scanf("%s",&str[i]);
  a=strlen(str);
  for(i=0;i<a;i++)
  {
    if( (str[i]=='0')||(str[i]=='1'))
    {
      c++;
    }
  }
  if(c==a)
  {
    printf("yes");
    
  }
  else
  {
    printf("no");
  }
  return 0;
}
