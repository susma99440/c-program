#include<stdio.h>
int main()
{
	int i,n,sum=0,a[10];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("the result is%d",sum);
	return 0;
}
