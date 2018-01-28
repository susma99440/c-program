#include<stdio.h>
int main()
{
int x,y,s;
printf("Enter the two number");
scanf("%d%d",&x,&y);
printf("Before swaping %d %d",x,y);
s=x;
x=y;
y=s;
printf("After swaping %d %d",x,y);
return 0;
}
