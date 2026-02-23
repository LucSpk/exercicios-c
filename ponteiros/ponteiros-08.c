#include <stdio.h>

int main() {
    char var1 = 'c';

    char *ptr1 = &var1;
    char *ptr2 = ptr1;
    char **ptr3 = &ptr1;
    char ***ptr4 = &ptr3;
    char ****ptr5 = &ptr4;

    printf("%c\n", *ptr1);
    printf("%c\n", *ptr2);
    printf("%c\n\n", **ptr3);


    printf("%p\n", &var1);
    printf("%c\n\n", var1);

    printf("%p\n", &ptr1);
    printf("%p\n", ptr1);
    printf("%c\n\n", *ptr1);


    printf("%p\n", &ptr2);
    printf("%p\n", ptr2);
    printf("%c\n\n", *ptr2);

    printf("%p\n", &ptr3);
    printf("%p\n", ptr3);
    printf("%p\n", *ptr3);
    printf("%c\n\n", **ptr3);
    
    printf("%p\n", &ptr4);
    printf("%p\n", ptr4);
    printf("%p\n", *ptr4);
    printf("%p\n", **ptr4);
    printf("%c\n\n", ***ptr4);
    
    printf("%p\n", &ptr5);
    printf("%p\n", ptr5);
    printf("%p\n", *ptr5);
    printf("%p\n", **ptr5);
    printf("%p\n", ***ptr5);
    printf("%c\n", ****ptr5);

    return 0;
}