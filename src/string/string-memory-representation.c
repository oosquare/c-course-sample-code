#include <stdio.h>

int main(void) {
    char str[] = {'s', 't', 'r', '\0', 'e', 'n', 'd'};
    // Note that 'e', 'n', 'd' won't be displayed.
    printf("str = %s\n", str);
    char str2[] = "str2";
    printf("Length of str2 = %d\n", sizeof(str2) / sizeof(char));
    return 0;
}
