#include <stdio.h>
#include <string.h>

int string_compare(const char lhs[], const char rhs[]) {
    for (int i = 0; ; ++i) {
        if (lhs[i] == '\0' || rhs[i] == '\0' || lhs[i] != rhs[i]) {
            int delta = (int) lhs[i] - (int) rhs[i];
            return (delta == 0 ? 0 : (delta < 0 ? -1 : 1));
        }
    }
}

int main(void) {
    printf("Use strcmp: %d\n", strcmp("abc", "abc"));
    printf("Use string_compare: %d\n", string_compare("abc", "abc"));
    printf("Use strcmp: %d\n", strcmp("abc", "abc"));
    printf("Use string_compare: %d\n", string_compare("a", "ab"));
    printf("Use strcmp: %d\n", strcmp("abc", "abc"));
    printf("Use string_compare: %d\n", string_compare("2", "1"));
    return 0;
}
