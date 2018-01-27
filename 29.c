#include <stdio.h>

int main(void) {
	int p,a,b;
	scanf("%d",&p);
	a=p/60;
	b=p%60;
	printf("%d %d",a,b);
	return 0;
}
