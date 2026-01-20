#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("-\n");
        n = -n;
    }

    char str[12];  
    sprintf(str, "%d", n);  
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
