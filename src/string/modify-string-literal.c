#include <stdio.h>

int main(void) {
    // const char* literal = "literal";
    char* literal = "literal";
    literal[0] = 'L';
    printf("%s\n", literal);
    return 0;
}
