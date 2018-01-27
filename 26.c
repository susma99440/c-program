#include <stdio.h>
void main()
{
int a[10];
int i, j,s,t,k;
scanf("%d", &s);
for (i = 0; i <s; i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
{
if(a[i]>a[j])
{
t= a[i];
a[i]=a[j];
a[j]=t;
}
}
}
k=s-2;
{
printf("%d\n",a[k]);
}
}
