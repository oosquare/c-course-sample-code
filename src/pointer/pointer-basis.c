#include <stdio.h>

// Use pointers to modify variables defined outside this function
void swap(int* lhs, int* rhs) {
    // A dereferenced pointer is equivalent to a normal variable
    int tmp = *lhs;
    *lhs = *rhs;
    *rhs = *tmp;
}

int main(void) {
    int a = 0, b = 1;
    swap(&a, &b); // Use `&` to obtain their address
    printf("a = %d, b = %d\n", a, b);
    
    // Always keep the pointer's value be NULL until
    // it can accept a more reasonable value.
    int* ptr = NULL;
    // Check the pointer unless YOU PROMISE THAT IT SHOULD NEVER BE NULL.
    if (ptr != NULL) {
        *ptr = 2; // This line will never get executed.
    }
    return 0;
}
