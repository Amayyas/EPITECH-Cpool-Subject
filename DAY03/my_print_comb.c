/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_print_comb
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

void print_separator(int a, int b, int c)
{
    if (a == 7 && b == 8 && c == 9) {
        return;
    }
    my_putchar(',');
    my_putchar(' ');
}

void print_comb(int a, int b, int c)
{
    my_putchar(a + '0');
    my_putchar(b + '0');
    my_putchar(c + '0');
    print_separator(a, b, c);
}

void gen_comb(int a, int b)
{
    for (int c = b + 1; c < 10; c++) {
        print_comb(a, b, c);
    }
}

int my_print_comb(void)
{
    for (int a = 0; a < 8; a++) {
        for (int b = a + 1; b < 9; b++) {
            gen_comb(a, b);
        }
    }
    return 0;
}
