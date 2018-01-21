#include<stdio.h>
void main()
{
int a,b,n,i,totalnum;
int sum=0;
printf("enter the starting number:");
scanf("%d",&a);
printf("\nenter the difference of each number:");
scanf("%d",&b);
printf("\nenter the total number of terms:");
scanf("%d",&n);
sum=n*(2*(a+(n-1)*b))/2;
totalnum=a+(n-1)*d;
printf("\n the A.P is:");
for(i=a;i<=totalnum;i=i+b)
{
if(i!=totalnum)
{
printf("%d +",i);}
else
{
printf("the result is %d=%d",i,sum);
}
}

}
