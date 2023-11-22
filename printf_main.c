#include "include/ft_printf.h"
#include <stdio.h>

int main() {
    char c = 'A';
    char *str = "Hello, world!";
    void *ptr = (void *)str;
    int d = -42;
    unsigned int u = 42;
    int x = 0x2a;
    int X = 0x2A;

    // Testing %c
    printf("Original printf: %c\n", c);
    ft_printf("Custom ft_printf: %c\n", c);

    // Testing %s
    printf("Original printf: %s\n", str);
    ft_printf("Custom ft_printf: %s\n", str);

    // Testing %p
    printf("Original printf: %p\n", ptr);
    ft_printf("Custom ft_printf: %p\n", ptr);

    // Testing %d and %i
    printf("Original printf: %d\n", d);
    ft_printf("Custom ft_printf: %d\n", d);
    printf("Original printf: %i\n", d);
    ft_printf("Custom ft_printf: %i\n", d);

    // Testing %u
    printf("Original printf: %u\n", u);
    ft_printf("Custom ft_printf: %u\n", u);

    // Testing %x
    printf("Original printf: %x\n", x);
    ft_printf("Custom ft_printf: %x\n", x);

    // Testing %X
    printf("Original printf: %X\n", X);
    ft_printf("Custom ft_printf: %X\n", X);

    // Testing %%
    printf("Original printf: %%\n");
    ft_printf("Custom ft_printf: %%\n");

    return 0;
}
