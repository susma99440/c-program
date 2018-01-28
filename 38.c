#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
printf("\n%d\t%d",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("\n%d\t%d",x,y);
return 0;
}
