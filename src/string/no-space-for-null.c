#include <string.h>

int main(void) {
    char no_space_for_null[8] = "overflow";
    char no_space_for_null2[8];
    strcpy(no_space_for_null2, "overflow");
    return 0;
}
