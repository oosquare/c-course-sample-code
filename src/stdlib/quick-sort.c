#include <stdio.h>
#include <stdlib.h>

int compare(const void* lhs, const void* rhs) {
    // Pointers of const void* type can't be dereferred directly. 
    int lhs_value = *((const int*) lhs);
    int rhs_value = *((const int*) rhs);
    if (lhs_value < rhs_value) {
        return -1;
    } else if (lhs_value == rhs_value) {
        return 0;
    } else {
        return 1;
    }
}

int main(void) {
    int array[9] = {4, 2, 5, 1, 3, 8, 9, 7, 6};
    qsort(array, 9, sizeof(int), compare);
    for (int i = 0; i < 9; ++i) {
        printf("arrar[%d] = %d\n", i, array[i]);
    }
    return 0;
}
