#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	scanf("%s",a);
	int m,i,j,flag=0;
	m=strlen(a);
	for(i=0,j=m-1;i<=m/2;i++,j--)
	{
		
		if(a[i]!=a[j])
		{
			printf("NO");
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		printf("YES");
	}
	
	

	return 0;
}
