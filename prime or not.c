#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,flag=0;
printf("enter the values");
scanf("%d %d",&a,&b);
for(b=2;b<=a/2;++1)
{
if(a%1==0)
{
flag=1;
break;
}
}
if("flag==0")
{
printf("yes");
}
else
{
printf("no");
}
}
