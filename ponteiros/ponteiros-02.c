#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    int c = 0;

    int *p;
    int *q; 
    p = &a;
    q = &b;
    c = *p + *q;

    printf("p: (%p)\n", p);
    printf("*p: (%d)\n", *p);

    printf("q: (%p)\n", q);
    printf("*q: (%d)\n", *q);

    printf("\nEndereço do do c: (%p)\n", &c);
    printf("a(5) + b(7) = c - Valor em c: (%d)\n", c);
    
    return 0;
}