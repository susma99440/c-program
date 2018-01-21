#include<stdio.h>
#include<conio.h>
int main()
{
int a,e,result=1;
printf("enter the base value:");
scanf("%d",&a);
printf("enter the exp value:");
scanf("%d",&e);
while(e!=0)
{
result=result*a;
e--;
}
printf("the result is%d,result");
}
