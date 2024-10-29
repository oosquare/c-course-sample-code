#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char* string_find(const char subject[], const char pattern[]) {
    int len_subject = strlen(subject);
    int len_pattern = strlen(pattern);
    for (int i = 0; i <= len_subject - len_pattern; ++i) {
        bool matched = true;
        for (int j = 0; j < len_pattern; ++j) {
            if (subject[i + j] != pattern[j]) {
                matched = 0;
                break;
            }
        }
        if (matched) {
            return &subject[i];
        }
    }
    return NULL;
}

int main(void) {
    const char subject[] = "abcdefg";
    const char pattern[] = "cde";
    printf("Use strstr: address = 0x%p\n", strstr(subject, pattern));
    printf("Use strstr: index = %d\n", strstr(subject, pattern) - subject);
    printf("Use string_find: address = 0x%p\n", string_find(subject, pattern));
    printf("Use string_find: index = %d\n", string_find(subject, pattern) - subject);
    return 0;
}
