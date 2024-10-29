#include <stdio.h>
#include <string.h>

int string_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

int main(void) {
    char str[] = "Hello world";
    printf("strlen(str) = %d\n", strlen(str));
    printf("string_length(str) = %d\n", string_length(str));
    return 0;
}
