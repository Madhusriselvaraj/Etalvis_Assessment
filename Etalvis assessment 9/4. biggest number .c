#include <stdio.h>

int main()
{
    int a[5];
    int i, max;

    // Get 5 numbers from user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Assume first element is biggest
    max = a[0];

    // Find biggest
    for (i = 1; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    // Print biggest
    printf("Biggest number = %d\n", max);

    return 0;
}
