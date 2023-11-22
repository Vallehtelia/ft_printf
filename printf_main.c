#include <stdio.h>
#include "include/ft_printf.h"

int main() {
    char c = 'A';
    char *str = "Hello, world!";
    void *ptr = (void *)str;
    int d = -42;
    unsigned int u = 42;
    int x = 0x2a;
    int X = 0x2A;

    // Testing %c
    printf("Original printf with c: %c\n", c);
    ft_printf("Custom ft_printf with c: %c\n\n", c);

    // Testing %s
    printf("Original printf with s: %s\n", str);
    ft_printf("Custom ft_printf with s: %s\n\n", str);

    // Testing %p
    printf("Original printf with p: %p\n", ptr);
    ft_printf("Custom ft_printf with p: %p\n\n", ptr);

    // Testing %d and %i
    printf("Original printf with d: %d\n", d);
    ft_printf("Custom ft_printf with d: %d\n", d);
    printf("Original printf with i: %i\n", d);
    ft_printf("Custom ft_printf with i: %i\n\n", d);

    // Testing %u
    printf("Original printf with u: %u\n", u);
    ft_printf("Custom ft_printf with u: %u\n\n", u);

    // Testing %x
    printf("Original printf with x: %x\n", x);
    ft_printf("Custom ft_printf with x: %x\n\n", x);

    // Testing %X
    printf("Original printf with X: %X\n", X);
    ft_printf("Custom ft_printf with X: %X\n\n", X);

    // Testing %%
    printf("Original printf: %%\n");
    ft_printf("Custom ft_printf: %%\n");

    return 0;
}
