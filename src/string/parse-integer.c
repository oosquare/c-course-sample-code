#include <stdio.h>
// Here we assume `str` contains a integer exactly.
int parse_integer(const char str[]) {
    int sign = 1, number = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '-') {
            sign = -1;
        } else {
            number = number * 10 + (int) (str[i] - '0');
        }
    }
    return sign * number;
}

int main() {
    printf("Parse \"123\" to %d\n", parse_integer("123"));
    printf("Parse \"-123\" to %d\n", parse_integer("-123"));
    return 0;
}
