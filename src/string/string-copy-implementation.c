#include <stdio.h>
#include <string.h>

char* string_copy(char to[] , const char from[]) {
    int i = 0;
    for (; from[i] != '\0'; ++i) {
        to[i] = from[i];
    }
    to[i] = '\0';
    return to;
}

int main(void) {
    char str[10] = "initial";
    printf("str = %s\n", str);
    printf("Use strcpy(): str = %s\n", strcpy(str, "content1"));
    printf("Use string_copy(): str = %s\n", string_copy(str, "content2"));
    return 0;
}
