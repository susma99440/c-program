#include<stdio.h>
int main()
{
        int a=0,b=1,c,i,s;
        scanf("%d",&s);
        for(i=0;i<s;i++)
        {
        	printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        }
}
