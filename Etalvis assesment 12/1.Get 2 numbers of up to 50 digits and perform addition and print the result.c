#include <stdio.h>
#include <string.h>

void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *res);
void print(char *res);

int main()
{
    char number1[51], number2[51], result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}

void getnumbers(char *n1, char *n2)
{
    scanf("%s", n1);
    scanf("%s", n2);
}

void addnumbers(char *n1, char *n2, char *res)
{
    int i, j, k, carry = 0, sum;
    int len1 = strlen(n1);
    int len2 = strlen(n2);

    i = len1 - 1;
    j = len2 - 1;
    k = (len1 > len2 ? len1 : len2);

    res[k + 1] = '\0';

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;

        if (i >= 0)
            sum += *(n1 + i--) - '0';
        if (j >= 0)
            sum += *(n2 + j--) - '0';

        *(res + k--) = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (k >= 0)
    {
        memmove(res, res + k + 1, strlen(res + k + 1) + 1);
    }
}

void print(char *res)
{
    printf("%s", res);
}
