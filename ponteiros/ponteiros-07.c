#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    int c = 0;

    int *p;  
    int **r;        // ponteiro para ponteiro para inteiro
    p = &a;         // p aponta para a
    r = &p;         // r aponta para p e *r aponta para a
    c = **r + b;

    printf("Endereço de a: %p\n", &a);
    printf("Endereço de p: %p\n", &p);
    printf("Endereço de r: %p\n", &r);

    printf("Endereço em Decimal salvo em p: (%d). Não é muito usado\n", p);
    printf("Endereço em Hexadecimal salvo em p: (%p)\n", p);

    printf("\nO Valor que esta no endereço de memoria do ponteiro p pode ser exibido com o *p e o porcentagem d: (%%d)\n");
    printf("Valor *p: (%d)\n", *p);
    printf("Usar *p com porcentagem p: (%%p) está errado, porque *p aponta para o valor e não a um espaço de memoria.\n");
    printf("Então ele retorna algo como: (%p)\n", *p);

    printf("\nEndereço em Hexadecimal salvo em r: (%p)\n", r);
    printf("Valor em *r: (%p)\n", *r);
    printf("**Note que é o endereço de 'a' porque foi feito: r = &p então dentro de *r existe o endereço de memoria de a.\n", *r);
    
    printf("\nDa mesma forma não se pode usar **r com porcentagem p: (%%p): (%p)\n", **r);
    printf("Valor em **r: (%d)\n", **r);

    return 0;
}