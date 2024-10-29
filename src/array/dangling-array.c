#include <stdio.h>

/* How to return an array from a function?
??? returning_array() {
    int array[5] = {1, 2, 3, 4, 5};
    return array;
}
*/

// Use pointer (Anti-pattern, don't do this!)
int* returning_array() {
    int array[5] = {1, 2, 3, 4, 5};
    return array;
}

int main(void) {
    int* array = returning_array(); // ???
    printf("array[0] = %d\n", array[0]);
    return 0;
}
