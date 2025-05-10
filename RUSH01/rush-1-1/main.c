/*
** EPITECH PROJECT, 2025
** EPITECH-Cpool-Subject
** File description:
** main
*/

#include <unistd.h>

void my_putchar(char c);

int error(int x, int y)
{
    if (x < 1 || y < 1) {
        write(2, "Invalid size\n", 14);
        return 84;
    }
}

void rush_first_part(int x, int y)
{
    int i;

    if (y > 1) {
        my_putchar('o');
        i = x - 2;
        while (i > 0) {
            my_putchar('-');
            i--;
        }
        if (x > 1) {
            my_putchar('o');
        }
        my_putchar('\n');
    }
}

void draw_middle_lines(int x, int y)
{
    for (int j = y - 2; j > 0; j--) {
        my_putchar('|');
        for (int i = x - 2; i > 0; i--) {
            my_putchar(' ');
        }
        if (x > 1) {
            my_putchar('|');
        }
        my_putchar('\n');
    }
}

void draw_bottom_line(int x)
{
    if (x > 1) {
        my_putchar('o');
        for (int i = x - 2; i > 0; i--) {
            my_putchar('-');
        }
        my_putchar('o');
    } else {
        my_putchar('o');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (error(x, y) == 84) {
        return;
    }
    rush_first_part(x, y);
    draw_middle_lines(x, y);
    draw_bottom_line(x);
}
