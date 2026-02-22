#include <stdio.h>


int main() {

    // - Endereços de memória

    printf("Endereços de memoria em C\n");
    printf("Cada variariável em um programa ocupa um espaço na memória do comuputador, podemos ver esse endereço com o operador '&'.\n\n");
    
    printf("Como pode ver o endereço não precisa que a variável esteja iniciada e não muda quando o valor é alterado.\n");
    int a, b;
    printf("Variável a: O enderenço de memória de a: (%p), valor em a: %d \n", &a, a);
    printf("Variável b: O enderenço de memória de b: (%p), valor em b: %d \n", &b, b);

    a = b = 10;

    printf("Variável a: O enderenço de memória de a: (%p), valor em a: %d \n", &a, a);
    printf("Variável b: O enderenço de memória de b: (%p), valor em b: %d \n", &b, b);
    
    return 0;
}