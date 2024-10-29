#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* file = fopen("file.txt", "w");
    if (file == NULL) {
        perror("Failed to open file.txt with mode \"w\"");
        return EXIT_FAILURE;
    }
    
    fprintf(file, "Hello %s!\n", "World");
    fclose(file);
    
    return EXIT_SUCCESS; // EXIT_SUCCESS == 0
}