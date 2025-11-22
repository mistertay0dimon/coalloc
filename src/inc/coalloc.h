#ifndef COALLOC_H
#define COALLOC_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *coalloc(size_t count, size_t size, unsigned char fill);

#endif // COALLOC_H