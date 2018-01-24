#include <stdio.h>
#include<conio.h>

int main(void)
{

int a,b,i,j,c=0;
clrscr();
printf("\nenter the value fr the sequence u need:");
scanf("%d",&a);
printf("\nenter the num u have to add in the sequence:");
scanf("%d",&b);
clrscr();
for(i=0;i<=a;i++)
{
	printf("\nthe sequence:%d",i);
}
for(j=0;j<=b;j++)
{
	c=c+j;
	
}
printf("\nSum is%d",c);
	return 0;
}
