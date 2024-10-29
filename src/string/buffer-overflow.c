#include <stdio.h>
#include <string.h>

int main(void) {
    char too_small_buffer[4] = "";
    int should_be_zero = 0;
    strcpy(
        too_small_buffer,
        "a very long string which overwrites other memory location."
    );
    printf("should_be_zero = %d\n", should_be_zero);
    return 0;
}
