#include <stdio.h>

int main(void) {
	
int a[20],i,j,s;
printf("enter the number of values");
scanf("%d",&s);
printf("enter the elements");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0+1;i<s;i++)
{
if(a[0]>a[i])
a[0]=a[i];
}

printf("smallest element of an arrayis %d",a[0]);

return 0;

}
