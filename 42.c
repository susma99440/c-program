#include <stdio.h>
int main(void) {
	char x[50];
	char y[50];
	scanf("%s",x);
	scanf("%s",y);
	if(x>y)
	{
		printf("%s",x);
	}
	else
	{
		printf("%s",y);
	}
	return 0;
}
