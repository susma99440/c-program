#include<stdio.h>
    void main()
    {
    int hr1,m1,hr2,m2,sub1,sub2;
    scanf("%d\t%d",&hr1,&m1);
    scanf("%d\t%d",&hr2,&m2);
    sub1=hr1-hr2;
    sub2=m1-m2;
    printf("%d\t%d",sub1,sub2);
    }
