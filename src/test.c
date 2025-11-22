// Coalloc test

#include <stdio.h>
#include <coalloc.h>

int main(void) {
    int *arr = coalloc(10, sizeof(int), 0xEE); // Testing fill with 0xEE (if you want indicate another parameter)

    if (!arr) {
        fprintf(stderr, "Not enough memory\n");
        return 1;
    }

    return 0;
}