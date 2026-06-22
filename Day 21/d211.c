#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0')
        len++;

    if(str[len-1] == '\n')
        len--;

    printf("Length = %d", len);

    return 0;
}