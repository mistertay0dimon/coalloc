# coalloc
Non-stantard C function to allocate memory.
## What is it for?
coalloc (Controlled Allocate) it is a function for allocate memory, like calloc but more flexible.
## How it work?
It requires 3 params:

count (size_t) - Memory block count.

size (size_t) - Size.

fill (unsigned char/uint8_t) - The byte that will fill the remaining memory.

First, it's allocating memory with malloc.

Then, it's filling remaining memory byte specified in the fill argument with memset.

## How to use it?
Download the coalloc.h and coalloc.c

Then, include it in your code.

Then you need to specify the location of the coalloc.c and coalloc.h files in the compilation command.

And, use it!
