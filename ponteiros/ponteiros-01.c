#include <stdio.h>

int main() {

    int i;
    int *ptr;

    printf("Endereço do do i: (%p)\n", &i);
    printf("Endereço do ponteiro: (%p)\n", ptr);
    
    ptr = &i;
    printf("Endereço do ponteiro: (%p)\n", ptr);
    
    return 0;
}