#include <stdio.h>

void function(int array[]) {
    array[0] = 1;
    printf("Modified array[0] to %d in function().\n", array[0]);
}

int main(void) {
    int array[2] = {0, 0};
    
    printf("Before calling function():\n");
    printf("array[0] = %d, array[1] = %d\n", array[0], array[1]);
    
    function(array);
    
    printf("After calling function():\n");
    printf("array[0] = %d, array[1] = %d\n", array[0], array[1]);
    return 0;
}
