#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d;
  scanf("%d %d %d",&a,&b,&c);
  d=(2*(a*b))+(2*(b*c))+(2*(c*a));
  printf("total area: %d",d);
  printf("\nvolume: %d",a*b*c);
  return 0;
}
