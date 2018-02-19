#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	i=i^j;
	j=i^j;
	i=i^j;
	printf("the result is:%d %d",i,j);
	return 0;
}
