#include<stdio.h>
int main(void)
{
	int n,count=0;
	printf("enter the value:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count=count+1;
	}
	printf("the total value is:%d",count);
return 0;	
}
