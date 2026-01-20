#include <stdio.h>

int main()
{
    int a[5], b[5];
    int i, j = 0;

   
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 == 0)   
        {
            b[j] = a[i];
            j++;
        }
    }
    printf("New array after removing odd numbers:\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
