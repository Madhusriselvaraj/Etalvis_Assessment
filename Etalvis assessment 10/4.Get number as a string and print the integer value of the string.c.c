#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20];
    int num;

    printf("Enter a number as string: ");
    scanf("%s", str);

    num = atoi(str);

    printf("Integer value = %d\n", num);

    return 0;
}