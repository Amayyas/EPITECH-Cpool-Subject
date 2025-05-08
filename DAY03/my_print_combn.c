/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_print_combn
*/

#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);

void print_number(int *tab, int n)
{
    for (int i = 0; i < n; i++) {
        my_putchar(tab[i] + '0');
    }
}

void print_separator(int *tab, int n)
{
    int i = 0;
    int last = 1;

    for (i = 0; i < n - 1; i++) {
        if (tab[i] != 9 - n + 1 + i)
            last = 0;
    }
    if (tab[n - 1] != 9)
        last = 0;
    if (!last) {
        my_putchar(',');
        my_putchar(' ');
    }
}

void increment_combination(int *tab, int n, int pos)
{
    if (pos == n - 1) {
        tab[pos]++;
        return;
    }
    if (tab[pos] == 10 - n + pos) {
        increment_combination(tab, n, pos - 1);
        tab[pos] = tab[pos - 1] + 1;
    } else {
        tab[pos]++;
    }
}

int my_print_combn(int n)
{
    int tab[10];

    if (n <= 0 || n > 10)
        return 84;
    for (int i = 0; i < n; i++)
        tab[i] = i;
    while (1) {
        print_number(tab, n);
        if (tab[0] == 10 - n)
            break;
        print_separator(tab, n);
        increment_combination(tab, n, n - 1);
    }
    return 0;
}
