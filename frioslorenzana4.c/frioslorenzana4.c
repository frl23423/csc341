#include <stdio.h>
#include <stdlib.h>

// Uninitialized global variable (BSS segment)
int global_uninit_var;

// Initialized global variable (Data segment)
int global_init_var = 42;

int main(int argc, char *argv[]) {
    // Stack variable
    int stack_var = 10;

    // Heap variable
    int *heap_var = (int *)malloc(sizeof(int));
    *heap_var = 20;

    printf("Address of argc: %p\n", (void *)&argc);
    printf("Address of stack variable: %p\n", (void *)&stack_var);
    printf("Address of heap variable: %p\n", (void *)heap_var);
    printf("Address of uninitialized global variable: %p\n", (void *)&global_uninit_var);
    printf("Address of initialized global variable: %p\n", (void *)&global_init_var);

    free(heap_var);
    return 0;
}
