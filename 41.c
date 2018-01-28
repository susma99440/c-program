#include<stdio.h>
void main()
{
	char name[50];
	int i,x;
	printf("Enter word");
	scanf("%s",&name);
	printf("\nNumber of times to repeat");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("\n%s",name);
	}
	
}
