#include<stdio.h>
void main()
{
int a[5];
int n,i,sum=0,b;
scanf("%d",&n);

printf("enter the elements are:");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
b=sum/n;
}
printf("%d",b);
}
