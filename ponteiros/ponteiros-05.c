#include <stdio.h>

int main() {
    int a = 5;
    int *p;  
    int **r;        // ponteiro para ponteiro para inteiro

    printf("Como pode ver, todos possuem seus proprios enderenços de memoria:\n");
    printf("Endereço de a: %p\n", &a);
    printf("Endereço de p: %p\n", &p);
    printf("Endereço de r: %p\n", &r);

    p = &a;         // p aponta para a
    r = &p;         // r aponta para p e *r aponta para a
    printf("\np = &a ─> p aponta para a\n");
    printf("r = &p; ─> p r aponta para p e *r aponta para a\n");

    printf("\nEndereço de 'a' salvo em p: %p\n", p);
    printf("Valor de 'a' salvo em *p: %d\n", *p);

    printf("\nEndereço de 'p' salvo em r: %p\n", r);
    printf("Endereço de 'a' salvo em *r: %p\n", *r);
    printf("Valor de 'a' salvo em **r: %d\n", **r);

    printf("\nO ponteiro guarda o endereço de quem ele aponta:\n");
    printf("a: (%d) <──────────── *p: (%p) <──────── **r: (%p)\n", a, p, r);
    printf("[%p]     [%p]               [%p]\n", &a, &p, &r);

    return 0;
}