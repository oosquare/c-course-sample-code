#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "very long string";
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c", str[i]);
    }
    return 0;
}
