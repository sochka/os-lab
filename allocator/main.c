#include "allocator.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char* ptr1 = mem_alloc(0x10);
    mem_free(ptr1);
    void* ptr2 = mem_alloc(0x36);
    void* ptr3 = mem_alloc(0x10);
    ptr3 = mem_realloc(ptr3, 0x38);
    mem_free(ptr3);
    void* ptr4 = mem_alloc(0x10);
    mem_free(ptr4);

    void* potr1 = malloc(0x10);
    void* potr2 = malloc(0x10);
    free(potr2);
    void* potr4 = malloc(0x10);
    void* potr3 = malloc(0x100);
    printf("%p\n%p\n%p\n%p\n\n", ptr1, ptr2, ptr3, ptr4);
    printf("%p\n%p\n%p\n%p\n", potr1, potr2, potr3, potr4);

    strcpy(ptr1, "Hello, world!");
    mem_dump(ptr1, 0x10);
    return EXIT_SUCCESS;
}
