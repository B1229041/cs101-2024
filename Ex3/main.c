#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%100s", str);

    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}