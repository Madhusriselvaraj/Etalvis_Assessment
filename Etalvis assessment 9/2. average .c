#include <stdio.h>

int main()
{
    int a[5];
    int i, sum = 0;
    float avg;

    // Get 5 numbers from user
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // Calculate sum
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    // Calculate average
    avg = sum / 5.0;

    // Print average
    printf("Average = %.2f\n", avg);

    return 0;
}
