#include <stdio.h>
#include <string.h>

int main() {
    char num[51];
    int i, len;
    char temp;

    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", num);

    len = strlen(num);

   
    for (i = 0; i < len / 2; i++) {
        temp = num[i];
        num[i] = num[len - i - 1];
        num[len - i - 1] = temp;
    }

    printf("Reversed number: %s\n", num);

    return 0;
}
