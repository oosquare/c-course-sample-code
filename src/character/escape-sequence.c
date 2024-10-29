#include <stdio.h>

int main(void) {
    printf("Single quote:%c\n", '\'');
    printf("Double quote:%c\n", '\"');
    printf("Backslash:%c\n", '\\');
    printf("Bell:%c\n", '\a');
    printf("Backspace:%c \n", '\b');
    printf("New line / line feed:%c\n", '\n');
    printf("Carriage return:%c<overwrite>\n", '\r');
    printf("Horizontal tab 1:%c<end>\n", '\t');
    printf("Horizontal tab 2 :%c<end>\n", '\t');
    printf("Horizontal tab 3  :%c<end>\n", '\t');
    printf("Horizontal tab 4   :%c<end>\n", '\t');
    printf("Horizontal tab 5    :%c<end>\n", '\t');
    printf("Horizontal tab 6     :%c<end>\n", '\t');
    printf("Horizontal tab 7      :%c<end>\n", '\t');
    printf("Horizontal tab 8       :%c<end>\n", '\t');
    printf("Null:%d\n", '\0'); // Pay attention to %d here.
    return 0;
}
