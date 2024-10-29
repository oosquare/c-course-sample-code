#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* file = fopen("file.txt", "r");
    if (file == NULL) {
        perror("Failed to open file.txt with mode \"r\"");
        return EXIT_FAILURE;
    }
    
    char buffer[32]; // In practice, the buffer size is usually 1024
    int id = 0;
    // A count is required here to prevent buffer overflow
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("== Chunk %d ==\n", id);
        printf("%s\n", buffer);
        ++id;
    }
    if (feof(file)) { // Check if we have reached EOF
        printf("== EOF ==\n");
    }
    fclose(file);
    
    return EXIT_SUCCESS; // EXIT_SUCCESS == 0
}
