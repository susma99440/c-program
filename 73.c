#include <stdio.h>

int main()
{
     int l,n,r;
     scanf("%d%d%d",&l,&n,&r);
     if((l<n&&l>r)||(l>n&&l<r))
     {
     	printf("yes");
     }
     else
     {
     	printf("no");
     }
	return 0;
}
