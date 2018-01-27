#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char string[100];
    int i=0,w=1;
       printf("Input the string : ");
       fgets(string,100,stdin);	
    while(string[i]!='\0')
    {
        if(string[i]==' ' || string[i]=='\n' || string[i]=='\t')
        {
            w++;
        }
        i++;
    }
    printf("Total number of words in the string is : %d\n", w-1);
    return 0;
}
