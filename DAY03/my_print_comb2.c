/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_print_comb2
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

void print_separator_comb2(int a, int b)
{
    if (a == 98 && b == 99) {
        return;
    }
    my_putchar(',');
    my_putchar(' ');
}

int my_print_comb2(void)
{
    for (int a = 0; a < 99; a++) {
        for (int b = a + 1; b < 100; b++) {
            my_putchar((a / 10) + '0');
            my_putchar((a % 10) + '0');
            my_putchar(' ');
            my_putchar((b / 10) + '0');
            my_putchar((b % 10) + '0');
            print_separator_comb2(a, b);
        }
    }
    my_putchar('\n');
    return 0;
}
