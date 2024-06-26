/* Program to allocate a single block of integer using malloc */

#include <stdio.h>
#include <stdlib.h>

int* alloc_single_block_int(int **ptr);

int main()
{
    int *ptr;
    ptr = alloc_single_block_int(&ptr);
    if(ptr == NULL)
    printf("Memory not allocated\n");
    else
    printf("Memory allocation succcessful\n");
    printf("%zu\n",sizeof(*ptr));
    return 0;
}

int* alloc_single_block_int(int **ptr)
{
    *ptr = (int *)malloc(sizeof(int));
    return *ptr;
}
