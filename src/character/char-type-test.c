#include <stdio.h>
#include <ctype.h>

int main(void) {
    printf("isalpha('a') = %d\n", isalpha('a'));
    printf("isdigit('0') = %d\n", isdigit('0'));
    printf("isalnum('a') = %d\n", isalnum('a'));
    printf("isalnum('0') = %d\n", isalnum('0'));
    printf("islower('l') = %d\n", islower('l'));
    printf("isupper('U') = %d\n", isupper('U'));

    printf("toupper('l') = %c\n", toupper('l'));
    printf("tolower('U') = %c\n", tolower('U'));

    printf("islower('0') = %d\n", islower('0'));
    printf("tolower('0') = %c\n", tolower('0'));
    return 0;
}
