#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* dynamic_array = (int*) malloc(sizeof(int) * 10);
    if (dynamic_array == NULL) {
        printf("Failed to allocate memory\n");
        return EXIT_FAILURE;
    }
    for (int i = 0; i < 10; ++i) {
        dynamic_array[i] = i;
        printf("dynamic_array[%d] = %d\n", i, dynamic_array[i]);
    }
    free(dynamic_array);
    dynamic_array = NULL; // Reset the pointer even though we no longer need it.
    return EXIT_SUCCESS;
}
