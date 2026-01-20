#include <stdio.h>

int main() {
    char num;

    printf("Enter a single number: ");
    scanf("%c", &num);

    printf("ASCII value of %c is %d\n", num, num);

    return 0;
}
