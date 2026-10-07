#include <stdio.h>

static int _contar_digitos(int num) {
    if(num == 0)
        return 1;
    
    if(num < 0)
        num = -num;

    int cont = 0;
    while (num != 0) {
        num /= 10;
        cont++;
    }
    return cont;
}

int main() {
    int num = 12345;
    printf("O numero %d tem %d digitos.\n", num, _contar_digitos(num));

    return 0;
}