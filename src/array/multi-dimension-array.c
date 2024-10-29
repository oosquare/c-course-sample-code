#include <stdio.h>

int array[3][3] = {{0, 1, 2}, {3, 4}, {5}}; // Try use {0, 1, 2, 3, 4, 5};

int main(void) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("array[%d][%d] = %d ", i, j, array[i][j]);
        }
        printf("\n");
    }
    printf("Address of array[0][0] = 0x%p\n", &array[0][0]);
    printf("Address of array[2][2] = 0x%p\n", &array[2][2]);
    return 0;
}
