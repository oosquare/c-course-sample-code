#include <stdio.h>
#include <string.h>

char* string_concatenate(char to[] , const char from[]) {
    int i = 0;
    while (to[i] != '\0') {
        ++i;
    }
    for (int j = 0; from[j] != '\0'; ++i, ++j) {
        to[i] = from[j];
    }
    to[i] = '\0';
    return to;
}

int main(void) {
    char str[100] = "initial";
    printf("str = %s\n", str);
    printf("Use strcat(): str = %s\n", strcat(str, "content1"));
    printf("Use string_concatenate(): str = %s\n", string_concatenate(str, "content2"));
    return 0;
}
