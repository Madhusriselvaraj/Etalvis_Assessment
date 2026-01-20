
#include <stdio.h>
#include <string.h>

int main() 
{
    char a[55], b[55];
    int result[110] = {0};

    fgets(a, 55, stdin);
    fgets(b, 55, stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int len1 = strlen(a);
    int len2 = strlen(b);

    for (int i = len1 - 1; i >= 0; i--) 
    {
        for (int j = len2 - 1; j >= 0; j--) 
        {
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2) 
    {
        printf("0");
    } 
    else 
    {
        for (; i < len1 + len2; i++)
            printf("%d", result[i]);
    }

    return 0;
}