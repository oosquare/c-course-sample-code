#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); // Use the current timestamp as the seed.
    printf("RAND_MAX = %d\n", RAND_MAX);
    printf("Generate 10 random numbers:");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", rand());
    }
    printf("\n");
    return 0;
}
