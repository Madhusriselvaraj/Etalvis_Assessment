#include <stdio.h>

int main() {
    int num;
    char str[20];

    printf("Enter an integer: ");
    scanf("%d", &num);

    sprintf(str, "%d", num);

    printf("String value = %s\n", str);

    return 0;
}