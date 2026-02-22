#include <stdio.h>

int main() {
    int i = 6;
    int *ptr = &i;

    printf("ptr: (%p)\n", ptr);
    printf("*ptr: (%d)\n", *ptr);
    
    printf("ptr + 1: (%p)\n", ptr + 1);
    printf("*ptr + 1: (%d)\n", *ptr + 1);
    
    printf("ptr[1]: (%p)\n", ptr[1]);
    printf("*ptr[1] é invalido\n");
    
    return 0;
}