#include <stdio.h>

int main()
{
	int f,l,a;
	scanf("%d",&f);
	scanf("%d",&l);
	for(a=f;a<=l;a++)
	{
		if(a%2==0)
		printf("%d\t",a);
	}
	return 0;
}
