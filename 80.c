#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d",&a);
   do
   {
    b=a%10;
    if(b%2!=0)
    {
        printf("%d",b);
    }
    a=a/10;
   }while(a!=0);
  
}
