#include <stdio.h>

int main(void) {
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Retrieve values from an array. 
    for (int i = 0; i < 10; ++i) {
        printf("i = %d, array[i] = %d\n", i, array[i]);
    }
    // Assign values to an array.
    for (int i = 0; i < 10; ++i) {
        array[i] = 10;
    }
    // Get the size of an array.
    // Evaluates to `40` on amd64 platform.
    printf("sizeof(array) = %d\n", sizeof(array));
    return 0;
}
