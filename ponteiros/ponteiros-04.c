#include <stdio.h>

int main() {
    int a = 5;

    int *p;  

    printf("Endereço em Decimal salvo em p: (%d). Não é muito usado\n", p);
    printf("Endereço em Hexadecimal salvo em p: (%p)\n", p);

    return 0;
}