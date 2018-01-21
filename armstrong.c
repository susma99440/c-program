#include<stdio.h>
void main()
{
int a,sum=0,rem=0,cube;
printf("enter a number");
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
cube=rem*rem*rem;
sum=sum+cube;
 a=a/10;
}
if(sum==a)
printf("its a armstrong %d");
else
printf("its not a armstrong %d");
}
