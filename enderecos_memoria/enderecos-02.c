#include <stdio.h>

int main() {
    char c;
    int i;
    struct {
        int x, y;
    } str;
    int arr[4];

    printf("Tanho de um char: %d\n", sizeof(char));
    printf("Tanho de um int: %d\n", sizeof(int));
    
    printf("c: (%p)\n", &c);
    printf("c + 1: (%p)\n", &c + 1);
    printf("i: (%p)\n", &i);
    printf("str: (%p)\n", &str);
    printf("str.x: (%p)\n", &str.x);
    printf("str.y: (%p)\n", &str.y);
    printf("arr[0]: (%p)\n", &arr[0]);
    printf("arr[1]: (%p)\n", &arr[1]);
    printf("arr[2]: (%p)\n", &arr[2]);
    printf("arr[2]: (%p)\n", &arr[3]);

    return 0;
}