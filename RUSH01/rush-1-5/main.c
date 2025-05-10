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
    return 0;
}

void rush_first_part(int x)
{
    if (x == 1) {
        my_putchar('B');
        return;
    }
    my_putchar('A');
    for (int i = 0; i < x - 2; i++) {
        my_putchar('B');
    }
    if (x > 1) {
        my_putchar('C');
    }
    my_putchar('\n');
}

void draw_middle_lines(int x, int y)
{
    for (int j = 0; j < y - 2; j++) {
        my_putchar('B');
        for (int i = 0; i < x - 2; i++) {
            my_putchar(' ');
        }
        if (x > 1) {
            my_putchar('B');
        }
        my_putchar('\n');
    }
}

void draw_bottom_line(int x)
{
    if (x == 1) {
        my_putchar('B');
    } else {
        my_putchar('C');
        for (int i = 0; i < x - 2; i++) {
            my_putchar('B');
        }
        my_putchar('A');
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (error(x, y) == 84) {
        return;
    }
    if (x == 1) {
        for (int j = 0; j < y; j++) {
            my_putchar('B');
            my_putchar('\n');
        }
        return;
    }
    rush_first_part(x);
    if (y > 1) {
        draw_middle_lines(x, y);
        draw_bottom_line(x);
    }
}
