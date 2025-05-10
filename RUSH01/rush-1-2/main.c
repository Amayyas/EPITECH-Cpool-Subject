/*
** EPITECH PROJECT, 2025
** EPITECH-Cpool-Subject
** File description:
** main
*/

#include <unistd.h>

int my_putchar(char c);

static void my_putstr(char *str)
{
    while (*str) {
        my_putchar(*str);
        str++;
    }
}

static int error(int x, int y)
{
    if (x < 1 || y < 1) {
        my_putstr("Invalid size\n");
        return 84;
    }
    return 0;
}

void put_stars(int x)
{
    for (int i = 0; i < x; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void put_top_line(int x)
{
    if (x == 1)
        my_putchar('*');
    else {
        my_putchar('/');
        for (int i = 2; i < x; i++) {
            my_putchar('*');
        }
        my_putchar('\\');
    }
    my_putchar('\n');
}

void put_bottom_line(int x)
{
    if (x == 1)
        my_putchar('*');
    else {
        my_putchar('\\');
        for (int i = 2; i < x; i++) {
            my_putchar('*');
        }
        my_putchar('/');
    }
    my_putchar('\n');
}

void put_middle_line(int x)
{
    if (x == 1)
        my_putchar('*');
    else {
        my_putchar('*');
        for (int i = 2; i < x; i++) {
            my_putchar(' ');
        }
        my_putchar('*');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (error(x, y) == 84) {
        return;
    }
    if (y == 1)
        put_stars(x);
    else {
        put_top_line(x);
        for (int i = 2; i < y; i++) {
            put_middle_line(x);
        }
        put_bottom_line(x);
    }
}
