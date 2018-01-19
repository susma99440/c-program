#include<stdio.h>
#include<conio.h>
int main()
{
int a,n,rev=0,rem;
printf("enter the any value");
scanf("%d",n);
a=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(a==rev)
{
print("palindrome%d",n);
}
else
{
printf("not palindrome");
}
return 0;
}
