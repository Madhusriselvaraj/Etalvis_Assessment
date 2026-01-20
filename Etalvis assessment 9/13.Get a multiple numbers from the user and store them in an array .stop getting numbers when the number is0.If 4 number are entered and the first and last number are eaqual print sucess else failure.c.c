#include <stdio.h>

int main()
{
    int arr[10];
    int n, count = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        arr[count] = n;
        count++;
    }

    if (count == 4 && arr[0] == arr[count - 1])
        printf("Success");
    else
        printf("Failure");

    return 0;
}
