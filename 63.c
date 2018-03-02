#include<stdio.h>
#include<string.h>
void main()
{
	int count=1,a;
	char str[50];
  gets(str);
	a=strlen(str);
	for(int i=0;i<=a;i++)
	{
		if(str[i]==' ')
		{
		    count++;
		}
	}
	printf("%d\n",count);
}
