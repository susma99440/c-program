#include <stdio.h>
#define max_size 100
int main()
{
    int arr[max_size];
    int size;
    int i, j, t;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
  {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                t     = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
