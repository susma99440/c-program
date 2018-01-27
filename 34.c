#include <stdio.h>

int main()
{
	char ch[50]="Hello world.Goodbye";
	int i,c=0,line;
	for(i=0;ch[i]!=0;i++)
	{
		if(ch[i]=='.')
		c=++c;
		else
		c=c;
	}
	line=c+1;
	printf("No.of lines %d",line);
	return 0;
}
