#include "coalloc.h"

void *coalloc(size_t count, size_t size, unsigned char fill) {
    void *ptr = malloc(count * size);
    if (!ptr) {
        fprintf(stderr, "Failed to allocate memory.\n ptr = NULL.\n");
        return NULL;
    }

    memset(ptr, fill, count * size);
    return ptr;
}