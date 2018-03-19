#include<stdio.h>
#include<string.h>
int main()
{
  int i,a;
   char str[20];
   scanf("%s",&str);
   a=strlen(str);
   for(i=0;i<=a;i++)
   {
     if(i%2==0)
     {
       printf("%c",str[i]);
     }
   }
   printf("\t");
   for(i=0;i<a;i++)
   {
     if(i%2!=0)
     {
     printf("%c",str[i]);
   }
   }
   return 0;
}
