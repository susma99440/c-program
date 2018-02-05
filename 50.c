#include<stdio.h>
int main()
{
	int a,n;
	scanf("%d",&n);
	a=(n&(n-1));
	if(a==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
	
}
